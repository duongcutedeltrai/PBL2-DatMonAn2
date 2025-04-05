#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <msclr/marshal.h> 
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Collections::Generic;
using namespace msclr::interop;
using namespace std;
using namespace System::Windows::Forms;


ref class MonAn
{
public:
    String^ ID;
    String^ LoaiMon; 
    String^ TenMon;      
    String^ Gia;         
    String^ Anh; 
	int SoLuong;    

    MonAn(String^ loai, String^ ten, String^ gia, String^ anh)
    {
        DateTime now = DateTime::Now;
        ID = now.ToString("yyyyMMddHHmmss");
        LoaiMon = loai;
        TenMon = ten;
        Gia = gia;
        Anh = anh;
        SoLuong = 1;
    }

    // Constructor dùng khi đọc dữ liệu từ file (có ID và SoLuong)
    MonAn(String^ id, String^ loai, String^ ten, String^ gia, String^ anh, int soluong)
    {
        ID = id;
        LoaiMon = loai;
        TenMon = ten;
        Gia = gia;
        Anh = anh;
        SoLuong = soluong;
    }


    //ghi danh sach mon an
    static void GhiDanhSachMonAn(List<MonAn^>^ danhSachMon, String^ filePath) {
        try {
            // Tạo StreamWriter với mã hóa UTF-8 và ghi nối tiếp (append)
            System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, false, System::Text::Encoding::UTF8);
            for each(MonAn ^ mon in danhSachMon) {
                String^ dong = mon->ID + "||" + mon->TenMon + "||" + mon->Gia + "$||" + mon->LoaiMon + "||" + mon->Anh + "||";
                writer->WriteLine(dong); // Ghi từng dòng vào file
            }
            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Lỗi khi ghi file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    static List<MonAn^>^ DocDanhSachMonAn(String^ filePath) {
        List<MonAn^>^ danhSachMon = gcnew List<MonAn^>();
        try {
            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath,System::Text::Encoding::UTF8);
            String^ dong;
            while ((dong = reader->ReadLine()) != nullptr) {
                if (String::IsNullOrWhiteSpace(dong)) continue; // Bỏ qua dòng trống
                cli::array<String^>^ phan = dong->Split(gcnew cli::array<String^>{ "||" }, StringSplitOptions::RemoveEmptyEntries);
                if (phan->Length >= 5) {
                    String^ idStr = phan[0];
                    String^ tenStr = phan[1];
                    String^ giaStr = phan[2]->Replace("$", ""); // Loại bỏ ký tự "$" nếu cần
                    String^ loaiStr = phan[3];
                    String^ anhStr = phan[4];
                    MonAn^ mon = gcnew MonAn(loaiStr, tenStr, giaStr, anhStr);
                    mon->ID = idStr; // Gán ID
                    danhSachMon->Add(mon);
                }
            }
            reader->Close(); // Đóng file sau khi đọc xong
        }
        catch (Exception^ ex) {
            MessageBox::Show("Lỗi khi đọc file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        return danhSachMon;
    }

};

