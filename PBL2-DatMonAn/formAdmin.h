#pragma once
#include  "Login.h"
#include "AddFoodForm.h"
#include "AddUserForm.h"
#include "AddStatiticForm.h"
#include "AddDiscountForm.h"
#include "FormBill.h"
#include "AddBaoCaoNhanVienForm.h"
#include "AddThongKeMon.h"
#include "AddFoodNoPayMent.h"
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
			addStatiticForm = gcnew AddStatiticForm();
			panelGeneral->Controls->Add(addStatiticForm);
			addStatiticForm->Dock = DockStyle::Fill;
			addStatiticForm->Visible = false;
			addDiscountForm = gcnew AddDiscountForm();
			panelGeneral->Controls->Add(addDiscountForm);
			addDiscountForm->Dock = DockStyle::Fill;
			addDiscountForm->Visible = false;
			addBaoCaoNhanVienForm = gcnew AddBaoCaoNhanVienForm();
			panelGeneral->Controls->Add(addBaoCaoNhanVienForm);
			addBaoCaoNhanVienForm->Dock = DockStyle::Fill;
			addBaoCaoNhanVienForm->Visible = false;
			addThongKeMon = gcnew AddThongKeMon();
			panelGeneral->Controls->Add(addThongKeMon);
			addThongKeMon->Dock = DockStyle::Fill;
			addThongKeMon->Visible = false;
			addFoodNoPayMent = gcnew AddFoodNoPayMent();
			panelGeneral->Controls->Add(addFoodNoPayMent);
			addFoodNoPayMent->Dock = DockStyle::Fill;
			addFoodNoPayMent->Visible = false;
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
	private: System::String^ nameAdmin;	
	private: System::Windows::Forms::Button^ btnDoanhThu;

	private: System::Windows::Forms::Button^ btnQuanlynhanvien;
	private: System::Windows::Forms::Button^ btnThemMon;
	private: System::Windows::Forms::Button^ btnDangXUatAdmin;
	private: System::Windows::Forms::Label^ labelAdmin;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: AddFoodForm^ addFoodForm;
	private: AddUserForm^ addUserForm;
	private: AddStatiticForm^ addStatiticForm;
	private: AddDiscountForm^ addDiscountForm;
	private: AddBaoCaoNhanVienForm^ addBaoCaoNhanVienForm;
	private: AddThongKeMon^ addThongKeMon;
	private: AddFoodNoPayMent^ addFoodNoPayMent;
	private: System::Windows::Forms::Panel^ panelGeneral;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnDiscount;

	private: System::Windows::Forms::Panel^ panelNav;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btnThongKeMon;
	private: System::Windows::Forms::Button^ btnBaoCaoNhanVien;
	private: System::Windows::Forms::Button^ btnFoodNoPayMent;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(formAdmin::typeid));
			this->btnThemMon = (gcnew System::Windows::Forms::Button());
			this->btnQuanlynhanvien = (gcnew System::Windows::Forms::Button());
			this->btnDoanhThu = (gcnew System::Windows::Forms::Button());
			this->btnDangXUatAdmin = (gcnew System::Windows::Forms::Button());
			this->labelAdmin = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnDiscount = (gcnew System::Windows::Forms::Button());
			this->panelGeneral = (gcnew System::Windows::Forms::Panel());
			this->panelNav = (gcnew System::Windows::Forms::Panel());
			this->btnThongKeMon = (gcnew System::Windows::Forms::Button());
			this->btnBaoCaoNhanVien = (gcnew System::Windows::Forms::Button());
			this->btnFoodNoPayMent = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelNav->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnThemMon
			// 
			this->btnThemMon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnThemMon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnThemMon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThemMon->FlatAppearance->BorderSize = 0;
			this->btnThemMon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThemMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThemMon->ForeColor = System::Drawing::Color::White;
			this->btnThemMon->Location = System::Drawing::Point(0, 64);
			this->btnThemMon->Margin = System::Windows::Forms::Padding(0);
			this->btnThemMon->Name = L"btnThemMon";
			this->btnThemMon->Size = System::Drawing::Size(224, 64);
			this->btnThemMon->TabIndex = 5;
			this->btnThemMon->Text = L"Thêm Món";
			this->btnThemMon->UseVisualStyleBackColor = false;
			this->btnThemMon->Click += gcnew System::EventHandler(this, &formAdmin::btnThemMon_Click);
			// 
			// btnQuanlynhanvien
			// 
			this->btnQuanlynhanvien->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnQuanlynhanvien->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnQuanlynhanvien->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQuanlynhanvien->FlatAppearance->BorderSize = 0;
			this->btnQuanlynhanvien->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuanlynhanvien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuanlynhanvien->ForeColor = System::Drawing::Color::White;
			this->btnQuanlynhanvien->Location = System::Drawing::Point(0, 0);
			this->btnQuanlynhanvien->Margin = System::Windows::Forms::Padding(0);
			this->btnQuanlynhanvien->Name = L"btnQuanlynhanvien";
			this->btnQuanlynhanvien->Size = System::Drawing::Size(224, 64);
			this->btnQuanlynhanvien->TabIndex = 1;
			this->btnQuanlynhanvien->Text = L"Quản Lý Nhân Viên";
			this->btnQuanlynhanvien->UseVisualStyleBackColor = false;
			this->btnQuanlynhanvien->Click += gcnew System::EventHandler(this, &formAdmin::btnQuanlynhanvien_Click);
			// 
			// btnDoanhThu
			// 
			this->btnDoanhThu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnDoanhThu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnDoanhThu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDoanhThu->FlatAppearance->BorderSize = 0;
			this->btnDoanhThu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDoanhThu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDoanhThu->ForeColor = System::Drawing::Color::White;
			this->btnDoanhThu->Location = System::Drawing::Point(0, 192);
			this->btnDoanhThu->Margin = System::Windows::Forms::Padding(0);
			this->btnDoanhThu->Name = L"btnDoanhThu";
			this->btnDoanhThu->Size = System::Drawing::Size(224, 64);
			this->btnDoanhThu->TabIndex = 0;
			this->btnDoanhThu->Text = L"Doanh Thu";
			this->btnDoanhThu->UseVisualStyleBackColor = false;
			this->btnDoanhThu->Click += gcnew System::EventHandler(this, &formAdmin::btnDoanhThu_Click);
			// 
			// btnDangXUatAdmin
			// 
			this->btnDangXUatAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnDangXUatAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnDangXUatAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDangXUatAdmin->FlatAppearance->BorderSize = 0;
			this->btnDangXUatAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDangXUatAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDangXUatAdmin->ForeColor = System::Drawing::Color::White;
			this->btnDangXUatAdmin->Location = System::Drawing::Point(0, 593);
			this->btnDangXUatAdmin->Margin = System::Windows::Forms::Padding(0);
			this->btnDangXUatAdmin->Name = L"btnDangXUatAdmin";
			this->btnDangXUatAdmin->Size = System::Drawing::Size(224, 80);
			this->btnDangXUatAdmin->TabIndex = 4;
			this->btnDangXUatAdmin->Text = L"Đăng Xuất";
			this->btnDangXUatAdmin->UseVisualStyleBackColor = false;
			this->btnDangXUatAdmin->Click += gcnew System::EventHandler(this, &formAdmin::btnDangXUatAdmin_Click);
			// 
			// labelAdmin
			// 
			this->labelAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->labelAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->labelAdmin->Location = System::Drawing::Point(88, 74);
			this->labelAdmin->Name = L"labelAdmin";
			this->labelAdmin->Size = System::Drawing::Size(152, 46);
			this->labelAdmin->TabIndex = 6;
			this->labelAdmin->Text = L"Quản Lý";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->labelAdmin);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1478, 137);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1178, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(253, 159);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(919, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(253, 159);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(795, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(106, 81);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(510, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(152, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->label1->Location = System::Drawing::Point(37, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 47);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Restaurant D^D";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(668, 54);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 81);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// btnDiscount
			// 
			this->btnDiscount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnDiscount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnDiscount->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDiscount->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnDiscount->FlatAppearance->BorderSize = 0;
			this->btnDiscount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDiscount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiscount->ForeColor = System::Drawing::Color::White;
			this->btnDiscount->Location = System::Drawing::Point(0, 128);
			this->btnDiscount->Margin = System::Windows::Forms::Padding(0);
			this->btnDiscount->Name = L"btnDiscount";
			this->btnDiscount->Size = System::Drawing::Size(224, 64);
			this->btnDiscount->TabIndex = 6;
			this->btnDiscount->Text = L"Giảm giá";
			this->btnDiscount->UseVisualStyleBackColor = false;
			this->btnDiscount->Click += gcnew System::EventHandler(this, &formAdmin::btnDiscount_Click);
			// 
			// panelGeneral
			// 
			this->panelGeneral->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelGeneral->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panelGeneral->Location = System::Drawing::Point(223, 138);
			this->panelGeneral->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(1257, 673);
			this->panelGeneral->TabIndex = 8;
			// 
			// panelNav
			// 
			this->panelNav->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelNav->Controls->Add(this->btnFoodNoPayMent);
			this->panelNav->Controls->Add(this->btnThongKeMon);
			this->panelNav->Controls->Add(this->btnBaoCaoNhanVien);
			this->panelNav->Controls->Add(this->btnDiscount);
			this->panelNav->Controls->Add(this->btnDoanhThu);
			this->panelNav->Controls->Add(this->btnDangXUatAdmin);
			this->panelNav->Controls->Add(this->btnThemMon);
			this->panelNav->Controls->Add(this->btnQuanlynhanvien);
			this->panelNav->Location = System::Drawing::Point(0, 138);
			this->panelNav->Name = L"panelNav";
			this->panelNav->Size = System::Drawing::Size(224, 673);
			this->panelNav->TabIndex = 9;
			// 
			// btnThongKeMon
			// 
			this->btnThongKeMon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnThongKeMon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnThongKeMon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThongKeMon->FlatAppearance->BorderSize = 0;
			this->btnThongKeMon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThongKeMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThongKeMon->ForeColor = System::Drawing::Color::White;
			this->btnThongKeMon->Location = System::Drawing::Point(0, 320);
			this->btnThongKeMon->Margin = System::Windows::Forms::Padding(0);
			this->btnThongKeMon->Name = L"btnThongKeMon";
			this->btnThongKeMon->Size = System::Drawing::Size(224, 64);
			this->btnThongKeMon->TabIndex = 8;
			this->btnThongKeMon->Text = L"Thống kê món";
			this->btnThongKeMon->UseVisualStyleBackColor = false;
			this->btnThongKeMon->Click += gcnew System::EventHandler(this, &formAdmin::btnThongKeMon_Click);
			// 
			// btnBaoCaoNhanVien
			// 
			this->btnBaoCaoNhanVien->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnBaoCaoNhanVien->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnBaoCaoNhanVien->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBaoCaoNhanVien->FlatAppearance->BorderSize = 0;
			this->btnBaoCaoNhanVien->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBaoCaoNhanVien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBaoCaoNhanVien->ForeColor = System::Drawing::Color::White;
			this->btnBaoCaoNhanVien->Location = System::Drawing::Point(0, 256);
			this->btnBaoCaoNhanVien->Margin = System::Windows::Forms::Padding(0);
			this->btnBaoCaoNhanVien->Name = L"btnBaoCaoNhanVien";
			this->btnBaoCaoNhanVien->Size = System::Drawing::Size(224, 64);
			this->btnBaoCaoNhanVien->TabIndex = 7;
			this->btnBaoCaoNhanVien->Text = L"Báo Cáo Nhân Viên";
			this->btnBaoCaoNhanVien->UseVisualStyleBackColor = false;
			this->btnBaoCaoNhanVien->Click += gcnew System::EventHandler(this, &formAdmin::btnBaoCaoNhanVien_Click);
			// 
			// btnFoodNoPayMent
			// 
			this->btnFoodNoPayMent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnFoodNoPayMent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->btnFoodNoPayMent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFoodNoPayMent->FlatAppearance->BorderSize = 0;
			this->btnFoodNoPayMent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFoodNoPayMent->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoodNoPayMent->ForeColor = System::Drawing::Color::White;
			this->btnFoodNoPayMent->Location = System::Drawing::Point(0, 384);
			this->btnFoodNoPayMent->Margin = System::Windows::Forms::Padding(0);
			this->btnFoodNoPayMent->Name = L"btnFoodNoPayMent";
			this->btnFoodNoPayMent->Size = System::Drawing::Size(224, 64);
			this->btnFoodNoPayMent->TabIndex = 9;
			this->btnFoodNoPayMent->Text = L"Đơn chưa thanh toán";
			this->btnFoodNoPayMent->UseVisualStyleBackColor = false;
			this->btnFoodNoPayMent->Click += gcnew System::EventHandler(this, &formAdmin::btnFoodNoPayMent_Click);
			// 
			// formAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1478, 811);
			this->Controls->Add(this->panelNav);
			this->Controls->Add(this->panelGeneral);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"formAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formAdmin";
			this->Load += gcnew System::EventHandler(this, &formAdmin::formAdmin_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelNav->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void formAdmin_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ResetMauButtonMenu();
	private: System::Void btnQuanlynhanvien_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDoanhThu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnThemMon_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDiscount_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDangXUatAdmin_Click(System::Object^ sender, System::EventArgs^ e);	
private: System::Void btnBaoCaoNhanVien_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnThongKeMon_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnFoodNoPayMent_Click(System::Object^ sender, System::EventArgs^ e);
};
}
