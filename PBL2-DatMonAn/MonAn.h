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
        ofstream file(marshal_as<string>(filePath), ios::app);
        if (!file.is_open()) {
            return;
        }
        for each (MonAn ^ mon in danhSachMon)
        {

            //chuyen doi string^ sang string
            System::String^ idStr = mon->ID;
            System::String^ loaiStr = mon->LoaiMon;
            System::String^ tenStr = mon->TenMon;
            System::String^ giaStr = mon->Gia;
            System::String^ anhStr = mon->Anh;

            file << marshal_as<string>(idStr) << "||"
                << marshal_as<string>(tenStr) << "||"
                << marshal_as<string>(giaStr) << "||"
                << marshal_as<string>(loaiStr) << "||"
                << marshal_as<string>(anhStr) << "||"
                <<"\n";
        }
        file.close();
    }

	//doc danh sach mon an
    static List<MonAn^>^ DocDanhSachMonAn(String^ filePath) {
        List<MonAn^>^ danhSachMon = gcnew List<MonAn^>();
        ifstream file(marshal_as<string>(filePath));

        if (!file.is_open()) {
            return danhSachMon;
        }

        string line;

        while (getline(file, line)) {
            if (line.empty()) continue; // Bỏ qua dòng trống
            stringstream ss(line);
            string id, loai, ten, gia, anh;
            int soluong;
            if (getline(ss, id, ',') &&
                getline(ss, loai, ',') &&
                getline(ss, ten, ',') &&
                getline(ss, gia, ',') &&
                getline(ss, anh, ',') &&
                ss >> soluong) {
                // Chuyển đổi từ string sang String^
                String^ idStr = gcnew String(id.c_str());
                String^ loaiStr = gcnew String(loai.c_str());
                String^ tenStr = gcnew String(ten.c_str());
                String^ giaStr = gcnew String(gia.c_str());
                String^ anhStr = gcnew String(anh.c_str());

                danhSachMon->Add(gcnew MonAn(idStr, loaiStr, tenStr, giaStr, anhStr, soluong));
            }
        }
        file.close();
        return danhSachMon;
    }
};

