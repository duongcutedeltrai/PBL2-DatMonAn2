#pragma once
#include "PayMent.h"
namespace PBL2DatMonAn {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class AddHistoryBillForm : public System::Windows::Forms::UserControl
    {
    public:
        AddHistoryBillForm(void)
        {
            InitializeComponent();
            billFilePath = "bill.txt";
        }

    protected:
        ~AddHistoryBillForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::String^ billFilePath;
        System::Drawing::Font^ commonFont;
        System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ lblNav1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ lblNav4;
        System::Windows::Forms::Label^ lblNav3;
        System::Windows::Forms::Label^ lblNav2;
        System::Windows::Forms::Label^ lblNav6;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lblNav6 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->lblNav4 = (gcnew System::Windows::Forms::Label());
            this->lblNav3 = (gcnew System::Windows::Forms::Label());
            this->lblNav2 = (gcnew System::Windows::Forms::Label());
            this->lblNav1 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->flowLayoutPanel1->Controls->Add(this->panel1);
            this->flowLayoutPanel1->Location = System::Drawing::Point(10, 4);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(1128, 554);
            this->flowLayoutPanel1->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->lblNav6);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->lblNav4);
            this->panel1->Controls->Add(this->lblNav3);
            this->panel1->Controls->Add(this->lblNav2);
            this->panel1->Controls->Add(this->lblNav1);
            this->panel1->Location = System::Drawing::Point(3, 0);
            this->panel1->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1123, 30);
            this->panel1->TabIndex = 0;
            // 
            // lblNav6
            // 
            this->lblNav6->AutoSize = true;
            this->lblNav6->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav6->Location = System::Drawing::Point(945, 8);
            this->lblNav6->Name = L"lblNav6";
            this->lblNav6->Size = System::Drawing::Size(117, 19);
            this->lblNav6->TabIndex = 5;
            this->lblNav6->Text = L"Giờ thanh toán";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(633, 8);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(188, 19);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Phương thức thanh toán";
            // 
            // lblNav4
            // 
            this->lblNav4->AutoSize = true;
            this->lblNav4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav4->Location = System::Drawing::Point(437, 8);
            this->lblNav4->Name = L"lblNav4";
            this->lblNav4->Size = System::Drawing::Size(76, 19);
            this->lblNav4->TabIndex = 3;
            this->lblNav4->Text = L"Tổng tiền";
            // 
            // lblNav3
            // 
            this->lblNav3->AutoSize = true;
            this->lblNav3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav3->Location = System::Drawing::Point(317, 8);
            this->lblNav3->Name = L"lblNav3";
            this->lblNav3->Size = System::Drawing::Size(38, 19);
            this->lblNav3->TabIndex = 2;
            this->lblNav3->Text = L"Bàn";
            // 
            // lblNav2
            // 
            this->lblNav2->AutoSize = true;
            this->lblNav2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav2->Location = System::Drawing::Point(126, 8);
            this->lblNav2->Name = L"lblNav2";
            this->lblNav2->Size = System::Drawing::Size(113, 19);
            this->lblNav2->TabIndex = 1;
            this->lblNav2->Text = L"Tên Nhân viên";
            // 
            // lblNav1
            // 
            this->lblNav1->AutoSize = true;
            this->lblNav1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav1->Location = System::Drawing::Point(18, 8);
            this->lblNav1->Name = L"lblNav1";
            this->lblNav1->Size = System::Drawing::Size(38, 19);
            this->lblNav1->TabIndex = 0;
            this->lblNav1->Text = L"STT";
            // 
            // AddHistoryBillForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->flowLayoutPanel1);
            this->Name = L"AddHistoryBillForm";
            this->Size = System::Drawing::Size(1154, 561);
            this->Load += gcnew System::EventHandler(this, &AddHistoryBillForm::AddHistoryBillForm_Load);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
        }
#pragma endregion

    private:
        System::Void AddHistoryBillForm_Load(System::Object^ sender, System::EventArgs^ e) {
        }
    private:
        void AddPanelDonHang(PayMent^ bill, int stt) {
            Button^ btnBill = gcnew Button();
            btnBill->Size = System::Drawing::Size(1123, 30);
            btnBill->BackColor = Color::White;
            btnBill->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
            btnBill->UseVisualStyleBackColor = true;
            btnBill->Tag = bill;
            btnBill->TabIndex = 0;
            btnBill->Cursor = Cursors::Hand;

            commonFont = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Regular);

            Label^ lblSTT = gcnew Label();
            lblSTT->AutoSize = true;
            lblSTT->Location = System::Drawing::Point(18, 8);
            lblSTT->Font = commonFont;
            lblSTT->Name = L"lblSTT";
            lblSTT->Size = System::Drawing::Size(38, 19);
            lblSTT->TabIndex = 0;
            lblSTT->Text = stt.ToString();

            Label^ lblAddNameStaff = gcnew Label();
            lblAddNameStaff->AutoSize = true;
            lblAddNameStaff->Font = commonFont;
            lblAddNameStaff->Location = System::Drawing::Point(126, 8);
            lblAddNameStaff->Text = bill->TenNhanVien;
            lblAddNameStaff->Name = L"lblAddNameStaff";
            lblAddNameStaff->Size = System::Drawing::Size(113, 19);
            lblAddNameStaff->TabIndex = 1;

            Label^ lblAddSoBan = gcnew Label();
            lblAddSoBan->AutoSize = true;
            lblAddSoBan->Font = commonFont;
            lblAddSoBan->Location = System::Drawing::Point(317, 8);
            lblAddSoBan->Text = bill->SoBan;
            lblAddSoBan->Name = L"lblAddSoBan";
            lblAddSoBan->Size = System::Drawing::Size(38, 19);
            lblAddSoBan->TabIndex = 2;

            Label^ lblAddTongTien = gcnew Label();
            lblAddTongTien->AutoSize = true;
            lblAddTongTien->Font = commonFont;
            lblAddTongTien->Location = System::Drawing::Point(437, 8);
            lblAddTongTien->Text = bill->TongTien.ToString("F2");
            lblAddTongTien->Name = L"lblAddTongTien";
            lblAddTongTien->Size = System::Drawing::Size(76, 19);
            lblAddTongTien->TabIndex = 3;

            Label^ lblAddPhuongThuc = gcnew Label();
            lblAddPhuongThuc->AutoSize = true;
            lblAddPhuongThuc->Font = commonFont;
            lblAddPhuongThuc->Location = System::Drawing::Point(633, 8);
            lblAddPhuongThuc->Text = bill->PhuongThucThanhToan;
            lblAddPhuongThuc->Name = L"lblAddPhuongThuc";
            lblAddPhuongThuc->Size = System::Drawing::Size(188, 19);
            lblAddPhuongThuc->TabIndex = 4;

            Label^ lblAddThoiGian = gcnew Label();
            lblAddThoiGian->AutoSize = true;
            lblAddThoiGian->Font = commonFont;
            lblAddThoiGian->Location = System::Drawing::Point(945, 8);
            lblAddThoiGian->Text = bill->ThoiGianThanhToan.ToString("yyyy-MM-dd HH:mm:ss");
            lblAddThoiGian->Name = L"lblAddThoiGian";
            lblAddThoiGian->Size = System::Drawing::Size(117, 19);
            lblAddThoiGian->TabIndex = 5;

            btnBill->Controls->Add(lblSTT);
            btnBill->Controls->Add(lblAddNameStaff);
            btnBill->Controls->Add(lblAddSoBan);
            btnBill->Controls->Add(lblAddTongTien);
            btnBill->Controls->Add(lblAddPhuongThuc);
            btnBill->Controls->Add(lblAddThoiGian);

            flowLayoutPanel1->Controls->Add(btnBill);
        }
    };
}