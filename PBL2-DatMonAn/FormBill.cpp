#include "FormBill.h"

//using namespace System;
//using namespace System::Windows::Forms;
//using namespace System::Runtime::InteropServices;
//
//
//[STAThreadAttribute]
//int main(array<String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    PBL2DatMonAn::FormBill form;
//    Application::Run(% form);
//}
//cac mon duoc chon duoc dua vao datagridbill
namespace PBL2DatMonAn {
    System::Void FormBill::Monandachon() {
        // Xóa các dòng cũ trong DataGridView
        datagridViewBill->Rows->Clear();

        // Hiển thị danh sách món ăn trong DataGridView và tính tổng tiền
        double tongTien = 0.0;
        if (danhSachMon != nullptr && danhSachMon->Count > 0) {
            for each(MonAn ^ mon in danhSachMon) {
                double gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
                double thanhTien = gia * mon->SoLuong;
                datagridViewBill->Rows->Add(mon->TenMon, mon->SoLuong, mon->Gia + "$", thanhTien.ToString("F2") + "$");
                tongTien += thanhTien;
            }
        }

        // Hiển thị tổng tiền
        txtPrice->Text = tongTien.ToString("F2") + "$";

        // Cập nhật chiều cao DataGridView
        int totalRowHeight = 0;
        for (int i = 0; i < datagridViewBill->Rows->Count; i++) {
            totalRowHeight += datagridViewBill->Rows[i]->Height;
        }
        int headerHeight = datagridViewBill->ColumnHeadersHeight;
        int newHeight = headerHeight + totalRowHeight + 2;
        if (newHeight > 200) newHeight = 200;
        datagridViewBill->Height = newHeight;
    }

}