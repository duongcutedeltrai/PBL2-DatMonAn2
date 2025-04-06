#pragma once
#include "MonAn.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class ManagerTable
{
//public:
//    System::String^ ID;
//    System::String^ SoBan;
//    System::String^ TrangThai;
//    List<MonAn^>^ DanhSachMon;
//
//    ManagerTable(String^ soBan) {
//        DateTime now = DateTime::Now;
//        ID = now.ToString("yyyyMMddHHmmss");
//        SoBan = soBan;
//        TrangThai = L"Trống";
//        DanhSachMon = gcnew List<MonAn^>();
//    }
//
//    // Đọc danh sách bàn từ file ban.txt
//    static List<ManagerTable^>^ DocDanhSachBan(String^ filePath) {
//        List<ManagerTable^>^ danhSachBan = gcnew List<ManagerTable^>();
//        try {
//            if (!System::IO::File::Exists(filePath)) {
//                // Nếu file chưa tồn tại, tạo file với 10 bàn mặc định
//                for (int i = 1; i <= 10; i++) {
//                    ManagerTable^ ban = gcnew ManagerTable(L"Bàn" + i);
//                    danhSachBan->Add(ban);
//                }
//                GhiDanhSachBan(danhSachBan, filePath);
//                return danhSachBan;
//            }
//
//            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath, System::Text::Encoding::UTF8);
//            String^ dong;
//            while ((dong = reader->ReadLine()) != nullptr) {
//                if (String::IsNullOrWhiteSpace(dong)) continue; // Bỏ qua dòng trống
//                cli::array<String^>^ parts = dong->Split(gcnew cli::array<Char>{ '|' });
//                if (parts->Length < 4) continue; // Đảm bảo có đủ 4 trường: ID|SoBan|TrangThai|DanhSachMon
//
//                ManagerTable^ ban = gcnew ManagerTable(parts[1]); // parts[1] là SoBan
//                ban->ID = parts[0]; // Gán ID từ file
//                ban->TrangThai = parts[2];
//
//                // Đọc danh sách món ăn
//                ban->DanhSachMon = gcnew List<MonAn^>();
//                if (parts[3] != "") {
//                    cli::array<String^>^ monAnParts = parts[3]->Split(';');
//                    for each (String ^ monAnStr in monAnParts) {
//                        cli::array<String^>^ monAnDetails = monAnStr->Split(':');
//                        if (monAnDetails->Length == 4) {
//                            MonAn^ monAn = gcnew MonAn(monAnDetails[0], monAnDetails[1], monAnDetails[2], monAnDetails[3]);
//                            ban->DanhSachMon->Add(monAn);
//                        }
//                    }
//                }
//                danhSachBan->Add(ban);
//            }
//            reader->Close();
//        }
//        catch (Exception^ ex) {
//            MessageBox::Show(L"Lỗi khi đọc file ban.txt: " + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
//        }
//        return danhSachBan;
//    }
//
//    // Ghi danh sách bàn vào file ban.txt
//    static void GhiDanhSachBan(List<ManagerTable^>^ danhSachBan, String^ filePath) {
//        try {
//            System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, false, System::Text::Encoding::UTF8);
//            for each (ManagerTable ^ ban in danhSachBan) {
//                String^ monAnStr = "";
//                for each (MonAn ^ monAn in ban->DanhSachMon) {
//                    monAnStr += monAn->LoaiMon + ":" + monAn->TenMon + ":" + monAn->Gia + ":" + monAn->Anh + ";";
//                }
//                if (monAnStr != "") monAnStr = monAnStr->Substring(0, monAnStr->Length - 1); // Xóa dấu ; cuối
//                String^ line = ban->ID + "|" + ban->SoBan + "|" + ban->TrangThai + "|" + monAnStr;
//                writer->WriteLine(line);
//            }
//            writer->Close();
//        }
//        catch (Exception^ ex) {
//            MessageBox::Show(L"Lỗi khi ghi file ban.txt: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
//        }
//    };

public:
    System::String^ ID;
    System::String^ SoBan;
    System::String^ TrangThai;
    List<MonAn^>^ DanhSachMon;

    ManagerTable(String^ soBan) {
        DateTime now = DateTime::Now;
        ID = now.ToString("yyyyMMddHHmmss");
        SoBan = soBan;
        TrangThai = L"Trống";
        DanhSachMon = gcnew List<MonAn^>();
    }

    // Đọc danh sách bàn từ file ban.txt
    static List<ManagerTable^>^ DocDanhSachBan(String^ filePath) {
        List<ManagerTable^>^ danhSachBan = gcnew List<ManagerTable^>();
        try {
            if (!System::IO::File::Exists(filePath)) {
                // Nếu file chưa tồn tại, tạo file với 10 bàn mặc định
                for (int i = 1; i <= 10; i++) {
                    ManagerTable^ ban = gcnew ManagerTable(L"Bàn" + i);
                    danhSachBan->Add(ban);
                }
                GhiDanhSachBan(danhSachBan, filePath);
                return danhSachBan;
            }

            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath, System::Text::Encoding::UTF8);
            String^ dong;
            while ((dong = reader->ReadLine()) != nullptr) {
                if (String::IsNullOrWhiteSpace(dong)) continue; // Bỏ qua dòng trống
                cli::array<String^>^ parts = dong->Split(gcnew cli::array<Char>{ '|' });
                if (parts->Length < 4) continue; // Đảm bảo có đủ 4 trường: ID|SoBan|TrangThai|DanhSachMon

                ManagerTable^ ban = gcnew ManagerTable(parts[1]); // parts[1] là SoBan
                ban->ID = parts[0]; // Gán ID từ file
                ban->TrangThai = parts[2];

                // Đọc danh sách món ăn
                ban->DanhSachMon = gcnew List<MonAn^>();
                if (!String::IsNullOrEmpty(parts[3])) {
                    cli::array<String^>^ monAnParts = parts[3]->Split(';');
                    for each(String ^ monAnStr in monAnParts) {
                        if (String::IsNullOrWhiteSpace(monAnStr)) continue;
                        cli::array<String^>^ monAnDetails = monAnStr->Split(':');
                        if (monAnDetails->Length == 6) { // Đảm bảo có đủ 6 trường: ID:LoaiMon:TenMon:Gia:Anh:SoLuong
                            MonAn^ monAn = gcnew MonAn(monAnDetails[1], monAnDetails[2], monAnDetails[3], monAnDetails[4]);
                            monAn->ID = monAnDetails[0];
                            monAn->SoLuong = Convert::ToInt32(monAnDetails[5]);
                            ban->DanhSachMon->Add(monAn);
                        }
                    }
                }
                danhSachBan->Add(ban);
            }
            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show(L"Lỗi khi đọc file ban.txt: " + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        return danhSachBan;
    }

    // Ghi danh sách bàn vào file ban.txt
    static void GhiDanhSachBan(List<ManagerTable^>^ danhSachBan, String^ filePath) {
        try {
            System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, false, System::Text::Encoding::UTF8);
            for each(ManagerTable ^ ban in danhSachBan) {
                String^ monAnStr = "";
                for each(MonAn ^ monAn in ban->DanhSachMon) {
                    // Lưu đầy đủ thông tin: ID:LoaiMon:TenMon:Gia:Anh:SoLuong
                    monAnStr += monAn->ID + ":" + monAn->LoaiMon + ":" + monAn->TenMon + ":" + monAn->Gia + ":" + monAn->Anh + ":" + monAn->SoLuong.ToString() + ";";
                }
                if (monAnStr != "") monAnStr = monAnStr->Substring(0, monAnStr->Length - 1); // Xóa dấu ; cuối
                String^ line = ban->ID + "|" + ban->SoBan + "|" + ban->TrangThai + "|" + monAnStr;
                writer->WriteLine(line);
            }
            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show(L"Lỗi khi ghi file ban.txt: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
};