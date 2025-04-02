#pragma once
#include "MonAn.h"
#include <fstream>
ref class HoaDon
{	
public:
	System::String^ MaHoaDon;
	System::String^ soBan;
	System::Collections::Generic::List<MonAn^>^ danhSachMon;
	System::Double TongTien;
	System::DateTime ThoiGian;

	HoaDon(System::String^ maHoaDon, System::String^ soBan, System::Collections::Generic::List<MonAn^>^ dsMon, System::Double tongTien, System::DateTime thoiGian) {
		MaHoaDon = maHoaDon;
		soBan = soBan;
		danhSachMon = dsMon;
		TongTien = 0.0;
		ThoiGian = DateTime::Now;
	}


	//them mon an vao hoa don va cap nhat tong tien
	void ThemMonAn(MonAn^ mon) {
		danhSachMon->Add(mon);
		TongTien += Convert::ToDouble(mon->Gia->Replace("$", ""));
	}

	//luu vao file hoadon.txt
	/*void SaveToFile(String^ MaHoaDon, String^ soBan, String^ TongTien, )*/
	
};

