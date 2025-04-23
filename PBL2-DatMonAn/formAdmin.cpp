#include "formAdmin.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

namespace PBL2DatMonAn {
	System::Void formAdmin::formAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnQuanlynhanvien->BackColor = Color::RosyBrown;
	}

	System::Void formAdmin::ResetMauButtonMenu() {
		Color mauMacDinh = Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(185)));
		btnQuanlynhanvien->BackColor = mauMacDinh;
		btnDoanhThu->BackColor = mauMacDinh;
		btnThemMon->BackColor = mauMacDinh;
		btnDangXUatAdmin->BackColor = mauMacDinh;
		btnDiscount->BackColor = mauMacDinh;
		btnBaoCaoNhanVien->BackColor = mauMacDinh;
		btnThongKeMon->BackColor = mauMacDinh;
		btnFoodNoPayMent->BackColor = mauMacDinh;
	}

	System::Void formAdmin::btnDoanhThu_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnDoanhThu->BackColor = Color::RosyBrown;
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addDiscountForm->Visible = false;
		addBaoCaoNhanVienForm->Visible = false;
		addThongKeMon->Visible = false;
		addStatiticForm->Visible = true;
		addStatiticForm->BringToFront();
	}

	System::Void formAdmin::btnDangXUatAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Login^ login = gcnew Login();
		login->ShowDialog();
	}

	System::Void formAdmin::btnThemMon_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnThemMon->BackColor = Color::RosyBrown;
		addFoodForm->Visible = true;
		addUserForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = false;
		addBaoCaoNhanVienForm->Visible = false;
		addThongKeMon->Visible = false;
		addFoodForm->BringToFront();
	}

	System::Void formAdmin::btnQuanlynhanvien_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnQuanlynhanvien->BackColor = Color::RosyBrown;
		addFoodForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = false;
		addBaoCaoNhanVienForm->Visible = false;
		addThongKeMon->Visible = false;
		addUserForm->Visible = true;
		addUserForm->BringToFront();
	}

	System::Void formAdmin::btnDiscount_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnDiscount->BackColor = Color::RosyBrown;
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addStatiticForm->Visible = false;
		addBaoCaoNhanVienForm->Visible = false;
		addThongKeMon->Visible = false;
		addDiscountForm->Visible = true;
		addDiscountForm->BringToFront();
	}

	System::Void formAdmin::btnBaoCaoNhanVien_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnBaoCaoNhanVien->BackColor = Color::RosyBrown;
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = false;
		addThongKeMon->Visible = false;
		addBaoCaoNhanVienForm->Visible = true;
		addBaoCaoNhanVienForm->BringToFront();
	}
	

	System::Void formAdmin::btnThongKeMon_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnThongKeMon->BackColor = Color::RosyBrown;
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = false;
		addBaoCaoNhanVienForm->Visible = false;
		addThongKeMon->Visible = true;
		addThongKeMon->BringToFront();
	}

	System::Void formAdmin::btnFoodNoPayMent_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnFoodNoPayMent->BackColor = Color::RosyBrown;
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = false;
		addBaoCaoNhanVienForm->Visible = false;
		addThongKeMon->Visible = false;
		addFoodNoPayMent->Visible = true;
		addFoodNoPayMent->BringToFront();
	}


	/*private: System::Void BoGocControl(Control^ control, int radius) {
		System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
		int w = control->Width;
		int h = control->Height;
		int d = radius * 2;

		path->AddArc(0, 0, d, d, 180, 90);
		path->AddArc(w - d, 0, d, d, 270, 90);
		path->AddArc(w - d, h - d, d, d, 0, 90);
		path->AddArc(0, h - d, d, d, 90, 90);
		path->CloseFigure();

		control->Region = gcnew System::Drawing::Region(path);
	}*/
}

