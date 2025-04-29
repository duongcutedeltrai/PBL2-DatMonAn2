#pragma once
#include "MonAn.h"
#include "FormBill.h"
#include "formStaff.h"
#include "ManagerTable.h"
#include "CreateTable.h"
#include "AddFoodForm.h"
#include "AddHistoryBillForm.h"
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
		FormFood(ManagerTable^ ban, String^ nameStaff, List<ManagerTable^>^ danhSachBan, String^ banFilePath, AddHistoryBillForm^ historyForm)
		{
			InitializeComponent();
			this->banHienTai = ban;
			this->nameStaff = nameStaff;
			FoodfilePath = "monan.txt";
			String^ VirttualOrderFilePath = "tamthoi.txt";
			this->danhSachBan = danhSachBan;
			this->banFilePath = banFilePath;
			this->addHistoryBillForm = historyForm;
			danhSachMonAn = MonAn::DocDanhSachMonAn(FoodfilePath);
			lblTenNhanVien->Text = "Ten nhan vien: " + nameStaff;
			cbChangerTable->Items->Clear();
			if (danhSachBan != nullptr)
			{
				for each (ManagerTable ^ ban in danhSachBan)
				{
					cbChangerTable->Items->Add(ban->SoBan);
				}
			}
			HienThiMonDaDat();
			ListView^ danhSachMonAn;
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
		System::String^ banFilePath;
		String^ FoodfilePath;
		String^ VirttualOrderFilePath = "tamthoi.txt";
		ManagerTable^ banHienTai;
		String^ nameStaff;
		AddHistoryBillForm^ addHistoryBillForm;
		List<ManagerTable^>^ danhSachBan;
		List<MonAn^>^ danhSachMonAn;
		List<MonAn^>^ DanhSachMonDangChon;
	private: System::Windows::Forms::Label^ lblTenNhanVien;
	private: System::Windows::Forms::FlowLayoutPanel^ FlpFood;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbtenGia;
	private: System::Windows::Forms::Label^ lbtenMonan;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbChangerTable;
		   //private:
		   //	System::Collections::Generic::List<MonAn^>^ danhSachMon;
	private: System::Windows::Forms::Panel^ pnNav;
	protected:
	protected:
	private: System::Windows::Forms::Panel^ pnListFood;
	private: System::Windows::Forms::Button^ btnNuocUong;
	private: System::Windows::Forms::Button^ btnTrangMieng;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnSalah;
	private: System::Windows::Forms::Button^ btnAppetizer;
	private: System::Windows::Forms::Button^ btnFoodMain;
	private: System::Windows::Forms::Button^ btnAll;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panelOrder;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btnTrangChu;
	private: System::Windows::Forms::Button^ btnChangerTable;


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
			this->pnNav = (gcnew System::Windows::Forms::Panel());
			this->btnNuocUong = (gcnew System::Windows::Forms::Button());
			this->btnTrangMieng = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnSalah = (gcnew System::Windows::Forms::Button());
			this->btnAppetizer = (gcnew System::Windows::Forms::Button());
			this->btnFoodMain = (gcnew System::Windows::Forms::Button());
			this->btnAll = (gcnew System::Windows::Forms::Button());
			this->pnListFood = (gcnew System::Windows::Forms::Panel());
			this->cbChangerTable = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtMoney = (gcnew System::Windows::Forms::TextBox());
			this->btnTrangChu = (gcnew System::Windows::Forms::Button());
			this->btnThanhToan = (gcnew System::Windows::Forms::Button());
			this->btnChangerTable = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelOrder = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->FlpFood = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbtenGia = (gcnew System::Windows::Forms::Label());
			this->lbtenMonan = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblTenNhanVien = (gcnew System::Windows::Forms::Label());
			this->pnNav->SuspendLayout();
			this->pnListFood->SuspendLayout();
			this->panel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panelOrder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->FlpFood->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pnNav
			// 
			this->pnNav->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pnNav->Controls->Add(this->btnNuocUong);
			this->pnNav->Controls->Add(this->btnTrangMieng);
			this->pnNav->Controls->Add(this->button4);
			this->pnNav->Controls->Add(this->btnSalah);
			this->pnNav->Controls->Add(this->btnAppetizer);
			this->pnNav->Controls->Add(this->btnFoodMain);
			this->pnNav->Controls->Add(this->btnAll);
			this->pnNav->Location = System::Drawing::Point(12, 674);
			this->pnNav->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnNav->Name = L"pnNav";
			this->pnNav->Size = System::Drawing::Size(921, 124);
			this->pnNav->TabIndex = 1;
			// 
			// btnNuocUong
			// 
			this->btnNuocUong->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNuocUong->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNuocUong->Location = System::Drawing::Point(757, 20);
			this->btnNuocUong->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnNuocUong->Name = L"btnNuocUong";
			this->btnNuocUong->Size = System::Drawing::Size(143, 66);
			this->btnNuocUong->TabIndex = 6;
			this->btnNuocUong->Text = L"Nước uống";
			this->btnNuocUong->UseVisualStyleBackColor = true;
			this->btnNuocUong->Click += gcnew System::EventHandler(this, &FormFood::btnNuocUong_Click);
			// 
			// btnTrangMieng
			// 
			this->btnTrangMieng->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTrangMieng->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTrangMieng->Location = System::Drawing::Point(609, 20);
			this->btnTrangMieng->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTrangMieng->Name = L"btnTrangMieng";
			this->btnTrangMieng->Size = System::Drawing::Size(143, 66);
			this->btnTrangMieng->TabIndex = 5;
			this->btnTrangMieng->Text = L"Tráng Miệng";
			this->btnTrangMieng->UseVisualStyleBackColor = true;
			this->btnTrangMieng->Click += gcnew System::EventHandler(this, &FormFood::btnTrangMieng_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(609, 20);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnSalah->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSalah->Name = L"btnSalah";
			this->btnSalah->Size = System::Drawing::Size(143, 66);
			this->btnSalah->TabIndex = 3;
			this->btnSalah->Text = L"Salad";
			this->btnSalah->UseVisualStyleBackColor = true;
			this->btnSalah->Click += gcnew System::EventHandler(this, &FormFood::btnSalah_Click);
			// 
			// btnAppetizer
			// 
			this->btnAppetizer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAppetizer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAppetizer->Location = System::Drawing::Point(311, 20);
			this->btnAppetizer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAppetizer->Name = L"btnAppetizer";
			this->btnAppetizer->Size = System::Drawing::Size(143, 66);
			this->btnAppetizer->TabIndex = 2;
			this->btnAppetizer->Text = L"Khai Vị";
			this->btnAppetizer->UseVisualStyleBackColor = true;
			this->btnAppetizer->Click += gcnew System::EventHandler(this, &FormFood::btnAppetizer_Click);
			// 
			// btnFoodMain
			// 
			this->btnFoodMain->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFoodMain->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoodMain->Location = System::Drawing::Point(163, 20);
			this->btnFoodMain->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnAll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAll->Name = L"btnAll";
			this->btnAll->Size = System::Drawing::Size(143, 66);
			this->btnAll->TabIndex = 0;
			this->btnAll->Text = L"Tất cả";
			this->btnAll->UseVisualStyleBackColor = true;
			this->btnAll->Click += gcnew System::EventHandler(this, &FormFood::btnAll_Click);
			// 
			// pnListFood
			// 
			this->pnListFood->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pnListFood->Controls->Add(this->cbChangerTable);
			this->pnListFood->Controls->Add(this->panel2);
			this->pnListFood->Controls->Add(this->btnTrangChu);
			this->pnListFood->Controls->Add(this->btnThanhToan);
			this->pnListFood->Controls->Add(this->btnChangerTable);
			this->pnListFood->Controls->Add(this->flowLayoutPanel1);
			this->pnListFood->Controls->Add(this->panel4);
			this->pnListFood->Location = System::Drawing::Point(939, 42);
			this->pnListFood->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnListFood->Name = L"pnListFood";
			this->pnListFood->Size = System::Drawing::Size(411, 756);
			this->pnListFood->TabIndex = 0;
			// 
			// cbChangerTable
			// 
			this->cbChangerTable->FormattingEnabled = true;
			this->cbChangerTable->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Bàn 1", L"Bàn 2", L"Bàn 3", L"Bàn 4", L"Bàn 5",
					L"Bàn 6", L"Bàn 7", L"Bàn 8", L"Bàn 9", L"Bàn 10"
			});
			this->cbChangerTable->Location = System::Drawing::Point(222, 715);
			this->cbChangerTable->Name = L"cbChangerTable";
			this->cbChangerTable->Size = System::Drawing::Size(121, 24);
			this->cbChangerTable->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->txtMoney);
			this->panel2->Location = System::Drawing::Point(5, 574);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(395, 53);
			this->panel2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(200, 7);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 29);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Tổng:";
			// 
			// txtMoney
			// 
			this->txtMoney->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMoney->Location = System::Drawing::Point(271, 7);
			this->txtMoney->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtMoney->Multiline = true;
			this->txtMoney->Name = L"txtMoney";
			this->txtMoney->Size = System::Drawing::Size(108, 31);
			this->txtMoney->TabIndex = 0;
			this->txtMoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnTrangChu
			// 
			this->btnTrangChu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTrangChu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTrangChu->Location = System::Drawing::Point(70, 645);
			this->btnTrangChu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTrangChu->Name = L"btnTrangChu";
			this->btnTrangChu->Size = System::Drawing::Size(125, 50);
			this->btnTrangChu->TabIndex = 1;
			this->btnTrangChu->Text = L"Trang Chủ";
			this->btnTrangChu->UseVisualStyleBackColor = true;
			this->btnTrangChu->Click += gcnew System::EventHandler(this, &FormFood::btnTrangChu_Click);
			// 
			// btnThanhToan
			// 
			this->btnThanhToan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThanhToan->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThanhToan->Location = System::Drawing::Point(218, 645);
			this->btnThanhToan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnThanhToan->Name = L"btnThanhToan";
			this->btnThanhToan->Size = System::Drawing::Size(125, 50);
			this->btnThanhToan->TabIndex = 3;
			this->btnThanhToan->Text = L"Thanh Toán";
			this->btnThanhToan->UseVisualStyleBackColor = true;
			this->btnThanhToan->Click += gcnew System::EventHandler(this, &FormFood::btnThanhToan_Click);
			// 
			// btnChangerTable
			// 
			this->btnChangerTable->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChangerTable->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChangerTable->Location = System::Drawing::Point(70, 699);
			this->btnChangerTable->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChangerTable->Name = L"btnChangerTable";
			this->btnChangerTable->Size = System::Drawing::Size(125, 50);
			this->btnChangerTable->TabIndex = 2;
			this->btnChangerTable->Text = L"Chuyển bàn";
			this->btnChangerTable->UseVisualStyleBackColor = true;
			this->btnChangerTable->Click += gcnew System::EventHandler(this, &FormFood::btnChangerTable_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->flowLayoutPanel1->Controls->Add(this->panelOrder);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(401, 571);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panelOrder
			// 
			this->panelOrder->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelOrder->Controls->Add(this->label2);
			this->panelOrder->Controls->Add(this->label1);
			this->panelOrder->Controls->Add(this->pictureBox2);
			this->panelOrder->Location = System::Drawing::Point(51, 50);
			this->panelOrder->Margin = System::Windows::Forms::Padding(51, 50, 51, 50);
			this->panelOrder->Name = L"panelOrder";
			this->panelOrder->Size = System::Drawing::Size(267, 123);
			this->panelOrder->TabIndex = 10;
			this->panelOrder->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(155, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"14$";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hambuger";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(19, 2);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(131, 116);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel4->Location = System::Drawing::Point(5, 633);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(400, 4);
			this->panel4->TabIndex = 0;
			// 
			// FlpFood
			// 
			this->FlpFood->AutoScroll = true;
			this->FlpFood->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->FlpFood->Controls->Add(this->panel1);
			this->FlpFood->Location = System::Drawing::Point(9, 42);
			this->FlpFood->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FlpFood->Name = L"FlpFood";
			this->FlpFood->Padding = System::Windows::Forms::Padding(80, 2, 11, 10);
			this->FlpFood->Size = System::Drawing::Size(921, 626);
			this->FlpFood->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->lbtenGia);
			this->panel1->Controls->Add(this->lbtenMonan);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(83, 4);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->lbtenGia->Location = System::Drawing::Point(125, 94);
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
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(139, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// lblTenNhanVien
			// 
			this->lblTenNhanVien->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTenNhanVien->Location = System::Drawing::Point(5, 12);
			this->lblTenNhanVien->Name = L"lblTenNhanVien";
			this->lblTenNhanVien->Size = System::Drawing::Size(331, 23);
			this->lblTenNhanVien->TabIndex = 1;
			this->lblTenNhanVien->Text = L"label3";
			// 
			// FormFood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1353, 802);
			this->Controls->Add(this->pnListFood);
			this->Controls->Add(this->lblTenNhanVien);
			this->Controls->Add(this->FlpFood);
			this->Controls->Add(this->pnNav);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FormFood";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormFood";
			this->Load += gcnew System::EventHandler(this, &FormFood::FormFood_Load);
			this->pnNav->ResumeLayout(false);
			this->pnListFood->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panelOrder->ResumeLayout(false);
			this->panelOrder->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->FlpFood->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// hiển thị danh sách mónbtnThanhToan
	private: System::Void FormFood_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void HienThiDanhSachMon();
	private: System::Void HienThiMonDaDat();
	private: System::Void panel_Clicked(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LocDanhSachMon(String^ loaiMon);
	private: void BoGocControl(Control^ control, int radius);
	private: System::Void CapNhatTongTien();
	private: System::Void pictureBox__clicked(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnThanhToan_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LuuDanhSachMonVaoFile(String^ VirttualOrderFilePath);
	private: System::Void DocDanhSachMonTuFile();
	private: System::Void XoaDanhSachMonTam();
		   System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e);
		   System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAll_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon("Tất cả");
	}
	private: System::Void btnFoodMain_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon("Món Chính");
	}
	private: System::Void btnSalah_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon("Salad");
	}
	private: System::Void btnAppetizer_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon(L"Khai Vị");
	}
	private: System::Void btnTrangMieng_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon(L"Tráng Miệng");
	}
	private: System::Void btnNuocUong_Click(System::Object^ sender, System::EventArgs^ e) {
		LocDanhSachMon(L"Nước uống");
	}
	private: System::Void btnTrangChu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnChangerTable_Click(System::Object^ sender, System::EventArgs^ e);
};
}
