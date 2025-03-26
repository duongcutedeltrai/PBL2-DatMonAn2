#pragma once

namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DanhSachDonHang
	/// </summary>
	public ref class DanhSachDonHang : public System::Windows::Forms::UserControl
	{
	public:
		DanhSachDonHang(void)
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
		~DanhSachDonHang()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblTongTien;

	private: System::Windows::Forms::Label^ lblDateTime;
	private: System::Windows::Forms::Label^ lblBan;
	private: System::Windows::Forms::Label^ lblHinhThuc;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblHinhThuc = (gcnew System::Windows::Forms::Label());
			this->lblTongTien = (gcnew System::Windows::Forms::Label());
			this->lblDateTime = (gcnew System::Windows::Forms::Label());
			this->lblBan = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(788, 409);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->lblHinhThuc);
			this->panel1->Controls->Add(this->lblTongTien);
			this->panel1->Controls->Add(this->lblDateTime);
			this->panel1->Controls->Add(this->lblBan);
			this->panel1->Location = System::Drawing::Point(10, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(771, 100);
			this->panel1->TabIndex = 0;
			// 
			// lblHinhThuc
			// 
			this->lblHinhThuc->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHinhThuc->Location = System::Drawing::Point(331, 56);
			this->lblHinhThuc->Name = L"lblHinhThuc";
			this->lblHinhThuc->Size = System::Drawing::Size(271, 32);
			this->lblHinhThuc->TabIndex = 3;
			this->lblHinhThuc->Text = L"Hình Thức: ";
			// 
			// lblTongTien
			// 
			this->lblTongTien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTongTien->Location = System::Drawing::Point(331, 14);
			this->lblTongTien->Name = L"lblTongTien";
			this->lblTongTien->Size = System::Drawing::Size(271, 32);
			this->lblTongTien->TabIndex = 2;
			this->lblTongTien->Text = L"Tổng tiền:";
			// 
			// lblDateTime
			// 
			this->lblDateTime->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDateTime->Location = System::Drawing::Point(12, 56);
			this->lblDateTime->Name = L"lblDateTime";
			this->lblDateTime->Size = System::Drawing::Size(209, 32);
			this->lblDateTime->TabIndex = 1;
			this->lblDateTime->Text = L"In Lúc:";
			// 
			// lblBan
			// 
			this->lblBan->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBan->Location = System::Drawing::Point(12, 14);
			this->lblBan->Name = L"lblBan";
			this->lblBan->Size = System::Drawing::Size(154, 32);
			this->lblBan->TabIndex = 0;
			this->lblBan->Text = L"Bàn:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(10, 130);
			this->panel2->Margin = System::Windows::Forms::Padding(10);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(771, 100);
			this->panel2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(331, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hình Thức: ";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(331, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(271, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tổng tiền:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 32);
			this->label3->TabIndex = 1;
			this->label3->Text = L"In Lúc:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Bàn:";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Location = System::Drawing::Point(10, 250);
			this->panel3->Margin = System::Windows::Forms::Padding(10);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(771, 100);
			this->panel3->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(331, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(271, 32);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Hình Thức: ";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(331, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(271, 32);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Tổng tiền:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 56);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(209, 32);
			this->label7->TabIndex = 1;
			this->label7->Text = L"In Lúc:";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(154, 32);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Bàn:";
			// 
			// DanhSachDonHang
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"DanhSachDonHang";
			this->Size = System::Drawing::Size(794, 415);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
