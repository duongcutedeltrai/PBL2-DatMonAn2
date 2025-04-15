#include "PayMent.h"

namespace PBL2DatMonAn {
    // Constructor
    PayMent::PayMent(String^ banID, String^ soBan, String^ tenNhanVien, List<MonAn^>^ danhSachMon, double tongTien, String^ phuongThucThanhToan) {
        DateTime now = DateTime::Now;
        ID = now.ToString("yyyyMMddHHmmss");
        BanID = banID;
        SoBan = soBan;
        TenNhanVien = tenNhanVien;
        DanhSachMon = gcnew List<MonAn^>();
        for each (MonAn ^ mon in danhSachMon) {
            MonAn^ monMoi = gcnew MonAn(mon->LoaiMon, mon->TenMon, mon->Gia, mon->Anh);
            monMoi->ID = mon->ID;
            monMoi->SoLuong = mon->SoLuong;
            DanhSachMon->Add(monMoi);
        }
        TongTien = tongTien;
        ThoiGianThanhToan = now;
        PhuongThucThanhToan = phuongThucThanhToan;
        Discountpercent = 0.0;
    }

    // Ghi danh sách hóa đơn vào file
    void PayMent::GhiDanhSachHoaDon(List<PayMent^>^ danhSachHoaDon, String^ BillfilePath) {
        try {
            System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(BillfilePath, true, System::Text::Encoding::UTF8);
            for each (PayMent ^ bill in danhSachHoaDon) {
                String^ monAnStr = "";
                for each (MonAn ^ mon in bill->DanhSachMon) {
                    monAnStr += String::Format("{0}:{1}:{2}:{3};",
                        mon->LoaiMon, mon->TenMon, mon->Gia->Replace("$", ""), mon->SoLuong);
                }
                if (monAnStr != "") monAnStr = monAnStr->Substring(0, monAnStr->Length - 1); // Xóa dấu ; cuối
                String^ line = String::Format("{0}|{1}|{2}|{3}|{4}|{5:F2}|{6:yyyy-MM-dd HH:mm:ss}|{7}|{8:F2}",
                    bill->ID, bill->BanID, bill->SoBan, bill->TenNhanVien, monAnStr,
                    bill->TongTien, bill->ThoiGianThanhToan, bill->PhuongThucThanhToan, bill->Discountpercent);
                writer->WriteLine(line);
            }
            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show(L"Lỗi khi ghi file bill.txt: " + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    // Đọc danh sách hóa đơn từ file
    List<PayMent^>^ PayMent::DocDanhSachHoaDon(String^ BillfilePath) {
        List<PayMent^>^ danhSachHoaDon = gcnew List<PayMent^>();
        try {
            if (!System::IO::File::Exists(BillfilePath)) {
                return danhSachHoaDon; // Trả về danh sách rỗng nếu file không tồn tại
            }

            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(BillfilePath, System::Text::Encoding::UTF8);
            String^ line;
            while ((line = reader->ReadLine()) != nullptr) {
                if (String::IsNullOrWhiteSpace(line)) continue;
                cli::array<String^>^ parts = line->Split('|');
                if (parts->Length < 8) { // Đảm bảo đủ 8 trường cơ bản
                    System::IO::File::AppendAllText("error.log", DateTime::Now + ": Dòng không hợp lệ: " + line + "\n");
                    continue;
                }

                double tongTien;
                if (!Double::TryParse(parts[5], tongTien)) continue;

                PayMent^ bill = gcnew PayMent(parts[1], parts[2], parts[3], gcnew List<MonAn^>(), tongTien, parts[7]);
                bill->ID = parts[0];
                bill->ThoiGianThanhToan = DateTime::Parse(parts[6]);

                // Xử lý Discountpercent (trường tùy chọn)
                if (parts->Length >= 9) {
                    double discount;
                    bill->Discountpercent = Double::TryParse(parts[8], discount) ? discount : 0.0;
                }
                else {
                    bill->Discountpercent = 0.0;
                }

                // Đọc danh sách món ăn
                if (!String::IsNullOrEmpty(parts[4])) {
                    cli::array<String^>^ monAnParts = parts[4]->Split(';');
                    for each (String ^ monAnStr in monAnParts) {
                        if (String::IsNullOrWhiteSpace(monAnStr)) continue;
                        cli::array<String^>^ monAnDetails = monAnStr->Split(':');
                        if (monAnDetails->Length != 4) continue;
                        int soLuong;
                        if (!Int32::TryParse(monAnDetails[3], soLuong)) continue;
                        MonAn^ monAn = gcnew MonAn(monAnDetails[0], monAnDetails[1], monAnDetails[2], "");
                        monAn->SoLuong = soLuong;
                        bill->DanhSachMon->Add(monAn);
                    }
                }
                danhSachHoaDon->Add(bill);
            }
            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show(L"Lỗi khi đọc file bill.txt: " + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        return danhSachHoaDon;
    }
}