#pragma once
#include "MonAn.h"
#include "Transfer.h"
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

		ref class FormFood;
	public:
		FormBill(System::Collections::Generic::List<MonAn^>^ dsMon)
		{
			InitializeComponent();
			danhSachMon = dsMon;
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
		System::Collections::Generic::List<MonAn^>^ danhSachMon;


	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ LabelNhanVien;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelDate;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->LabelNhanVien = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(31, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(449, 155);
			this->panel1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(88, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(270, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hóa Đơn Bán Hàng";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(170, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ĐT: 0123456789";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(51, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Địa chỉ: Nguyễn Lương Bằng, Quận LIên CHiểu, Thành Phố Đà Nẵng";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DD RESTAURANT";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(190, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 50);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Bàn 01";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(19, 224);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->LabelNhanVien);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(19, 252);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 42);
			this->panel2->TabIndex = 3;
			// 
			// LabelNhanVien
			// 
			this->LabelNhanVien->BackColor = System::Drawing::SystemColors::Highlight;
			this->LabelNhanVien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelNhanVien->Location = System::Drawing::Point(80, 7);
			this->LabelNhanVien->Name = L"LabelNhanVien";
			this->LabelNhanVien->Size = System::Drawing::Size(158, 35);
			this->LabelNhanVien->TabIndex = 1;
			this->LabelNhanVien->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Nhân Viên: ";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->labelDate);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(285, 252);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(195, 42);
			this->panel3->TabIndex = 4;
			// 
			// labelDate
			// 
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate->Location = System::Drawing::Point(52, 12);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(136, 23);
			this->labelDate->TabIndex = 1;
			this->labelDate->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"In lúc: ";
			// 
			// pnPrice
			// 
			this->pnPrice->Controls->Add(this->txtPrice);
			this->pnPrice->Controls->Add(this->label14);
			this->pnPrice->Location = System::Drawing::Point(12, 536);
			this->pnPrice->Name = L"pnPrice";
			this->pnPrice->Size = System::Drawing::Size(461, 58);
			this->pnPrice->TabIndex = 6;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(295, 10);
			this->txtPrice->Margin = System::Windows::Forms::Padding(10);
			this->txtPrice->Multiline = true;
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(140, 38);
			this->txtPrice->TabIndex = 1;
			this->txtPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(5, 10);
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
			this->label15->Location = System::Drawing::Point(123, 659);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(213, 17);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Cảm ơn quý khách và hẹn gặp lại";
			// 
			// btnTienMat
			// 
			this->btnTienMat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTienMat->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTienMat->Location = System::Drawing::Point(48, 600);
			this->btnTienMat->Name = L"btnTienMat";
			this->btnTienMat->Size = System::Drawing::Size(127, 56);
			this->btnTienMat->TabIndex = 8;
			this->btnTienMat->Text = L"Tiền mặt";
			this->btnTienMat->UseVisualStyleBackColor = true;
			// 
			// btnChuyenKhoan
			// 
			this->btnChuyenKhoan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChuyenKhoan->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChuyenKhoan->Location = System::Drawing::Point(291, 600);
			this->btnChuyenKhoan->Name = L"btnChuyenKhoan";
			this->btnChuyenKhoan->Size = System::Drawing::Size(136, 56);
			this->btnChuyenKhoan->TabIndex = 9;
			this->btnChuyenKhoan->Text = L"Chuyển khoản";
			this->btnChuyenKhoan->UseVisualStyleBackColor = true;
			this->btnChuyenKhoan->Click += gcnew System::EventHandler(this, &FormBill::btnChuyenKhoan_Click);
			// 
			// datagridViewBill
			// 
			this->datagridViewBill->AllowUserToAddRows = false;
			this->datagridViewBill->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datagridViewBill->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->datagridViewBill->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagridViewBill->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->datagridViewBill->Location = System::Drawing::Point(12, 312);
			this->datagridViewBill->Name = L"datagridViewBill";
			this->datagridViewBill->RowHeadersVisible = false;
			this->datagridViewBill->RowHeadersWidth = 25;
			this->datagridViewBill->RowTemplate->Height = 24;
			this->datagridViewBill->ScrollBars = System::Windows::Forms::ScrollBars::None;
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
			// FormBill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 685);
			this->Controls->Add(this->datagridViewBill);
			this->Controls->Add(this->btnChuyenKhoan);
			this->Controls->Add(this->btnTienMat);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pnPrice);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Name = L"FormBill";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormBill";
			this->Load += gcnew System::EventHandler(this, &FormBill::FormBill_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
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
	private: System::Void btnChuyenKhoan_Click(System::Object^ sender, System::EventArgs^ e) {};
};
	}