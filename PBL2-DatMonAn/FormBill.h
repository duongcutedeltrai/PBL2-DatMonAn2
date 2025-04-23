#pragma once
#include "MonAn.h"
#include "ManagerTable.h"
#include "PayMent.h"
#include "AddHistoryBillForm.h"
#include "AddDiscountForm.h"	
#include "DiscountManager.h"

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
			lblTenNhanVIen->Text = "Tên nhân viên: " + nameStaff;
			lblBanDat->Text = ban->SoBan;
			Monandachon();
			ApplyDiscount(); //giam gia
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
		double discountPercent;
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
	private: System::Windows::Forms::TextBox^ txtDiscount;
	private: System::Windows::Forms::Label^ lblDiscount;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ txtPrice;



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
			this->txtDiscount = (gcnew System::Windows::Forms::TextBox());
			this->lblDiscount = (gcnew System::Windows::Forms::Label());
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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
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
			this->panel1->Location = System::Drawing::Point(31, 14);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(449, 155);
			this->panel1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label4->Location = System::Drawing::Point(88, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(270, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hóa Đơn Bán Hàng";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label3->Location = System::Drawing::Point(161, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ĐT: 0123456789";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label2->Location = System::Drawing::Point(51, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 42);
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
			this->label1->Location = System::Drawing::Point(71, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 46);
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
			this->lblBanDat->Location = System::Drawing::Point(189, 171);
			this->lblBanDat->Name = L"lblBanDat";
			this->lblBanDat->Size = System::Drawing::Size(67, 38);
			this->lblBanDat->TabIndex = 1;
			this->lblBanDat->Text = L"Bàn";
			// 
			// pnPrice
			// 
			this->pnPrice->Controls->Add(this->txtPrice);
			this->pnPrice->Controls->Add(this->txtDiscount);
			this->pnPrice->Controls->Add(this->lblDiscount);
			this->pnPrice->Controls->Add(this->label14);
			this->pnPrice->Location = System::Drawing::Point(12, 542);
			this->pnPrice->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnPrice->Name = L"pnPrice";
			this->pnPrice->Size = System::Drawing::Size(461, 58);
			this->pnPrice->TabIndex = 6;
			// 
			// txtDiscount
			// 
			this->txtDiscount->Location = System::Drawing::Point(90, 11);
			this->txtDiscount->Multiline = true;
			this->txtDiscount->Name = L"txtDiscount";
			this->txtDiscount->Size = System::Drawing::Size(100, 32);
			this->txtDiscount->TabIndex = 3;
			// 
			// lblDiscount
			// 
			this->lblDiscount->AutoSize = true;
			this->lblDiscount->Location = System::Drawing::Point(19, 18);
			this->lblDiscount->Name = L"lblDiscount";
			this->lblDiscount->Size = System::Drawing::Size(64, 16);
			this->lblDiscount->TabIndex = 2;
			this->lblDiscount->Text = L"Giảm giá:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label14->Location = System::Drawing::Point(271, 5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(89, 38);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Tổng:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(123, 658);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(213, 17);
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
			this->btnTienMat->Location = System::Drawing::Point(85, 603);
			this->btnTienMat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTienMat->Name = L"btnTienMat";
			this->btnTienMat->Size = System::Drawing::Size(137, 44);
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
			this->btnChuyenKhoan->Location = System::Drawing::Point(255, 603);
			this->btnChuyenKhoan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChuyenKhoan->Name = L"btnChuyenKhoan";
			this->btnChuyenKhoan->Size = System::Drawing::Size(145, 44);
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
			this->datagridViewBill->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->datagridViewBill->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagridViewBill->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->datagridViewBill->Location = System::Drawing::Point(12, 313);
			this->datagridViewBill->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->datagridViewBill->Name = L"datagridViewBill";
			this->datagridViewBill->RowHeadersVisible = false;
			this->datagridViewBill->RowHeadersWidth = 25;
			this->datagridViewBill->RowTemplate->Height = 24;
			this->datagridViewBill->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->datagridViewBill->Size = System::Drawing::Size(468, 71);
			this->datagridViewBill->TabIndex = 10;
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
			this->lblTenNhanVIen->BackColor = System::Drawing::Color::Transparent;
			this->lblTenNhanVIen->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTenNhanVIen->ForeColor = System::Drawing::Color::Black;
			this->lblTenNhanVIen->Location = System::Drawing::Point(44, 230);
			this->lblTenNhanVIen->Name = L"lblTenNhanVIen";
			this->lblTenNhanVIen->Size = System::Drawing::Size(58, 26);
			this->lblTenNhanVIen->TabIndex = 11;
			this->lblTenNhanVIen->Text = L"label";
			// 
			// lblDateIn
			// 
			this->lblDateIn->AutoSize = true;
			this->lblDateIn->Location = System::Drawing::Point(45, 278);
			this->lblDateIn->Name = L"lblDateIn";
			this->lblDateIn->Size = System::Drawing::Size(57, 16);
			this->lblDateIn->TabIndex = 12;
			this->lblDateIn->Text = L"Giờ vào:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"  dd/MM/yyyy HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(110, 271);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 13;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(358, 11);
			this->txtPrice->Multiline = true;
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(100, 32);
			this->txtPrice->TabIndex = 4;
			// 
			// FormBill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(496, 686);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->lblDateIn);
			this->Controls->Add(this->lblTenNhanVIen);
			this->Controls->Add(this->datagridViewBill);
			this->Controls->Add(this->btnChuyenKhoan);
			this->Controls->Add(this->btnTienMat);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pnPrice);
			this->Controls->Add(this->lblBanDat);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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

	private: System::Void FormBill_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Monandachon();
	private: System::Void btnChuyenKhoan_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnTienMat_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ApplyDiscount();
private: System::Void txtPrice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}