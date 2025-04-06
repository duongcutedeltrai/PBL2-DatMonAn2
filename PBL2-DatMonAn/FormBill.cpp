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
        datagridViewBill->Rows->Clear(); 
        double tongtien = 0.0; 

        // Duyệt qua danh sách món ăn đã chọn
        for each(MonAn ^ mon in danhSachMon) {
           
            if (mon->SoLuong <= 0) continue;

            try {
          
                String^ giaStr = mon->Gia->Trim();
                giaStr = giaStr->Replace("$", "")->Trim(); 
                double gia = Convert::ToDouble(giaStr);

                // Lấy số lượng
                int soluong = mon->SoLuong;

                // Tính thành tiền
                double thanhtien = gia * soluong;
                tongtien += thanhtien;

                // Thêm hàng vào DataGridView
                datagridViewBill->Rows->Add(
                    mon->TenMon,                  
                    soluong.ToString(),             
                    gia.ToString("F2") + " $",    
                    thanhtien.ToString("F2") + " $"
                );
            }
            catch (Exception^ ex) {
                // Xử lý lỗi nếu không thể chuyển đổi giá
                MessageBox::Show(L"Lỗi khi xử lý giá của món " + mon->TenMon + ": " + ex->Message,
                    "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                continue; // Bỏ qua món này và tiếp tục với món khác
            }
        }

        // Cập nhật tổng tiền vào txtPrice
        txtPrice->Text = tongtien.ToString("F2") + " $";

        // Nếu không có món nào được hiển thị, thông báo cho người dùng
        if (datagridViewBill->Rows->Count == 0) {
            MessageBox::Show(L"Không có món ăn nào được chọn.", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }

}