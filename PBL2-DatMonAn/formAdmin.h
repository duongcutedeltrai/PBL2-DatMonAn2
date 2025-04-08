#pragma once
#include  "Login.h"
#include "AddFoodForm.h"
#include "AddUserForm.h"
#include "AddStatiticForm.h"
#include "AddDiscountForm.h"
#include "FormBill.h"
namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for formAdmin
	/// </summary>
	public ref class formAdmin : public System::Windows::Forms::Form
	{
	public:
		formAdmin(String^ nameAdmin)
		{
			InitializeComponent();
			this->nameAdmin = nameAdmin;
			addFoodForm = gcnew AddFoodForm();
			panelGeneral->Controls->Add(addFoodForm);
			addFoodForm->Dock = DockStyle::Fill;
			addFoodForm->Visible = false; 
			addUserForm = gcnew AddUserForm();
			panelGeneral->Controls->Add(addUserForm);
			addUserForm->Dock = DockStyle::Fill;
			addUserForm->Visible = false;
			addStatiticForm = gcnew AddStatiticForm();
			panelGeneral->Controls->Add(addStatiticForm);
			addStatiticForm->Dock = DockStyle::Fill;
			addDiscountForm = gcnew AddDiscountForm();
			panelGeneral->Controls->Add(addDiscountForm);
			addDiscountForm->Dock = DockStyle::Fill;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formAdmin()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
		FormBill^ formBill;
	private: System::String^ nameAdmin;	
	private: System::Windows::Forms::Button^ btnThongKe;
	private: System::Windows::Forms::Button^ btnQuanlynhanvien;
	private: System::Windows::Forms::Button^ btnThemMon;
	private: System::Windows::Forms::Button^ btnDangXUatAdmin;
	private: System::Windows::Forms::Label^ labelAdmin;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: AddFoodForm^ addFoodForm;
	private: AddUserForm^ addUserForm;
	private: AddStatiticForm^ addStatiticForm;
	private: AddDiscountForm^ addDiscountForm;
	private: System::Windows::Forms::Panel^ panelGeneral;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnDiscount;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnThemMon = (gcnew System::Windows::Forms::Button());
			this->btnQuanlynhanvien = (gcnew System::Windows::Forms::Button());
			this->btnThongKe = (gcnew System::Windows::Forms::Button());
			this->btnDangXUatAdmin = (gcnew System::Windows::Forms::Button());
			this->labelAdmin = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnDiscount = (gcnew System::Windows::Forms::Button());
			this->panelGeneral = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnThemMon
			// 
			this->btnThemMon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->btnThemMon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThemMon->FlatAppearance->BorderSize = 0;
			this->btnThemMon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThemMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThemMon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnThemMon->Location = System::Drawing::Point(464, 9);
			this->btnThemMon->Margin = System::Windows::Forms::Padding(0);
			this->btnThemMon->Name = L"btnThemMon";
			this->btnThemMon->Size = System::Drawing::Size(181, 50);
			this->btnThemMon->TabIndex = 5;
			this->btnThemMon->Text = L"Thêm Món";
			this->btnThemMon->UseVisualStyleBackColor = false;
			this->btnThemMon->Click += gcnew System::EventHandler(this, &formAdmin::btnThemMon_Click);
			// 
			// btnQuanlynhanvien
			// 
			this->btnQuanlynhanvien->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->btnQuanlynhanvien->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQuanlynhanvien->FlatAppearance->BorderSize = 0;
			this->btnQuanlynhanvien->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuanlynhanvien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuanlynhanvien->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnQuanlynhanvien->Location = System::Drawing::Point(240, 9);
			this->btnQuanlynhanvien->Margin = System::Windows::Forms::Padding(0);
			this->btnQuanlynhanvien->Name = L"btnQuanlynhanvien";
			this->btnQuanlynhanvien->Size = System::Drawing::Size(192, 52);
			this->btnQuanlynhanvien->TabIndex = 1;
			this->btnQuanlynhanvien->Text = L"Quản Lý Nhân Viên";
			this->btnQuanlynhanvien->UseVisualStyleBackColor = false;
			this->btnQuanlynhanvien->Click += gcnew System::EventHandler(this, &formAdmin::btnQuanlynhanvien_Click);
			// 
			// btnThongKe
			// 
			this->btnThongKe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->btnThongKe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThongKe->FlatAppearance->BorderSize = 0;
			this->btnThongKe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThongKe->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThongKe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnThongKe->Location = System::Drawing::Point(12, 9);
			this->btnThongKe->Margin = System::Windows::Forms::Padding(0);
			this->btnThongKe->Name = L"btnThongKe";
			this->btnThongKe->Size = System::Drawing::Size(200, 52);
			this->btnThongKe->TabIndex = 0;
			this->btnThongKe->Text = L"Thống Kê";
			this->btnThongKe->UseVisualStyleBackColor = false;
			this->btnThongKe->Click += gcnew System::EventHandler(this, &formAdmin::btnThongKe_Click);
			// 
			// btnDangXUatAdmin
			// 
			this->btnDangXUatAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->btnDangXUatAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDangXUatAdmin->FlatAppearance->BorderSize = 0;
			this->btnDangXUatAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDangXUatAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDangXUatAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnDangXUatAdmin->Location = System::Drawing::Point(937, 14);
			this->btnDangXUatAdmin->Margin = System::Windows::Forms::Padding(0);
			this->btnDangXUatAdmin->Name = L"btnDangXUatAdmin";
			this->btnDangXUatAdmin->Size = System::Drawing::Size(200, 68);
			this->btnDangXUatAdmin->TabIndex = 4;
			this->btnDangXUatAdmin->Text = L"Đăng Xuất";
			this->btnDangXUatAdmin->UseVisualStyleBackColor = false;
			this->btnDangXUatAdmin->Click += gcnew System::EventHandler(this, &formAdmin::btnDangXUatAdmin_Click);
			// 
			// labelAdmin
			// 
			this->labelAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->labelAdmin->Location = System::Drawing::Point(85, 53);
			this->labelAdmin->Name = L"labelAdmin";
			this->labelAdmin->Size = System::Drawing::Size(152, 46);
			this->labelAdmin->TabIndex = 6;
			this->labelAdmin->Text = L"Quản Lý";
			this->labelAdmin->Click += gcnew System::EventHandler(this, &formAdmin::labelAdmin_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->labelAdmin);
			this->panel1->Controls->Add(this->btnDangXUatAdmin);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1149, 98);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &formAdmin::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label1->Location = System::Drawing::Point(16, 6);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 47);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Restaurant D^D";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panel2->Controls->Add(this->btnDiscount);
			this->panel2->Controls->Add(this->btnThongKe);
			this->panel2->Controls->Add(this->btnQuanlynhanvien);
			this->panel2->Controls->Add(this->btnThemMon);
			this->panel2->Location = System::Drawing::Point(0, 103);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1149, 74);
			this->panel2->TabIndex = 7;
			// 
			// btnDiscount
			// 
			this->btnDiscount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->btnDiscount->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDiscount->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnDiscount->FlatAppearance->BorderSize = 0;
			this->btnDiscount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDiscount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiscount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnDiscount->Location = System::Drawing::Point(684, 9);
			this->btnDiscount->Margin = System::Windows::Forms::Padding(0);
			this->btnDiscount->Name = L"btnDiscount";
			this->btnDiscount->Size = System::Drawing::Size(181, 50);
			this->btnDiscount->TabIndex = 6;
			this->btnDiscount->Text = L"Giảm giá";
			this->btnDiscount->UseVisualStyleBackColor = false;
			this->btnDiscount->Click += gcnew System::EventHandler(this, &formAdmin::btnDiscount_Click);
			// 
			// panelGeneral
			// 
			this->panelGeneral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panelGeneral->Location = System::Drawing::Point(0, 182);
			this->panelGeneral->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(1151, 578);
			this->panelGeneral->TabIndex = 8;
			// 
			// formAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1149, 766);
			this->Controls->Add(this->panelGeneral);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"formAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formAdmin";
			this->Load += gcnew System::EventHandler(this, &formAdmin::formAdmin_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void formAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	ResetMauButtonMenu();
	btnThongKe->BackColor = Color::RosyBrown;
}
	private: System::Void ResetMauButtonMenu() {
		Color mauMacDinh = Color::Gainsboro;
		btnThongKe->BackColor = mauMacDinh;
		btnQuanlynhanvien->BackColor = mauMacDinh;
		btnThemMon->BackColor = mauMacDinh;	
		btnDangXUatAdmin->BackColor = mauMacDinh;
		btnDiscount->BackColor = mauMacDinh;
	}
	private: System::Void btnThongKe_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnThongKe->BackColor = Color::RosyBrown;
		addFoodForm->Visible = false;
		addUserForm->Visible = false;
		addDiscountForm->Visible = false;
		addStatiticForm->Visible = true;
		addStatiticForm->BringToFront();

	}
private: System::Void btnQuanlynhanvien_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetMauButtonMenu();
	btnQuanlynhanvien->BackColor = Color::RosyBrown;
	addFoodForm->Visible = false;
	addStatiticForm->Visible = false;
	addDiscountForm->Visible = false;
	addUserForm->Visible = true;
	addUserForm->BringToFront();
}

	   private: System::Void btnDangXUatAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		   this->Hide();
		   Login^ login = gcnew Login();
		   login->ShowDialog();
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
private: System::Void btnThemMon_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetMauButtonMenu();
	btnThemMon->BackColor = Color::RosyBrown;
	addFoodForm->Visible = true; 
	addUserForm->Visible = false;
	addStatiticForm->Visible = false;
	addDiscountForm->Visible = false;
	addFoodForm->BringToFront();
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void labelAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDiscount_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetMauButtonMenu();
	btnDiscount->BackColor = Color::RosyBrown;
	addFoodForm->Visible = false;
	addUserForm->Visible = false;
	addStatiticForm->Visible = false;
	addDiscountForm->Visible = true;
	addDiscountForm->BringToFront();
}
};
}
