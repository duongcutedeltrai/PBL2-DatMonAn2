#pragma once
#include "MonAn.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

namespace PBL2DatMonAn {
    ref class PayMent {
    public:
        // Properties
        System::String^ ID;
        System::String^ BanID;
        System::String^ SoBan;
        System::String^ TenNhanVien;
        List<MonAn^>^ DanhSachMon;
        double TongTien;
        System::DateTime ThoiGianThanhToan;
        System::String^ PhuongThucThanhToan;
        double Discountpercent;

        // Constructor
        PayMent(String^ banID, String^ soBan, String^ tenNhanVien, List<MonAn^>^ danhSachMon, double tongTien, String^ phuongThucThanhToan);

        // Static Methods
        static void GhiDanhSachHoaDon(List<PayMent^>^ danhSachHoaDon, String^ BillfilePath);
        static List<PayMent^>^ DocDanhSachHoaDon(String^ BillfilePath);
    };
}