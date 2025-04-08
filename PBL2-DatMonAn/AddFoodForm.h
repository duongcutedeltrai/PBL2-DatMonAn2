#pragma once
#include "MonAn.h"
namespace PBL2DatMonAn {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class AddFoodForm : public System::Windows::Forms::UserControl
    {
    public:
        AddFoodForm(void)
        {
            InitializeComponent();
            filePath = "monan.txt";
            danhSachMonAn = MonAn::DocDanhSachMonAn(filePath);
            selectedPanel = nullptr;
            for each (MonAn ^ monAn in danhSachMonAn)
            {
                ThemPanelMonAn(monAn, danhSachMonAn->IndexOf(monAn) + 1);
            }
        }

    protected:
        ~AddFoodForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        String^ filePath;
        List<MonAn^>^ danhSachMonAn;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ pnTenMon;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Panel^ pnDanhSachMon;
        System::Windows::Forms::TextBox^ txtTenMon;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Button^ btnThemMon;
        System::Windows::Forms::Panel^ pnDonGia;
        System::Windows::Forms::TextBox^ txtDonGia;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Panel^ panel3;
        System::Windows::Forms::Button^ btnChonAnh;
        System::Windows::Forms::OpenFileDialog^ openFileDialog1;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::ComboBox^ cbLoaiMon;
        System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::Label^ lblPhanLoaiMon;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::Label^ lblGiaDaThem;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ lblMonDaThem;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Button^ btnXoaMon;
        System::Windows::Forms::Label^ lblSTT;
        System::Drawing::Font^ commonFont;
        Panel^ selectedPanel;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->btnXoaMon = (gcnew System::Windows::Forms::Button());
            this->cbLoaiMon = (gcnew System::Windows::Forms::ComboBox());
            this->btnThemMon = (gcnew System::Windows::Forms::Button());
            this->pnDonGia = (gcnew System::Windows::Forms::Panel());
            this->txtDonGia = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->pnTenMon = (gcnew System::Windows::Forms::Panel());
            this->txtTenMon = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->btnChonAnh = (gcnew System::Windows::Forms::Button());
            this->pnDanhSachMon = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->lblSTT = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->lblPhanLoaiMon = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->lblGiaDaThem = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->lblMonDaThem = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->panel1->SuspendLayout();
            this->pnDonGia->SuspendLayout();
            this->pnTenMon->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->pnDanhSachMon->SuspendLayout();
            this->flowLayoutPanel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->btnXoaMon);
            this->panel1->Controls->Add(this->cbLoaiMon);
            this->panel1->Controls->Add(this->btnThemMon);
            this->panel1->Controls->Add(this->pnDonGia);
            this->panel1->Controls->Add(this->pnTenMon);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Location = System::Drawing::Point(2, 3);
            this->panel1->Margin = System::Windows::Forms::Padding(2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(297, 477);
            this->panel1->TabIndex = 0;
            // 
            // btnXoaMon
            // 
            this->btnXoaMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnXoaMon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnXoaMon->Location = System::Drawing::Point(158, 422);
            this->btnXoaMon->Margin = System::Windows::Forms::Padding(2);
            this->btnXoaMon->Name = L"btnXoaMon";
            this->btnXoaMon->Size = System::Drawing::Size(110, 29);
            this->btnXoaMon->TabIndex = 5;
            this->btnXoaMon->Text = L"Xóa Món";
            this->btnXoaMon->UseVisualStyleBackColor = true;
            this->btnXoaMon->Click += gcnew System::EventHandler(this, &AddFoodForm::btnXoaMon_Click);
            // 
            // cbLoaiMon
            // 
            this->cbLoaiMon->FormattingEnabled = true;
            this->cbLoaiMon->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Món Chính", L"Khai Vị", L"Salad", L"Tráng Miệng",
                    L"Nước uống"
            });
            this->cbLoaiMon->Location = System::Drawing::Point(191, 198);
            this->cbLoaiMon->Margin = System::Windows::Forms::Padding(2);
            this->cbLoaiMon->Name = L"cbLoaiMon";
            this->cbLoaiMon->Size = System::Drawing::Size(92, 21);
            this->cbLoaiMon->TabIndex = 4;
            // 
            // btnThemMon
            // 
            this->btnThemMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnThemMon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnThemMon->Location = System::Drawing::Point(32, 422);
            this->btnThemMon->Margin = System::Windows::Forms::Padding(2);
            this->btnThemMon->Name = L"btnThemMon";
            this->btnThemMon->Size = System::Drawing::Size(110, 29);
            this->btnThemMon->TabIndex = 3;
            this->btnThemMon->Text = L"Thêm món";
            this->btnThemMon->UseVisualStyleBackColor = true;
            this->btnThemMon->Click += gcnew System::EventHandler(this, &AddFoodForm::btnThemMon_Click);
            // 
            // pnDonGia
            // 
            this->pnDonGia->Controls->Add(this->txtDonGia);
            this->pnDonGia->Controls->Add(this->label3);
            this->pnDonGia->Location = System::Drawing::Point(10, 122);
            this->pnDonGia->Margin = System::Windows::Forms::Padding(2);
            this->pnDonGia->Name = L"pnDonGia";
            this->pnDonGia->Size = System::Drawing::Size(273, 72);
            this->pnDonGia->TabIndex = 2;
            // 
            // txtDonGia
            // 
            this->txtDonGia->Location = System::Drawing::Point(28, 32);
            this->txtDonGia->Margin = System::Windows::Forms::Padding(2);
            this->txtDonGia->Multiline = true;
            this->txtDonGia->Name = L"txtDonGia";
            this->txtDonGia->Size = System::Drawing::Size(215, 30);
            this->txtDonGia->TabIndex = 1;
            this->txtDonGia->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddFoodForm::txtDonGia_KeyPress);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label3->Location = System::Drawing::Point(30, 10);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(63, 20);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Đơn giá";
            // 
            // pnTenMon
            // 
            this->pnTenMon->Controls->Add(this->txtTenMon);
            this->pnTenMon->Controls->Add(this->label2);
            this->pnTenMon->Location = System::Drawing::Point(10, 38);
            this->pnTenMon->Margin = System::Windows::Forms::Padding(2);
            this->pnTenMon->Name = L"pnTenMon";
            this->pnTenMon->Size = System::Drawing::Size(273, 80);
            this->pnTenMon->TabIndex = 1;
            // 
            // txtTenMon
            // 
            this->txtTenMon->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTenMon->Location = System::Drawing::Point(28, 32);
            this->txtTenMon->Margin = System::Windows::Forms::Padding(2);
            this->txtTenMon->Multiline = true;
            this->txtTenMon->Name = L"txtTenMon";
            this->txtTenMon->Size = System::Drawing::Size(215, 30);
            this->txtTenMon->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label2->Location = System::Drawing::Point(25, 10);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(70, 20);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Tên món";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label1->Location = System::Drawing::Point(91, 15);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(92, 21);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Thêm món";
            this->label1->Click += gcnew System::EventHandler(this, &AddFoodForm::label1_Click);
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->pictureBox1);
            this->panel3->Controls->Add(this->btnChonAnh);
            this->panel3->Location = System::Drawing::Point(10, 223);
            this->panel3->Margin = System::Windows::Forms::Padding(2);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(273, 195);
            this->panel3->TabIndex = 3;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox1->Location = System::Drawing::Point(22, 11);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(220, 149);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            // 
            // btnChonAnh
            // 
            this->btnChonAnh->AutoSize = true;
            this->btnChonAnh->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnChonAnh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnChonAnh->Location = System::Drawing::Point(85, 164);
            this->btnChonAnh->Margin = System::Windows::Forms::Padding(2);
            this->btnChonAnh->Name = L"btnChonAnh";
            this->btnChonAnh->Size = System::Drawing::Size(73, 27);
            this->btnChonAnh->TabIndex = 1;
            this->btnChonAnh->Text = L"Chọn Ảnh";
            this->btnChonAnh->UseVisualStyleBackColor = true;
            this->btnChonAnh->Click += gcnew System::EventHandler(this, &AddFoodForm::btnChonAnh_Click);
            // 
            // pnDanhSachMon
            // 
            this->pnDanhSachMon->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pnDanhSachMon->Controls->Add(this->flowLayoutPanel1);
            this->pnDanhSachMon->Location = System::Drawing::Point(304, 2);
            this->pnDanhSachMon->Margin = System::Windows::Forms::Padding(2);
            this->pnDanhSachMon->Name = L"pnDanhSachMon";
            this->pnDanhSachMon->Size = System::Drawing::Size(550, 453);
            this->pnDanhSachMon->TabIndex = 1;
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
            this->flowLayoutPanel1->Controls->Add(this->panel2);
            this->flowLayoutPanel1->Location = System::Drawing::Point(-1, -2);
            this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(550, 480);
            this->flowLayoutPanel1->TabIndex = 0;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->lblSTT);
            this->panel2->Controls->Add(this->label7);
            this->panel2->Controls->Add(this->lblPhanLoaiMon);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Controls->Add(this->lblGiaDaThem);
            this->panel2->Controls->Add(this->label5);
            this->panel2->Controls->Add(this->lblMonDaThem);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Location = System::Drawing::Point(2, 2);
            this->panel2->Margin = System::Windows::Forms::Padding(2);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(394, 58);
            this->panel2->TabIndex = 0;
            this->panel2->Visible = false;
            // 
            // lblSTT
            // 
            this->lblSTT->AutoSize = true;
            this->lblSTT->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblSTT->Location = System::Drawing::Point(2, 27);
            this->lblSTT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblSTT->Name = L"lblSTT";
            this->lblSTT->Size = System::Drawing::Size(28, 13);
            this->lblSTT->TabIndex = 7;
            this->lblSTT->Text = L"STT";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label7->Location = System::Drawing::Point(2, 3);
            this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(31, 13);
            this->label7->TabIndex = 6;
            this->label7->Text = L"STT";
            // 
            // lblPhanLoaiMon
            // 
            this->lblPhanLoaiMon->AutoSize = true;
            this->lblPhanLoaiMon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblPhanLoaiMon->Location = System::Drawing::Point(290, 27);
            this->lblPhanLoaiMon->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblPhanLoaiMon->Name = L"lblPhanLoaiMon";
            this->lblPhanLoaiMon->Size = System::Drawing::Size(57, 13);
            this->lblPhanLoaiMon->TabIndex = 5;
            this->lblPhanLoaiMon->Text = L"Mon chinh";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label6->Location = System::Drawing::Point(290, 3);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(60, 13);
            this->label6->TabIndex = 4;
            this->label6->Text = L"Phân loại";
            // 
            // lblGiaDaThem
            // 
            this->lblGiaDaThem->AutoSize = true;
            this->lblGiaDaThem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblGiaDaThem->Location = System::Drawing::Point(209, 27);
            this->lblGiaDaThem->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblGiaDaThem->Name = L"lblGiaDaThem";
            this->lblGiaDaThem->Size = System::Drawing::Size(35, 13);
            this->lblGiaDaThem->TabIndex = 3;
            this->lblGiaDaThem->Text = L"label5";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label5->Location = System::Drawing::Point(209, 3);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(30, 13);
            this->label5->TabIndex = 2;
            this->label5->Text = L"Giá:";
            // 
            // lblMonDaThem
            // 
            this->lblMonDaThem->AutoSize = true;
            this->lblMonDaThem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblMonDaThem->Location = System::Drawing::Point(113, 27);
            this->lblMonDaThem->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblMonDaThem->Name = L"lblMonDaThem";
            this->lblMonDaThem->Size = System::Drawing::Size(35, 13);
            this->lblMonDaThem->TabIndex = 1;
            this->lblMonDaThem->Text = L"label5";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label4->Location = System::Drawing::Point(113, 3);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(60, 13);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Tên món:";
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            this->openFileDialog1->Filter = L"L\"Image Files|*.jpg;*.jpeg;*.png;*.bmp|All Files|*.*\";";
            this->openFileDialog1->Title = L"L\"Chọn ảnh món ăn\"";
            // 
            // AddFoodForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->pnDanhSachMon);
            this->Controls->Add(this->panel1);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"AddFoodForm";
            this->Size = System::Drawing::Size(704, 456);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->pnDonGia->ResumeLayout(false);
            this->pnDonGia->PerformLayout();
            this->pnTenMon->ResumeLayout(false);
            this->pnTenMon->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->pnDanhSachMon->ResumeLayout(false);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void btnChonAnh_Click(System::Object^ sender, System::EventArgs^ e) {
        if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            try {
                pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Không thể tải ảnh: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    }

    private: void ThemPanelMonAn(MonAn^ monAn, int stt) {
        if (monAn == nullptr) return;

        Panel^ panelOrder = gcnew Panel();
        panelOrder->Size = System::Drawing::Size(520, 70);
        panelOrder->Margin = System::Windows::Forms::Padding(10);
        panelOrder->BackColor = Color::White;
        panelOrder->Cursor = System::Windows::Forms::Cursors::Hand;
        panelOrder->Click += gcnew System::EventHandler(this, &AddFoodForm::panelOrder_Click);

        panelOrder->Tag = monAn;

        commonFont = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Regular);

        Label^ lblSTTTitle = gcnew Label();
        lblSTTTitle->Text = "STT";
        lblSTTTitle->Font = commonFont;
        lblSTTTitle->Size = System::Drawing::Size(50, 20);
        lblSTTTitle->Location = System::Drawing::Point(10, 10);

        Label^ lblSTTValue = gcnew Label();
        lblSTTValue->Text = stt.ToString();
        lblSTTValue->Font = commonFont;
        lblSTTValue->Size = System::Drawing::Size(50, 20);
        lblSTTValue->Location = System::Drawing::Point(10, 40);
        lblSTTValue->Name = L"lblSTTValue";

        Label^ lblTenMonTitle = gcnew Label();
        lblTenMonTitle->Text = L"Tên món";
        lblTenMonTitle->Font = commonFont;
        lblTenMonTitle->Size = System::Drawing::Size(150, 20);
        lblTenMonTitle->Location = System::Drawing::Point(70, 10);

        Label^ lblTenMonValue = gcnew Label();
        lblTenMonValue->Text = monAn->TenMon;
        lblTenMonValue->Font = commonFont;
        lblTenMonValue->Size = System::Drawing::Size(150, 20);
        lblTenMonValue->Location = System::Drawing::Point(70, 40);

        Label^ lblDonGiaTitle = gcnew Label();
        lblDonGiaTitle->Text = L"Đơn giá";
        lblDonGiaTitle->Font = commonFont;
        lblDonGiaTitle->Size = System::Drawing::Size(100, 20);
        lblDonGiaTitle->Location = System::Drawing::Point(230, 10);

        Label^ lblDonGiaValue = gcnew Label();
        lblDonGiaValue->Text = monAn->Gia + " $";
        lblDonGiaValue->Font = commonFont;
        lblDonGiaValue->Size = System::Drawing::Size(100, 20);
        lblDonGiaValue->Location = System::Drawing::Point(230, 40);

        Label^ lblPhanLoaiTitle = gcnew Label();
        lblPhanLoaiTitle->Text = L"Phân loại";
        lblPhanLoaiTitle->Font = commonFont;
        lblPhanLoaiTitle->Size = System::Drawing::Size(100, 20);
        lblPhanLoaiTitle->Location = System::Drawing::Point(340, 10);

        Label^ lblPhanLoaiValue = gcnew Label();
        lblPhanLoaiValue->Text = monAn->LoaiMon;
        lblPhanLoaiValue->Font = commonFont;
        lblPhanLoaiValue->Size = System::Drawing::Size(100, 20);
        lblPhanLoaiValue->Location = System::Drawing::Point(340, 40);

        panelOrder->Controls->Add(lblSTTTitle);
        panelOrder->Controls->Add(lblSTTValue);
        panelOrder->Controls->Add(lblTenMonTitle);
        panelOrder->Controls->Add(lblTenMonValue);
        panelOrder->Controls->Add(lblDonGiaTitle);
        panelOrder->Controls->Add(lblDonGiaValue);
        panelOrder->Controls->Add(lblPhanLoaiTitle);
        panelOrder->Controls->Add(lblPhanLoaiValue);

        flowLayoutPanel1->Controls->Add(panelOrder);
    }

    private: System::Void panelOrder_Click(System::Object^ sender, System::EventArgs^ e) {
        Panel^ clickedPanel = safe_cast<Panel^>(sender);

        if (selectedPanel != nullptr) {
            selectedPanel->BackColor = Color::White;
        }

        clickedPanel->BackColor = Color::LightGray;
        selectedPanel = clickedPanel;
    }


    private: System::Void btnThemMon_Click(System::Object^ sender, System::EventArgs^ e) {
        if (txtTenMon->Text == "" || txtDonGia->Text == "") {
            MessageBox::Show(L"Vui lòng nhập đầy đủ thông tin món ăn", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        String^ loaiMon = cbLoaiMon->Text;
        String^ tenMon = txtTenMon->Text;
        String^ gia = txtDonGia->Text;
        String^ anh = openFileDialog1->FileName;

        MonAn^ monAn = gcnew MonAn(loaiMon, tenMon, gia, anh);
        danhSachMonAn->Add(monAn);
        MonAn::GhiDanhSachMonAn(danhSachMonAn, filePath);
        MessageBox::Show(L"Thêm món thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);

        ThemPanelMonAn(monAn, danhSachMonAn->Count);

        txtTenMon->Clear();
        txtDonGia->Clear();
        cbLoaiMon->SelectedIndex = -1;
        pictureBox1->Image = nullptr;
    }

    private: System::Void txtDonGia_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && (e->KeyChar != '.')) {
            e->Handled = true;
        }
        if ((e->KeyChar == '.') && (dynamic_cast<TextBox^>(sender)->Text->IndexOf('.') > -1)) {
            e->Handled = true;
        }
    }

    private: System::Void btnXoaMon_Click(System::Object^ sender, System::EventArgs^ e) {
        if (selectedPanel == nullptr) {
            MessageBox::Show(L"Vui lòng chọn món ăn để xóa", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        MonAn^ monAn = safe_cast<MonAn^>(selectedPanel->Tag);
        if (MessageBox::Show(L"Bạn có chắc chắn muốn xóa món " + monAn->TenMon + " không?",
            "Xác nhận xóa", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
            danhSachMonAn->Remove(monAn);
            flowLayoutPanel1->Controls->Remove(selectedPanel);
            MonAn::GhiDanhSachMonAn(danhSachMonAn, filePath);
            UpdateStt();
            selectedPanel = nullptr;
            MessageBox::Show(L"Xóa món thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else {
            MessageBox::Show(L"Đã hủy xóa món", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }

    private: System::Void UpdateStt() {
        int stt = 1;
        for each (Control ^ control in flowLayoutPanel1->Controls) {
            if (control->GetType() == Panel::typeid && control != panel2) {
                Panel^ panel = safe_cast<Panel^>(control);
                Label^ lblSTTValue = safe_cast<Label^>(panel->Controls["lblSTTValue"]);
                if (lblSTTValue != nullptr) {
                    lblSTTValue->Text = stt.ToString();
                    stt++;
                }
            }
        }
    }

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}