#pragma once
#include "MonAn.h"
#include "ManagerTable.h"
#include "PayMent.h"
#include "AddHistoryBillForm.h"
namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormBill
	/// </summary>
	public ref class FormBill : public System::Windows::Forms::Form
	{
		//ref class FormFood;
	public:
		FormBill(System::Collections::Generic::List<MonAn^>^ dsMon, ManagerTable^ ban, String^ nameStaff, List<ManagerTable^>^ dsBan, String^ banFilePath, AddHistoryBillForm^ historyForm)
		{
			InitializeComponent();
			this->danhSachMon = dsMon;
			this->banHienTai = ban;
			this->nameStaff = nameStaff;
			this->danhSachBan = dsBan;
			this->banFilePath = banFilePath;
			this->addHistoryBillForm = historyForm;
			this->billFilePath = "bill.txt";
			lblTenNhanVIen->Text = "Ten nhan vien: " + nameStaff;
			lblBanDat->Text = ban->SoBan;
			Monandachon();
			//  
			//TODO: Add the constructor code here  
			//  
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormBill()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		AddHistoryBillForm^ addHistoryBillForm;
		String^ billFilePath;
		ManagerTable^ banHienTai;
		String^ nameStaff;
		System::Collections::Generic::List<MonAn^>^ danhSachMon;
		List<ManagerTable^>^ danhSachBan;
		String^ banFilePath;
	//private:
	//	System::Collections::Generic::List<MonAn^>^ danhSachMon;


	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblBanDat;
	private: System::Windows::Forms::Panel^ pnPrice;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btnTienMat;

	private: System::Windows::Forms::Button^ btnChuyenKhoan;
	private: System::Windows::Forms::DataGridView^ datagridViewBill;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ lblTenNhanVIen;
	private: System::Windows::Forms::Label^ lblDateIn;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblBanDat = (gcnew System::Windows::Forms::Label());
			this->pnPrice = (gcnew System::Windows::Forms::Panel());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnTienMat = (gcnew System::Windows::Forms::Button());
			this->btnChuyenKhoan = (gcnew System::Windows::Forms::Button());
			this->datagridViewBill = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblTenNhanVIen = (gcnew System::Windows::Forms::Label());
			this->lblDateIn = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->pnPrice->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagridViewBill))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(23, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(337, 126);
			this->panel1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label4->Location = System::Drawing::Point(66, 89);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 30);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hóa Đơn Bán Hàng";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label3->Location = System::Drawing::Point(121, 75);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ĐT: 0123456789";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label2->Location = System::Drawing::Point(38, 41);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(259, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Địa chỉ: Nguyễn Lương Bằng, Quận LIên CHiểu, Thành Phố Đà Nẵng";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 23.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label1->Location = System::Drawing::Point(42, 4);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RESTAURANT D^D";
			// 
			// lblBanDat
			// 
			this->lblBanDat->AutoSize = true;
			this->lblBanDat->BackColor = System::Drawing::Color::Transparent;
			this->lblBanDat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBanDat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblBanDat->Location = System::Drawing::Point(142, 139);
			this->lblBanDat->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblBanDat->Name = L"lblBanDat";
			this->lblBanDat->Size = System::Drawing::Size(52, 30);
			this->lblBanDat->TabIndex = 1;
			this->lblBanDat->Text = L"Bàn";
			// 
			// pnPrice
			// 
			this->pnPrice->Controls->Add(this->txtPrice);
			this->pnPrice->Controls->Add(this->label14);
			this->pnPrice->Location = System::Drawing::Point(9, 440);
			this->pnPrice->Margin = System::Windows::Forms::Padding(2);
			this->pnPrice->Name = L"pnPrice";
			this->pnPrice->Size = System::Drawing::Size(346, 47);
			this->pnPrice->TabIndex = 6;
			// 
			// txtPrice
			// 
			this->txtPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->txtPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPrice->Location = System::Drawing::Point(280, 15);
			this->txtPrice->Margin = System::Windows::Forms::Padding(8);
			this->txtPrice->Multiline = true;
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(44, 35);
			this->txtPrice->TabIndex = 1;
			this->txtPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtPrice->TextChanged += gcnew System::EventHandler(this, &FormBill::txtPrice_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label14->Location = System::Drawing::Point(215, 4);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 30);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Tổng:";
			this->label14->Click += gcnew System::EventHandler(this, &FormBill::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(92, 535);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(180, 13);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Cảm ơn quý khách và hẹn gặp lại";
			// 
			// btnTienMat
			// 
			this->btnTienMat->BackColor = System::Drawing::Color::White;
			this->btnTienMat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTienMat->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTienMat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnTienMat->Location = System::Drawing::Point(64, 490);
			this->btnTienMat->Margin = System::Windows::Forms::Padding(2);
			this->btnTienMat->Name = L"btnTienMat";
			this->btnTienMat->Size = System::Drawing::Size(103, 36);
			this->btnTienMat->TabIndex = 8;
			this->btnTienMat->Text = L"Tiền mặt";
			this->btnTienMat->UseVisualStyleBackColor = false;
			this->btnTienMat->Click += gcnew System::EventHandler(this, &FormBill::btnTienMat_Click);
			// 
			// btnChuyenKhoan
			// 
			this->btnChuyenKhoan->BackColor = System::Drawing::Color::White;
			this->btnChuyenKhoan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChuyenKhoan->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->btnChuyenKhoan->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->btnChuyenKhoan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->btnChuyenKhoan->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChuyenKhoan->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnChuyenKhoan->Location = System::Drawing::Point(191, 490);
			this->btnChuyenKhoan->Margin = System::Windows::Forms::Padding(2);
			this->btnChuyenKhoan->Name = L"btnChuyenKhoan";
			this->btnChuyenKhoan->Size = System::Drawing::Size(109, 36);
			this->btnChuyenKhoan->TabIndex = 9;
			this->btnChuyenKhoan->Text = L"Chuyển khoản";
			this->btnChuyenKhoan->UseVisualStyleBackColor = false;
			this->btnChuyenKhoan->Click += gcnew System::EventHandler(this, &FormBill::btnChuyenKhoan_Click);
			// 
			// datagridViewBill
			// 
			this->datagridViewBill->AllowUserToAddRows = false;
			this->datagridViewBill->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datagridViewBill->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->datagridViewBill->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->datagridViewBill->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagridViewBill->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->datagridViewBill->Location = System::Drawing::Point(9, 254);
			this->datagridViewBill->Margin = System::Windows::Forms::Padding(2);
			this->datagridViewBill->Name = L"datagridViewBill";
			this->datagridViewBill->RowHeadersVisible = false;
			this->datagridViewBill->RowHeadersWidth = 25;
			this->datagridViewBill->RowTemplate->Height = 24;
			this->datagridViewBill->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->datagridViewBill->Size = System::Drawing::Size(351, 58);
			this->datagridViewBill->TabIndex = 10;
			this->datagridViewBill->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormBill::datagridViewBill_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Tên món";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"SL";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Giá";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tổng tiền";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// lblTenNhanVIen
			// 
			this->lblTenNhanVIen->AutoSize = true;
			this->lblTenNhanVIen->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lblTenNhanVIen->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTenNhanVIen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblTenNhanVIen->Location = System::Drawing::Point(34, 196);
			this->lblTenNhanVIen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTenNhanVIen->Name = L"lblTenNhanVIen";
			this->lblTenNhanVIen->Size = System::Drawing::Size(32, 13);
			this->lblTenNhanVIen->TabIndex = 11;
			this->lblTenNhanVIen->Text = L"label";
			// 
			// lblDateIn
			// 
			this->lblDateIn->AutoSize = true;
			this->lblDateIn->Location = System::Drawing::Point(34, 226);
			this->lblDateIn->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblDateIn->Name = L"lblDateIn";
			this->lblDateIn->Size = System::Drawing::Size(47, 13);
			this->lblDateIn->TabIndex = 12;
			this->lblDateIn->Text = L"Giờ vào:";
			// 
			// FormBill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->ClientSize = System::Drawing::Size(372, 557);
			this->Controls->Add(this->lblDateIn);
			this->Controls->Add(this->lblTenNhanVIen);
			this->Controls->Add(this->datagridViewBill);
			this->Controls->Add(this->btnChuyenKhoan);
			this->Controls->Add(this->btnTienMat);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pnPrice);
			this->Controls->Add(this->lblBanDat);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormBill";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormBill";
			this->Load += gcnew System::EventHandler(this, &FormBill::FormBill_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnPrice->ResumeLayout(false);
			this->pnPrice->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagridViewBill))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FormBill_Load(System::Object^ sender, System::EventArgs^ e) {
		// dan theo mon an
		int totalRowHeight = 0;
		for (int i = 0; i < datagridViewBill->Rows->Count; i++) {
			totalRowHeight += datagridViewBill->Rows[i]->Height;
		}
		int headerHeight = datagridViewBill->ColumnHeadersHeight;
		datagridViewBill->Height = headerHeight + totalRowHeight + 2;
	};
	private: System::Void Monandachon();
	private: System::Void btnChuyenKhoan_Click(System::Object^ sender, System::EventArgs^ e) {
		if (danhSachMon -> Count == 0) {
			MessageBox::Show(L"Không có món nào trong danh sách!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		double tongTien = 0.0;
		for each(MonAn ^ mon in danhSachMon) {
			double gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
			//double gia = Convert::ToDouble(mon->Gia + "$");
			tongTien += gia * mon->SoLuong;
		}
		//tao va luu hoa don
		PayMent^ payMent = gcnew PayMent(banHienTai->ID, banHienTai->SoBan, nameStaff, danhSachMon, tongTien, L"Chuyển khoản");
		List<PayMent^>^ danhSachHoaDon = gcnew List<PayMent^>();
		danhSachHoaDon->Add(payMent);
		PayMent::GhiDanhSachHoaDon(danhSachHoaDon, billFilePath);

		//cap nhat trang thai ban
		banHienTai->TrangThai = L"Trống";
		banHienTai->DanhSachMon->Clear();

		//cap nhat danh sach ban
		for each(ManagerTable ^ ban in danhSachBan) {
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
	};
private: System::Void btnTienMat_Click(System::Object^ sender, System::EventArgs^ e) {
	if (danhSachMon->Count == 0) {
		MessageBox::Show(L"Không có món nào trong danh sách!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	double tongTien = 0;
	for each(MonAn ^ mon in danhSachMon) {
		double gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
		//double gia = Convert::ToDouble(mon->Gia + "$");
		tongTien += gia * mon->SoLuong ;
	}
	//tao va luu hoa don
	PayMent^ payMent = gcnew PayMent(banHienTai->ID, banHienTai->SoBan, nameStaff, danhSachMon, tongTien, L"Tiền mặt");
	List<PayMent^>^ danhSachHoaDon = gcnew List<PayMent^>();
	danhSachHoaDon->Add(payMent);
	PayMent::GhiDanhSachHoaDon(danhSachHoaDon, billFilePath);

	//cap nhat trang thai ban
	banHienTai->TrangThai = L"Trống";
	banHienTai->DanhSachMon->Clear();

	//cap nhat danh sach ban
	for each(ManagerTable ^ ban in danhSachBan) {
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
private: System::Void datagridViewBill_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txtPrice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
	}