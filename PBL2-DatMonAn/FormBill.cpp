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
        datagridViewBill->Rows->Clear(); // Xóa các hàng hiện có trong DataGridView
        double tongtien = 0.0; // Khởi tạo tổng tiền

        // Duyệt qua danh sách món ăn đã chọn
        for each(MonAn ^ mon in danhSachMon) {
            // Chỉ hiển thị các món có số lượng lớn hơn 0
            if (mon->SoLuong <= 0) continue;

            try {
                // Xử lý giá: Loại bỏ ký hiệu "$" và chuyển đổi thành double
                String^ giaStr = mon->Gia->Trim(); // Loại bỏ khoảng trắng thừa
                giaStr = giaStr->Replace("$", "")->Trim(); // Loại bỏ ký hiệu "$"
                double gia = Convert::ToDouble(giaStr);

                // Lấy số lượng
                int soluong = mon->SoLuong;

                // Tính thành tiền
                double thanhtien = gia * soluong;
                tongtien += thanhtien;

                // Thêm hàng vào DataGridView
                datagridViewBill->Rows->Add(
                    mon->TenMon,                    // Cột 1: Tên món
                    soluong.ToString(),             // Cột 2: Số lượng
                    gia.ToString("F2") + " $",      // Cột 3: Giá (định dạng 2 chữ số thập phân, thêm $)
                    thanhtien.ToString("F2") + " $"  // Cột 4: Thành tiền (thêm $)
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