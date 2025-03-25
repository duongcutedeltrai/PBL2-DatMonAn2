#pragma once
#include  "Login.h"
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
		formAdmin(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelThongke;
	protected:

	private: System::Windows::Forms::Button^ btnThongKe;
	private: System::Windows::Forms::Button^ btnDangXUatAdmin;
	private: System::Windows::Forms::Button^ btnQuanlynhanvien;
	private: System::Windows::Forms::Button^ btnQuanLyDonHang;
	private: System::Windows::Forms::Label^ labelAdmin;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ labelId;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ lbTen;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ lbID;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lbTen = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lbID = (gcnew System::Windows::Forms::Label());
			this->labelId = (gcnew System::Windows::Forms::Label());
			this->labelAdmin = (gcnew System::Windows::Forms::Label());
			this->btnQuanLyDonHang = (gcnew System::Windows::Forms::Button());
			this->btnDangXUatAdmin = (gcnew System::Windows::Forms::Button());
			this->btnQuanlynhanvien = (gcnew System::Windows::Forms::Button());
			this->btnThongKe = (gcnew System::Windows::Forms::Button());
			this->panelThongke = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panelThongke->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->labelAdmin);
			this->panel1->Controls->Add(this->btnQuanLyDonHang);
			this->panel1->Controls->Add(this->btnDangXUatAdmin);
			this->panel1->Controls->Add(this->btnQuanlynhanvien);
			this->panel1->Controls->Add(this->btnThongKe);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1150, 148);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::RosyBrown;
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(12, 47);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(267, 101);
			this->panel3->TabIndex = 7;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->lbTen);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Location = System::Drawing::Point(3, 55);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(264, 30);
			this->panel6->TabIndex = 3;
			// 
			// lbTen
			// 
			this->lbTen->BackColor = System::Drawing::Color::DimGray;
			this->lbTen->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbTen->Location = System::Drawing::Point(106, 4);
			this->lbTen->Name = L"lbTen";
			this->lbTen->Size = System::Drawing::Size(155, 23);
			this->lbTen->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Tên:";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->lbID);
			this->panel4->Controls->Add(this->labelId);
			this->panel4->Location = System::Drawing::Point(3, 19);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(261, 30);
			this->panel4->TabIndex = 0;
			// 
			// lbID
			// 
			this->lbID->BackColor = System::Drawing::Color::DimGray;
			this->lbID->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbID->Location = System::Drawing::Point(103, 0);
			this->lbID->Name = L"lbID";
			this->lbID->Size = System::Drawing::Size(100, 23);
			this->lbID->TabIndex = 1;
			// 
			// labelId
			// 
			this->labelId->AutoSize = true;
			this->labelId->Location = System::Drawing::Point(4, 4);
			this->labelId->Name = L"labelId";
			this->labelId->Size = System::Drawing::Size(23, 16);
			this->labelId->TabIndex = 0;
			this->labelId->Text = L"ID:";
			// 
			// labelAdmin
			// 
			this->labelAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAdmin->Location = System::Drawing::Point(54, 9);
			this->labelAdmin->Name = L"labelAdmin";
			this->labelAdmin->Size = System::Drawing::Size(141, 46);
			this->labelAdmin->TabIndex = 6;
			this->labelAdmin->Text = L"Quản Lý";
			// 
			// btnQuanLyDonHang
			// 
			this->btnQuanLyDonHang->BackColor = System::Drawing::Color::Gainsboro;
			this->btnQuanLyDonHang->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQuanLyDonHang->FlatAppearance->BorderSize = 0;
			this->btnQuanLyDonHang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuanLyDonHang->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuanLyDonHang->Location = System::Drawing::Point(628, 80);
			this->btnQuanLyDonHang->Name = L"btnQuanLyDonHang";
			this->btnQuanLyDonHang->Size = System::Drawing::Size(174, 68);
			this->btnQuanLyDonHang->TabIndex = 5;
			this->btnQuanLyDonHang->Text = L"Quản Lý Đơn Hàng";
			this->btnQuanLyDonHang->UseVisualStyleBackColor = false;
			this->btnQuanLyDonHang->Click += gcnew System::EventHandler(this, &formAdmin::btnQuanLyDonHang_Click);
			// 
			// btnDangXUatAdmin
			// 
			this->btnDangXUatAdmin->BackColor = System::Drawing::Color::Gainsboro;
			this->btnDangXUatAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDangXUatAdmin->FlatAppearance->BorderSize = 0;
			this->btnDangXUatAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDangXUatAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDangXUatAdmin->Location = System::Drawing::Point(999, 80);
			this->btnDangXUatAdmin->Name = L"btnDangXUatAdmin";
			this->btnDangXUatAdmin->Size = System::Drawing::Size(160, 68);
			this->btnDangXUatAdmin->TabIndex = 4;
			this->btnDangXUatAdmin->Text = L"Đăng Xuất";
			this->btnDangXUatAdmin->UseVisualStyleBackColor = false;
			this->btnDangXUatAdmin->Click += gcnew System::EventHandler(this, &formAdmin::btnDangXUatAdmin_Click);
			// 
			// btnQuanlynhanvien
			// 
			this->btnQuanlynhanvien->BackColor = System::Drawing::Color::Gainsboro;
			this->btnQuanlynhanvien->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQuanlynhanvien->FlatAppearance->BorderSize = 0;
			this->btnQuanlynhanvien->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuanlynhanvien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuanlynhanvien->Location = System::Drawing::Point(448, 80);
			this->btnQuanlynhanvien->Name = L"btnQuanlynhanvien";
			this->btnQuanlynhanvien->Size = System::Drawing::Size(174, 68);
			this->btnQuanlynhanvien->TabIndex = 1;
			this->btnQuanlynhanvien->Text = L"Quản Lý Nhân Viên";
			this->btnQuanlynhanvien->UseVisualStyleBackColor = false;
			this->btnQuanlynhanvien->Click += gcnew System::EventHandler(this, &formAdmin::btnQuanlynhanvien_Click);
			// 
			// btnThongKe
			// 
			this->btnThongKe->BackColor = System::Drawing::Color::Gainsboro;
			this->btnThongKe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThongKe->FlatAppearance->BorderSize = 0;
			this->btnThongKe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThongKe->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThongKe->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnThongKe->Location = System::Drawing::Point(312, 80);
			this->btnThongKe->Name = L"btnThongKe";
			this->btnThongKe->Size = System::Drawing::Size(130, 68);
			this->btnThongKe->TabIndex = 0;
			this->btnThongKe->Text = L"Thống Kê";
			this->btnThongKe->UseVisualStyleBackColor = false;
			this->btnThongKe->Click += gcnew System::EventHandler(this, &formAdmin::btnThongKe_Click);
			// 
			// panelThongke
			// 
			this->panelThongke->BackColor = System::Drawing::Color::Gainsboro;
			this->panelThongke->Controls->Add(this->label1);
			this->panelThongke->Controls->Add(this->dateTimePicker1);
			this->panelThongke->Location = System::Drawing::Point(12, 154);
			this->panelThongke->Name = L"panelThongke";
			this->panelThongke->Size = System::Drawing::Size(1126, 607);
			this->panelThongke->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(919, 15);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(180, 22);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(485, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 72);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Thống Kê";
			// 
			// formAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 766);
			this->Controls->Add(this->panelThongke);
			this->Controls->Add(this->panel1);
			this->Name = L"formAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formAdmin";
			this->Load += gcnew System::EventHandler(this, &formAdmin::formAdmin_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panelThongke->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void formAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	ResetMauButtonMenu();
	btnThongKe->BackColor = Color::RosyBrown;
	BoGocControl(btnThongKe, 20);
	BoGocControl(btnQuanlynhanvien, 20);
	BoGocControl(btnQuanLyDonHang, 20);
	BoGocControl(btnDangXUatAdmin, 20);
}
	private: System::Void ResetMauButtonMenu() {
		Color mauMacDinh = Color::Gainsboro;
		btnThongKe->BackColor = mauMacDinh;
		btnQuanlynhanvien->BackColor = mauMacDinh;
		btnQuanLyDonHang->BackColor = mauMacDinh;	
		btnDangXUatAdmin->BackColor = mauMacDinh;
	}
	private: System::Void btnThongKe_Click(System::Object^ sender, System::EventArgs^ e) {
		ResetMauButtonMenu();
		btnThongKe->BackColor = Color::RosyBrown;
		panelThongke->Visible = true;
	}
private: System::Void btnQuanlynhanvien_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetMauButtonMenu();
	btnQuanlynhanvien->BackColor = Color::RosyBrown;
	panelThongke->Visible = false;
}
private: System::Void btnQuanLyDonHang_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetMauButtonMenu();
	btnQuanLyDonHang->BackColor = Color::RosyBrown;
	panelThongke->Visible = false;
}
	   private: System::Void btnDangXUatAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		   this->Hide();
		   Login^ login = gcnew Login();
		   login->ShowDialog();
	   }
	private: System::Void BoGocControl(Control^ control, int radius) {
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
	}
};
}
