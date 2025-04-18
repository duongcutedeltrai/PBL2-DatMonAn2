﻿#pragma once
#include "MonAn.h"
#include "ManagerTable.h"
namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormFood
	/// </summary>
	public ref class FormFood : public System::Windows::Forms::Form
	{
	public:
		FormFood(ManagerTable^ ban, String^ nameStaff)
		{
			InitializeComponent();
			this->banHienTai = ban;
			this->nameStaff = nameStaff;
			lblTenNhanVien->Text = "Ten nhan vien: " + nameStaff;
			HienThiMonDaDat();
			//
			//TODO: Add the constructor code here
			//
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormFood()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		ManagerTable^ banHienTai;
		String^ nameStaff;
	private: System::Windows::Forms::Label^ lblTenNhanVien;
		   System::Collections::Generic::List<MonAn^>^ danhSachMon;
		System::Void HienThiMonDaDat(); // Hàm hiển thị món đã đặt
	//private:
	//	System::Collections::Generic::List<MonAn^>^ danhSachMon;

	private: System::Windows::Forms::Panel^ pnFood;
	private: System::Windows::Forms::Panel^ pnNav;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ pnListFood;
	private: System::Windows::Forms::Button^ btnNuocUong;


	private: System::Windows::Forms::Button^ btnTrangMieng;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnSalah;

	private: System::Windows::Forms::Button^ btnKhaiVi;

	private: System::Windows::Forms::Button^ btnFoodMain;


	private: System::Windows::Forms::Button^ btnAll;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::FlowLayoutPanel^ FlpFood;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbtenGia;
	private: System::Windows::Forms::Label^ lbtenMonan;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelOrder;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btnChuyenBan;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnThanhToan;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txtMoney;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnFood = (gcnew System::Windows::Forms::Panel());
			this->lblTenNhanVien = (gcnew System::Windows::Forms::Label());
			this->FlpFood = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbtenGia = (gcnew System::Windows::Forms::Label());
			this->lbtenMonan = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnNav = (gcnew System::Windows::Forms::Panel());
			this->btnNuocUong = (gcnew System::Windows::Forms::Button());
			this->btnTrangMieng = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnSalah = (gcnew System::Windows::Forms::Button());
			this->btnKhaiVi = (gcnew System::Windows::Forms::Button());
			this->btnFoodMain = (gcnew System::Windows::Forms::Button());
			this->btnAll = (gcnew System::Windows::Forms::Button());
			this->pnListFood = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtMoney = (gcnew System::Windows::Forms::TextBox());
			this->btnChuyenBan = (gcnew System::Windows::Forms::Button());
			this->btnThanhToan = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelOrder = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pnFood->SuspendLayout();
			this->FlpFood->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnNav->SuspendLayout();
			this->pnListFood->SuspendLayout();
			this->panel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panelOrder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pnFood
			// 
			this->pnFood->BackColor = System::Drawing::Color::Gainsboro;
			this->pnFood->Controls->Add(this->lblTenNhanVien);
			this->pnFood->Controls->Add(this->FlpFood);
			this->pnFood->Location = System::Drawing::Point(12, 12);
			this->pnFood->Name = L"pnFood";
			this->pnFood->Size = System::Drawing::Size(921, 640);
			this->pnFood->TabIndex = 0;
			// 
			// lblTenNhanVien
			// 
			this->lblTenNhanVien->Location = System::Drawing::Point(7, 0);
			this->lblTenNhanVien->Name = L"lblTenNhanVien";
			this->lblTenNhanVien->Size = System::Drawing::Size(331, 23);
			this->lblTenNhanVien->TabIndex = 1;
			this->lblTenNhanVien->Text = L"label3";
			// 
			// FlpFood
			// 
			this->FlpFood->AutoScroll = true;
			this->FlpFood->BackColor = System::Drawing::Color::Gray;
			this->FlpFood->Controls->Add(this->panel1);
			this->FlpFood->Location = System::Drawing::Point(4, 30);
			this->FlpFood->Margin = System::Windows::Forms::Padding(50);
			this->FlpFood->Name = L"FlpFood";
			this->FlpFood->Padding = System::Windows::Forms::Padding(30);
			this->FlpFood->Size = System::Drawing::Size(917, 610);
			this->FlpFood->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->lbtenGia);
			this->panel1->Controls->Add(this->lbtenMonan);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(33, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(188, 118);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			// 
			// lbtenGia
			// 
			this->lbtenGia->AutoSize = true;
			this->lbtenGia->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbtenGia->Location = System::Drawing::Point(126, 93);
			this->lbtenGia->Name = L"lbtenGia";
			this->lbtenGia->Size = System::Drawing::Size(32, 20);
			this->lbtenGia->TabIndex = 2;
			this->lbtenGia->Text = L"14$";
			// 
			// lbtenMonan
			// 
			this->lbtenMonan->AutoSize = true;
			this->lbtenMonan->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbtenMonan->Location = System::Drawing::Point(3, 91);
			this->lbtenMonan->Name = L"lbtenMonan";
			this->lbtenMonan->Size = System::Drawing::Size(92, 23);
			this->lbtenMonan->TabIndex = 1;
			this->lbtenMonan->Text = L"Hambuger";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(20, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(138, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pnNav
			// 
			this->pnNav->BackColor = System::Drawing::Color::Gainsboro;
			this->pnNav->Controls->Add(this->btnNuocUong);
			this->pnNav->Controls->Add(this->btnTrangMieng);
			this->pnNav->Controls->Add(this->button4);
			this->pnNav->Controls->Add(this->btnSalah);
			this->pnNav->Controls->Add(this->btnKhaiVi);
			this->pnNav->Controls->Add(this->btnFoodMain);
			this->pnNav->Controls->Add(this->btnAll);
			this->pnNav->Location = System::Drawing::Point(9, 658);
			this->pnNav->Name = L"pnNav";
			this->pnNav->Size = System::Drawing::Size(921, 124);
			this->pnNav->TabIndex = 1;
			// 
			// btnNuocUong
			// 
			this->btnNuocUong->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNuocUong->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNuocUong->Location = System::Drawing::Point(758, 20);
			this->btnNuocUong->Name = L"btnNuocUong";
			this->btnNuocUong->Size = System::Drawing::Size(143, 66);
			this->btnNuocUong->TabIndex = 6;
			this->btnNuocUong->Text = L"Nước Uống";
			this->btnNuocUong->UseVisualStyleBackColor = true;
			// 
			// btnTrangMieng
			// 
			this->btnTrangMieng->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTrangMieng->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTrangMieng->Location = System::Drawing::Point(609, 20);
			this->btnTrangMieng->Name = L"btnTrangMieng";
			this->btnTrangMieng->Size = System::Drawing::Size(143, 66);
			this->btnTrangMieng->TabIndex = 5;
			this->btnTrangMieng->Text = L"Tráng Miệng";
			this->btnTrangMieng->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(609, 20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 66);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Tất cả";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnSalah
			// 
			this->btnSalah->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalah->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalah->Location = System::Drawing::Point(460, 20);
			this->btnSalah->Name = L"btnSalah";
			this->btnSalah->Size = System::Drawing::Size(143, 66);
			this->btnSalah->TabIndex = 3;
			this->btnSalah->Text = L"Salah";
			this->btnSalah->UseVisualStyleBackColor = true;
			this->btnSalah->Click += gcnew System::EventHandler(this, &FormFood::btnSalah_Click);
			// 
			// btnKhaiVi
			// 
			this->btnKhaiVi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnKhaiVi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnKhaiVi->Location = System::Drawing::Point(311, 20);
			this->btnKhaiVi->Name = L"btnKhaiVi";
			this->btnKhaiVi->Size = System::Drawing::Size(143, 66);
			this->btnKhaiVi->TabIndex = 2;
			this->btnKhaiVi->Text = L"Khai Vị";
			this->btnKhaiVi->UseVisualStyleBackColor = true;
			this->btnKhaiVi->Click += gcnew System::EventHandler(this, &FormFood::btnKhaiVi_Click);
			// 
			// btnFoodMain
			// 
			this->btnFoodMain->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFoodMain->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoodMain->Location = System::Drawing::Point(162, 20);
			this->btnFoodMain->Name = L"btnFoodMain";
			this->btnFoodMain->Size = System::Drawing::Size(143, 66);
			this->btnFoodMain->TabIndex = 1;
			this->btnFoodMain->Text = L"Món Chính";
			this->btnFoodMain->UseVisualStyleBackColor = true;
			this->btnFoodMain->Click += gcnew System::EventHandler(this, &FormFood::btnFoodMain_Click);
			// 
			// btnAll
			// 
			this->btnAll->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAll->Location = System::Drawing::Point(13, 20);
			this->btnAll->Name = L"btnAll";
			this->btnAll->Size = System::Drawing::Size(143, 66);
			this->btnAll->TabIndex = 0;
			this->btnAll->Text = L"Tất cả";
			this->btnAll->UseVisualStyleBackColor = true;
			this->btnAll->Click += gcnew System::EventHandler(this, &FormFood::btnAll_Click);
			// 
			// pnListFood
			// 
			this->pnListFood->BackColor = System::Drawing::Color::Gainsboro;
			this->pnListFood->Controls->Add(this->panel2);
			this->pnListFood->Controls->Add(this->btnChuyenBan);
			this->pnListFood->Controls->Add(this->btnThanhToan);
			this->pnListFood->Controls->Add(this->button1);
			this->pnListFood->Controls->Add(this->flowLayoutPanel1);
			this->pnListFood->Controls->Add(this->panel4);
			this->pnListFood->Location = System::Drawing::Point(939, 12);
			this->pnListFood->Name = L"pnListFood";
			this->pnListFood->Size = System::Drawing::Size(369, 770);
			this->pnListFood->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->txtMoney);
			this->panel2->Location = System::Drawing::Point(6, 594);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(350, 53);
			this->panel2->TabIndex = 4;
			// 
			// txtMoney
			// 
			this->txtMoney->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMoney->Location = System::Drawing::Point(42, 4);
			this->txtMoney->Multiline = true;
			this->txtMoney->Name = L"txtMoney";
			this->txtMoney->Size = System::Drawing::Size(285, 42);
			this->txtMoney->TabIndex = 0;
			this->txtMoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnChuyenBan
			// 
			this->btnChuyenBan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChuyenBan->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChuyenBan->Location = System::Drawing::Point(12, 659);
			this->btnChuyenBan->Name = L"btnChuyenBan";
			this->btnChuyenBan->Size = System::Drawing::Size(126, 51);
			this->btnChuyenBan->TabIndex = 1;
			this->btnChuyenBan->Text = L"Trang Chủ";
			this->btnChuyenBan->UseVisualStyleBackColor = true;
			// 
			// btnThanhToan
			// 
			this->btnThanhToan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThanhToan->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThanhToan->Location = System::Drawing::Point(237, 716);
			this->btnThanhToan->Name = L"btnThanhToan";
			this->btnThanhToan->Size = System::Drawing::Size(125, 51);
			this->btnThanhToan->TabIndex = 3;
			this->btnThanhToan->Text = L"Thanh Toán";
			this->btnThanhToan->UseVisualStyleBackColor = true;
			this->btnThanhToan->Click += gcnew System::EventHandler(this, &FormFood::btnThanhToan_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 716);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Chuyển bàn";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panelOrder);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 16);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(10);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(362, 577);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panelOrder
			// 
			this->panelOrder->BackColor = System::Drawing::Color::IndianRed;
			this->panelOrder->Controls->Add(this->label2);
			this->panelOrder->Controls->Add(this->numericUpDown1);
			this->panelOrder->Controls->Add(this->label1);
			this->panelOrder->Controls->Add(this->pictureBox2);
			this->panelOrder->Location = System::Drawing::Point(50, 50);
			this->panelOrder->Margin = System::Windows::Forms::Padding(50);
			this->panelOrder->Name = L"panelOrder";
			this->panelOrder->Size = System::Drawing::Size(242, 123);
			this->panelOrder->TabIndex = 10;
			this->panelOrder->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(154, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"14$";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(158, 80);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(36, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(154, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hambuger";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(18, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(130, 116);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(6, 646);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(356, 4);
			this->panel4->TabIndex = 0;
			// 
			// FormFood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 783);
			this->Controls->Add(this->pnListFood);
			this->Controls->Add(this->pnNav);
			this->Controls->Add(this->pnFood);
			this->Name = L"FormFood";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormFood";
			this->Load += gcnew System::EventHandler(this, &FormFood::FormFood_Load);
			this->pnFood->ResumeLayout(false);
			this->FlpFood->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnNav->ResumeLayout(false);
			this->pnListFood->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panelOrder->ResumeLayout(false);
			this->panelOrder->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// hiển thị danh sách món
	private: System::Void HienThiDanhSachMon() {
		FlpFood->Controls->Clear();
		for each (MonAn ^ mon in danhSachMon)
		{
			Panel^ panel = gcnew Panel();
			panel->BorderStyle = BorderStyle::FixedSingle;
			panel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			panel->Location = System::Drawing::Point(23, 23);
			panel->Size = System::Drawing::Size(188, 118);
			panel->TabIndex = 0;
			panel->Tag = mon;
			panel->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
			BoGocControl(panel, 15);

			// Ảnh món ăn
			PictureBox^ picBox = gcnew PictureBox();
			picBox->Location = System::Drawing::Point(20, 4);
			picBox->Size = System::Drawing::Size(138, 86);
			picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			picBox->TabIndex = 0;
			picBox->BackColor = System::Drawing::Color::Transparent;
			picBox->Parent = panel;
			try { picBox->Image = Image::FromFile(mon->Anh); }
			catch (...) {}

			Label^ lblTen = gcnew Label();
			lblTen->Text = mon->TenMon;
			lblTen->AutoSize = true;
			lblTen->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			lblTen->Location = System::Drawing::Point(3, 91);
			lblTen->Size = System::Drawing::Size(92, 23);
			lblTen->TabIndex = 1;

			//gia
			Label^ lblGia = gcnew Label();
			lblGia->Text = mon->Gia;
			lblGia->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			lblGia->Location = System::Drawing::Point(126, 93);
			lblGia->Size = System::Drawing::Size(32, 20);
			lblGia->TabIndex = 2;


			panel->Controls->Add(picBox);
			panel->Controls->Add(lblTen);
			panel->Controls->Add(lblGia);

			FlpFood->Controls->Add(panel);

			// Các control bên trong cũng cần gán Tag để bắt được khi click:
			picBox->Tag = mon;
			lblTen->Tag = mon;
			lblGia->Tag = mon;
			picBox->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
			lblTen->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
			lblGia->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
		}
	}
	private: System::Void FormFood_Load(System::Object^ sender, System::EventArgs^ e) {
		BoGocControl(pnFood, 20);
		BoGocControl(pnListFood, 20);
		BoGocControl(pnNav, 20);
		// Khởi tạo danh sách mon
		danhSachMon = gcnew System::Collections::Generic::List<MonAn^>();

		danhSachMon->Add(gcnew MonAn("Món chính", "Hamburger", "2.4$", "Image/anh0.jpg"));
		danhSachMon->Add(gcnew MonAn("Món chính", "Pizza", "5.0$", "Image/anh1.jpg"));
		danhSachMon->Add(gcnew MonAn("Món chính", L"Phở Bò", "3.2$", "Image/anh2.jpg"));
		danhSachMon->Add(gcnew MonAn("Khai vị", "Bún Chả", "4.0$", "Image/anh3.jpg"));
		danhSachMon->Add(gcnew MonAn("Khai vị", "Gỏi Cuốn", "2.8$", "Image/anh4.jpg"));

		HienThiDanhSachMon();
	}
	private: System::Void panel_Clicked(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LocDanhSachMon(String^ loaiMon);
	private: void BoGocControl(Control^ control, int radius) {};
	private: System::Void CapNhatTongTien();
	private: System::Void pictureBox__clicked(System::Object^ sender, System::EventArgs^ e) {
		// Nếu bấm vào ảnh, gọi sự kiện Click của panel chứa nó
		PictureBox^ picBox = dynamic_cast<PictureBox^>(sender);
		if (picBox != nullptr && picBox->Parent != nullptr) {
			panel_Clicked(picBox->Parent, e); // Gọi hàm panel__clicked
		}
	}
		   // Xóa món khi số lượng về 0
	private: System::Void numSoLuong_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		NumericUpDown^ numSoLuong = safe_cast<NumericUpDown^>(sender);
		Panel^ panelOrder = safe_cast<Panel^>(numSoLuong->Parent);
		MonAn^ mon = safe_cast<MonAn^>(panelOrder->Tag);

		if (numSoLuong->Value == 0) {
			flowLayoutPanel1->Controls->Remove(panelOrder);
			banHienTai->DanhSachMon->Remove(mon);
			if (banHienTai->DanhSachMon->Count == 0) {
				banHienTai->TrangThai = "Trống";
			}
		}
		if (banHienTai->DanhSachMon->Contains(mon)) {
			banHienTai->DanhSachMon[banHienTai->DanhSachMon->IndexOf(mon)]->SoLuong = Decimal::ToInt32(numSoLuong->Value);
		}

		CapNhatTongTien();
	}
	private: System::Void btnThanhToan_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAll_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon("Tất cả");
	}
	private: System::Void btnFoodMain_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon("Món chính");
	}
	private: System::Void btnKhaiVi_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon("Khai vị");
	}
	private: System::Void btnSalah_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon("Salah");
	}
};
}
