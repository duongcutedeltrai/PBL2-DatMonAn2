#pragma once
#include "MonAn.h"

using namespace System;
using namespace System::Collections::Generic;

ref class ManagerTable
{
public:
	System::String^ SoBan;
	System::String^ TrangThai;
	List<MonAn^>^ DanhSachMon;

	ManagerTable(String^ soBan) {
		SoBan = soBan;
		TrangThai = "Trống";
		DanhSachMon = gcnew List<MonAn^>();
	}
};

