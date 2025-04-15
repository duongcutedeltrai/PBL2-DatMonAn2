#include "MonAn.h"

namespace PBL2DatMonAn {
    MonAn::MonAn(String^ loai, String^ ten, String^ gia, String^ anh) {
        DateTime now = DateTime::Now;
        ID = now.ToString("yyyyMMddHHmmss");
        LoaiMon = loai;
        TenMon = ten;
        Gia = gia;
        Anh = anh;
        SoLuong = 1;
    }

    MonAn::MonAn(String^ id, String^ loai, String^ ten, String^ gia, String^ anh, int soluong) {
        ID = id;
        LoaiMon = loai;
        TenMon = ten;
        Gia = gia;
        Anh = anh;
        SoLuong = soluong;
    }

    // Ghi danh sách món ăn vào file
    void MonAn::GhiDanhSachMonAn(List<MonAn^>^ danhSachMon, String^ FoodfilePath) {
        try {
            System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(FoodfilePath, false, System::Text::Encoding::UTF8);
            for each (MonAn ^ mon in danhSachMon) {
                String^ dong = String::Format("{0}||{1}||{2}$||{3}||{4}||",
                    mon->ID, mon->TenMon, mon->Gia, mon->LoaiMon, mon->Anh);
                writer->WriteLine(dong);
            }
            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Lỗi khi ghi file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    // Đọc danh sách món ăn từ file
    List<MonAn^>^ MonAn::DocDanhSachMonAn(String^ FoodfilePath) {
        List<MonAn^>^ danhSachMon = gcnew List<MonAn^>();
        try {
            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(FoodfilePath, System::Text::Encoding::UTF8);
            String^ dong;
            while ((dong = reader->ReadLine()) != nullptr) {
                if (String::IsNullOrWhiteSpace(dong)) continue; // Bỏ qua dòng trống
                cli::array<String^>^ phan = dong->Split(gcnew cli::array<String^>{ "||" }, StringSplitOptions::RemoveEmptyEntries);
                if (phan->Length >= 5) {
                    String^ idStr = phan[0];
                    String^ tenStr = phan[1];
                    String^ giaStr = phan[2]->Replace("$", ""); // Loại bỏ ký tự "$"
                    String^ loaiStr = phan[3];
                    String^ anhStr = phan[4];
                    MonAn^ mon = gcnew MonAn(loaiStr, tenStr, giaStr, anhStr);
                    mon->ID = idStr; // Gán ID từ file
                    danhSachMon->Add(mon);
                }
            }
            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Lỗi khi đọc file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        return danhSachMon;
    }
}