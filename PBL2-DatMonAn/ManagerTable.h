#pragma once
#include "MonAn.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

namespace PBL2DatMonAn {
    ref class ManagerTable {
    public:
        // Properties
        System::String^ ID;
        System::String^ SoBan;
        System::String^ TrangThai;
        List<MonAn^>^ DanhSachMon;

        // Constructor
        ManagerTable(String^ soBan);

        // Static Methods
        static List<ManagerTable^>^ DocDanhSachBan(String^ filePath);
        static void GhiDanhSachBan(List<ManagerTable^>^ danhSachBan, String^ filePath);
    };
}