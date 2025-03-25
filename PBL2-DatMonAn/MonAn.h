#pragma once

using namespace System;

ref class MonAn
{
public:
    String^ LoaiMon; 
    String^ TenMon;      
    String^ Gia;         
    String^ Anh; 
	int SoLuong;    

    MonAn(String^ loai, String^ ten, String^ gia, String^ anh)
    {
        LoaiMon = loai;
        TenMon = ten;
        Gia = gia;
        Anh = anh;
        SoLuong = 1;
    }
};
