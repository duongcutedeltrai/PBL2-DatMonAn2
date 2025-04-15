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
    System::Void FormBill::FormBill_Load(System::Object^ sender, System::EventArgs^ e) {
        // dan theo mon an
        int totalRowHeight = 0;
        for (int i = 0; i < datagridViewBill->Rows->Count; i++) {
            totalRowHeight += datagridViewBill->Rows[i]->Height;
        }
        int headerHeight = datagridViewBill->ColumnHeadersHeight;
        datagridViewBill->Height = headerHeight + totalRowHeight + 2;
    }

    System::Void FormBill::btnChuyenKhoan_Click(System::Object^ sender, System::EventArgs^ e) {
        if (danhSachMon->Count == 0) {
            MessageBox::Show(L"Không có món nào trong danh sách!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }
        double total = 0.0;
        for each (MonAn ^ mon in danhSachMon) {
            double gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
            //double gia = Convert::ToDouble(mon->Gia + "$");
            total += gia * mon->SoLuong;
        }
        //tao va luu hoa don
        PayMent^ payMent = gcnew PayMent(banHienTai->ID, banHienTai->SoBan, nameStaff, danhSachMon, total, L"Chuyển khoản");
        List<PayMent^>^ danhSachHoaDon = gcnew List<PayMent^>();
        danhSachHoaDon->Add(payMent);
        PayMent::GhiDanhSachHoaDon(danhSachHoaDon, billFilePath);

        //cap nhat trang thai ban
        banHienTai->TrangThai = L"Trống";
        banHienTai->DanhSachMon->Clear();

        //cap nhat danh sach ban
        for each (ManagerTable ^ ban in danhSachBan) {
            if (ban->SoBan == banHienTai->SoBan) {
                ban->TrangThai = banHienTai->TrangThai;
                ban->DanhSachMon = banHienTai->DanhSachMon;
                break;
            }
        }

        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        //cap nhat lich su hoa don
        if (addHistoryBillForm != nullptr) {
            addHistoryBillForm->UpdateHistory();
        }
        MessageBox::Show(L"Thanh toán thành công!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);

        this->Close();
    }

    System::Void FormBill::btnTienMat_Click(System::Object^ sender, System::EventArgs^ e) {
        if (danhSachMon->Count == 0) {
            MessageBox::Show(L"Không có món nào trong danh sách!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }
        double total = 0.0;
        for each (MonAn ^ mon in danhSachMon) {
            double gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
            total += gia * mon->SoLuong;
        }
        //tao va luu hoa don
        PayMent^ payMent = gcnew PayMent(banHienTai->ID, banHienTai->SoBan, nameStaff, danhSachMon, total, L"Tiền mặt");
        List<PayMent^>^ danhSachHoaDon = gcnew List<PayMent^>();
        danhSachHoaDon->Add(payMent);
        PayMent::GhiDanhSachHoaDon(danhSachHoaDon, billFilePath);

        //cap nhat trang thai ban
        banHienTai->TrangThai = L"Trống";
        banHienTai->DanhSachMon->Clear();

        //cap nhat danh sach ban
        for each (ManagerTable ^ ban in danhSachBan) {
            if (ban->SoBan == banHienTai->SoBan) {
                ban->TrangThai = banHienTai->TrangThai;
                ban->DanhSachMon = banHienTai->DanhSachMon;
                break;
            }
        }

        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        //cap nhat lich su hoa don
        if (addHistoryBillForm != nullptr) {
            addHistoryBillForm->UpdateHistory();
        }

        MessageBox::Show(L"Thanh toán thành công!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->Close();
    }

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
		txtDiscount->Text = "0.00%";

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

    System::Void FormBill::ApplyDiscount() {
        discountPercent = DiscountManager::DiscountPercent; // lay giam gia
        double total = 0.0;
        for each (MonAn ^ mon in danhSachMon) {
            double gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
            total += gia * mon->SoLuong;
        }

        double discountAmount = total * (discountPercent / 100); //chiet khau
        double finalTotal = total - discountAmount;

        txtDiscount->Text = discountPercent.ToString("F2") + "%";
        txtPrice->Text = finalTotal.ToString("F2") + "$";
    }


}