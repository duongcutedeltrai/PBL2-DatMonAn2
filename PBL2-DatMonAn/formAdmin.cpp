#include "formAdmin.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

namespace PBL2DatMonAn {
	System::Void formAdmin::formAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnThongKe->BackColor = Color::FromArgb(84, 103, 69);
	}

	System::Void formAdmin::ResetMauButtonMenu() {
		Color mauMacDinh = Color::FromArgb(142, 121, 92);
		btnThongKe->BackColor = mauMacDinh;
		btnQuanlynhanvien->BackColor = mauMacDinh;
		btnThemMon->BackColor = mauMacDinh;
		btnDangXUatAdmin->BackColor = mauMacDinh;
		btnDiscount->BackColor = mauMacDinh;
	}

	System::Void formAdmin::btnThongKe_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnThongKe->BackColor = Color::FromArgb(84, 103, 69);
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addDiscountForm->Visible = false;
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
		btnThemMon->BackColor = Color::FromArgb(84, 103, 69);
		addFoodForm->Visible = true;
		addUserForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = false;
		addFoodForm->BringToFront();
	}

	System::Void formAdmin::btnQuanlynhanvien_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnQuanlynhanvien->BackColor = Color::FromArgb(84, 103, 69);
		addFoodForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = false;
		addUserForm->Visible = true;
		addUserForm->BringToFront();
	}

	System::Void formAdmin::btnDiscount_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnDiscount->BackColor = Color::FromArgb(84, 103, 69);
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addStatiticForm->Visible = false;
		addDiscountForm->Visible = true;
		addDiscountForm->BringToFront();
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

