#pragma once
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace msclr::interop;

namespace PBL2DatMonAn {
    ref class MonAn {
    public:
        // Properties
        String^ ID;
        String^ LoaiMon;
        String^ TenMon;
        String^ Gia;
        String^ Anh;
        int SoLuong;

        // Constructors
        MonAn(String^ loai, String^ ten, String^ gia, String^ anh);
        MonAn(String^ id, String^ loai, String^ ten, String^ gia, String^ anh, int soluong);

        // Static Methods
        static void GhiDanhSachMonAn(List<MonAn^>^ danhSachMon, String^ FoodfilePath);
        static List<MonAn^>^ DocDanhSachMonAn(String^ FoodfilePath);
    };
}