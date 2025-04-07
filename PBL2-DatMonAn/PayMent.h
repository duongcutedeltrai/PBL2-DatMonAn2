#pragma once
#include "MonAn.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

namespace PBL2DatMonAn {

    ref class PayMent
    {
    public:
        System::String^ ID;
        System::String^ BanID;
        System::String^ SoBan;
        System::String^ TenNhanVien;
        List<MonAn^>^ DanhSachMon;
        double TongTien;
        System::DateTime ThoiGianThanhToan;
        System::String^ PhuongThucThanhToan;

        PayMent(String^ banID, String^ soBan, String^ tenNhanVien, List<MonAn^>^ danhSachMon, double tongTien, String^ phuongThucThanhToan) {
            DateTime now = DateTime::Now;
            ID = now.ToString("yyyyMMddHHmmss");
            BanID = banID;
            SoBan = soBan;
            TenNhanVien = tenNhanVien;
            DanhSachMon = gcnew List<MonAn^>();
            for each(MonAn ^ mon in danhSachMon) {
                MonAn^ monMoi = gcnew MonAn(mon->LoaiMon, mon->TenMon, mon->Gia, mon->Anh);
                monMoi->ID = mon->ID;
                monMoi->SoLuong = mon->SoLuong;
                DanhSachMon->Add(monMoi);
            }
            TongTien = tongTien;
            ThoiGianThanhToan = now;
            PhuongThucThanhToan = phuongThucThanhToan;
        }

        static void GhiDanhSachHoaDon(List<PayMent^>^ danhSachHoaDon, String^ filePath) {
            try {
                System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, true, System::Text::Encoding::UTF8);
                for each(PayMent ^ bill in danhSachHoaDon) {
                    String^ monAnStr = "";
                    for each(MonAn ^ mon in bill->DanhSachMon) {
                        monAnStr += mon->LoaiMon + ":" + mon->TenMon + ":" + mon->Gia + "$" + ":" + mon->SoLuong.ToString() + ";";
                    }
                    if (monAnStr != "") monAnStr = monAnStr->Substring(0, monAnStr->Length - 1);

                    String^ line = bill->ID + "|" + bill->BanID + "|" + bill->SoBan + "|" + bill->TenNhanVien + "|" + monAnStr + "|" +
                        bill->TongTien.ToString("F2") + "$" + "|" + bill->ThoiGianThanhToan.ToString("yyyy-MM-dd HH:mm:ss") + "|" +
                        bill->PhuongThucThanhToan;
                    writer->WriteLine(line);
                }
                writer->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Lỗi khi ghi file bill.txt: " + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        static List<PayMent^>^ DocDanhSachHoaDon(String^ filePath) {
            List<PayMent^>^ danhSachHoaDon = gcnew List<PayMent^>();
            try {
                if (!System::IO::File::Exists(filePath)) {
                    return danhSachHoaDon;
                }

                System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath, System::Text::Encoding::UTF8);
                String^ line;
                while ((line = reader->ReadLine()) != nullptr) {
                    if (String::IsNullOrWhiteSpace(line)) continue;
                    cli::array<String^>^ parts = line->Split(gcnew cli::array<Char>{ '|' });
                    if (parts->Length != 8) continue;

                    PayMent^ bill = gcnew PayMent(parts[1], parts[2], parts[3], gcnew List<MonAn^>(), Convert::ToDouble(parts[5]), parts[7]);
                    bill->ID = parts[0];
                    bill->ThoiGianThanhToan = DateTime::Parse(parts[6]);

                    if (!String::IsNullOrEmpty(parts[4])) {
                        cli::array<String^>^ monAnParts = parts[4]->Split(';');
                        for each(String ^ monAnStr in monAnParts) {
                            if (String::IsNullOrWhiteSpace(monAnStr)) continue;
                            cli::array<String^>^ monAnDetails = monAnStr->Split(':');
                            if (monAnDetails->Length == 6) {
                                MonAn^ monAn = gcnew MonAn(monAnDetails[1], monAnDetails[2], monAnDetails[3], monAnDetails[4]);
                                monAn->ID = monAnDetails[0];
                                monAn->SoLuong = Convert::ToInt32(monAnDetails[5]);
                                bill->DanhSachMon->Add(monAn);
                            }
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
    };
}