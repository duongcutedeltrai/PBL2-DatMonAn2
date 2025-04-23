#pragma once
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include "CreateTable.h"
#include "ManagerTable.h"
#include <windows.h>
#include "FormBill.h"
#include "MonAn.h"
#include "AddHistoryBillForm.h"
// Forward declaration


namespace PBL2DatMonAn {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for formStaff
    /// </summary>
    public ref class formStaff : public System::Windows::Forms::Form
    {
    public:
        formStaff(String^ nameStaff)
        {
            InitializeComponent();
            this->nameStaff = nameStaff;
            lblTenNhanVien->Text = "Tên nhân viên: " + nameStaff;
            banFilePath = "Table.txt";
            danhSachBan = ManagerTable::DocDanhSachBan(banFilePath);
            addHistoryBillForm = gcnew AddHistoryBillForm();
            addHistoryBillForm->Dock = DockStyle::Fill;
            panelGeneral->Controls->Add(addHistoryBillForm);
            panelGeneral->Controls->Add(panelDanhsachban);
            panelGeneral->Controls->Add(panelMangVe);

			////truyen addhistoryForm vao createtable
			CreateTable^ createTable = gcnew CreateTable(nameStaff, banFilePath);
			createTable->SetHistoryForm(addHistoryBillForm);
			createTable->TaoDayBan(40, flpBan, danhSachBan);
			createTable->TakeAway(10, flpMangVe);
        }

    protected:
        ~formStaff()
        {
            if (components)
            {
                delete components;
            }
        }
    private:
    private: AddHistoryBillForm^ addHistoryBillForm;
    private: System::String^ banFilePath;
    private:
		String^ nameStaff;
    private: System::Windows::Forms::Panel^ panelStaff;

    private: System::Windows::Forms::Label^ label1;

    private: System::Windows::Forms::Button^ btnDangXuat;
    private: System::Windows::Forms::Button^ btnLichSuDonHang;

    private: System::Windows::Forms::Button^ btnChonBan;

    private: System::Windows::Forms::Panel^ panelMangVe;

    private: System::Windows::Forms::Panel^ panelDanhsachban;
    private: System::Windows::Forms::Label^ labelDanhsachban;
    private: System::Windows::Forms::FlowLayoutPanel^ flpMangVe;

    private: System::Windows::Forms::Label^ labelMangve;
    private: System::Windows::Forms::FlowLayoutPanel^ flpBan;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Label^ lblTenNhanVien;
	private: List<ManagerTable^>^ danhSachBan;
	private: List<MonAn^>^ danhSachMonAn;
    private: System::Windows::Forms::Panel^ panelGeneral;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(formStaff::typeid));
            this->panelStaff = (gcnew System::Windows::Forms::Panel());
            this->lblTenNhanVien = (gcnew System::Windows::Forms::Label());
            this->btnDangXuat = (gcnew System::Windows::Forms::Button());
            this->btnLichSuDonHang = (gcnew System::Windows::Forms::Button());
            this->btnChonBan = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panelMangVe = (gcnew System::Windows::Forms::Panel());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->flpMangVe = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->labelMangve = (gcnew System::Windows::Forms::Label());
            this->panelDanhsachban = (gcnew System::Windows::Forms::Panel());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->flpBan = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->labelDanhsachban = (gcnew System::Windows::Forms::Label());
            this->panelGeneral = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->panelStaff->SuspendLayout();
            this->panelMangVe->SuspendLayout();
            this->panelDanhsachban->SuspendLayout();
            this->panelGeneral->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // panelStaff
            // 
            this->panelStaff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->panelStaff->Controls->Add(this->lblTenNhanVien);
            this->panelStaff->Controls->Add(this->btnDangXuat);
            this->panelStaff->Controls->Add(this->btnLichSuDonHang);
            this->panelStaff->Controls->Add(this->btnChonBan);
            this->panelStaff->Controls->Add(this->label1);
            this->panelStaff->Controls->Add(this->pictureBox1);
            this->panelStaff->Controls->Add(this->pictureBox2);
            this->panelStaff->Controls->Add(this->pictureBox3);
            this->panelStaff->Controls->Add(this->pictureBox4);
            this->panelStaff->Controls->Add(this->pictureBox5);
            this->panelStaff->Dock = System::Windows::Forms::DockStyle::Top;
            this->panelStaff->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panelStaff->Location = System::Drawing::Point(0, 0);
            this->panelStaff->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelStaff->Name = L"panelStaff";
            this->panelStaff->Size = System::Drawing::Size(1429, 132);
            this->panelStaff->TabIndex = 0;
            // 
            // lblTenNhanVien
            // 
            this->lblTenNhanVien->AutoSize = true;
            this->lblTenNhanVien->BackColor = System::Drawing::Color::Transparent;
            this->lblTenNhanVien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblTenNhanVien->Location = System::Drawing::Point(19, 55);
            this->lblTenNhanVien->Name = L"lblTenNhanVien";
            this->lblTenNhanVien->Size = System::Drawing::Size(138, 28);
            this->lblTenNhanVien->TabIndex = 0;
            this->lblTenNhanVien->Text = L"ten nhan vien";
            // 
            // btnDangXuat
            // 
            this->btnDangXuat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(185)));
            this->btnDangXuat->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDangXuat->FlatAppearance->BorderSize = 0;
            this->btnDangXuat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDangXuat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDangXuat->ForeColor = System::Drawing::Color::White;
            this->btnDangXuat->Location = System::Drawing::Point(1230, 37);
            this->btnDangXuat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnDangXuat->Name = L"btnDangXuat";
            this->btnDangXuat->Size = System::Drawing::Size(153, 55);
            this->btnDangXuat->TabIndex = 3;
            this->btnDangXuat->Text = L"Đăng Xuất";
            this->btnDangXuat->UseVisualStyleBackColor = false;
            this->btnDangXuat->Click += gcnew System::EventHandler(this, &formStaff::btnDangXuat_Click);
            // 
            // btnLichSuDonHang
            // 
            this->btnLichSuDonHang->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(185)));
            this->btnLichSuDonHang->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnLichSuDonHang->FlatAppearance->BorderSize = 0;
            this->btnLichSuDonHang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLichSuDonHang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLichSuDonHang->ForeColor = System::Drawing::Color::White;
            this->btnLichSuDonHang->Location = System::Drawing::Point(676, 37);
            this->btnLichSuDonHang->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnLichSuDonHang->Name = L"btnLichSuDonHang";
            this->btnLichSuDonHang->Size = System::Drawing::Size(261, 58);
            this->btnLichSuDonHang->TabIndex = 2;
            this->btnLichSuDonHang->Text = L"Lịch sử đơn hàng";
            this->btnLichSuDonHang->UseVisualStyleBackColor = false;
            this->btnLichSuDonHang->Click += gcnew System::EventHandler(this, &formStaff::btnLichSuDonHang_Click_1);
            // 
            // btnChonBan
            // 
            this->btnChonBan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(185)));
            this->btnChonBan->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnChonBan->FlatAppearance->BorderSize = 0;
            this->btnChonBan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnChonBan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnChonBan->ForeColor = System::Drawing::Color::White;
            this->btnChonBan->Location = System::Drawing::Point(493, 37);
            this->btnChonBan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnChonBan->Name = L"btnChonBan";
            this->btnChonBan->Size = System::Drawing::Size(153, 58);
            this->btnChonBan->TabIndex = 1;
            this->btnChonBan->Text = L"Chọn Bàn";
            this->btnChonBan->UseVisualStyleBackColor = false;
            this->btnChonBan->Click += gcnew System::EventHandler(this, &formStaff::btnChonBan_Click);
            // 
            // label1
            // 
            this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(12, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(283, 37);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Restaurant DD";
            // 
            // panelMangVe
            // 
            this->panelMangVe->BackColor = System::Drawing::Color::Transparent;
            this->panelMangVe->Controls->Add(this->panel8);
            this->panelMangVe->Controls->Add(this->flpMangVe);
            this->panelMangVe->Controls->Add(this->labelMangve);
            this->panelMangVe->Location = System::Drawing::Point(1015, 2);
            this->panelMangVe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelMangVe->Name = L"panelMangVe";
            this->panelMangVe->Size = System::Drawing::Size(411, 594);
            this->panelMangVe->TabIndex = 1;
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::Black;
            this->panel8->Location = System::Drawing::Point(0, 53);
            this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(400, 4);
            this->panel8->TabIndex = 0;
            // 
            // flpMangVe
            // 
            this->flpMangVe->AutoScroll = true;
            this->flpMangVe->Location = System::Drawing::Point(3, 82);
            this->flpMangVe->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
            this->flpMangVe->Name = L"flpMangVe";
            this->flpMangVe->Size = System::Drawing::Size(400, 505);
            this->flpMangVe->TabIndex = 5;
            // 
            // labelMangve
            // 
            this->labelMangve->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->labelMangve->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelMangve->Location = System::Drawing::Point(146, 14);
            this->labelMangve->Name = L"labelMangve";
            this->labelMangve->Size = System::Drawing::Size(179, 36);
            this->labelMangve->TabIndex = 4;
            this->labelMangve->Text = L"Mang Về";
            // 
            // panelDanhsachban
            // 
            this->panelDanhsachban->BackColor = System::Drawing::Color::Transparent;
            this->panelDanhsachban->Controls->Add(this->panel7);
            this->panelDanhsachban->Controls->Add(this->flpBan);
            this->panelDanhsachban->Controls->Add(this->labelDanhsachban);
            this->panelDanhsachban->Location = System::Drawing::Point(12, 1);
            this->panelDanhsachban->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelDanhsachban->Name = L"panelDanhsachban";
            this->panelDanhsachban->Size = System::Drawing::Size(995, 595);
            this->panelDanhsachban->TabIndex = 2;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::Black;
            this->panel7->Location = System::Drawing::Point(0, 53);
            this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(1000, 4);
            this->panel7->TabIndex = 5;
            // 
            // flpBan
            // 
            this->flpBan->AutoScroll = true;
            this->flpBan->Location = System::Drawing::Point(12, 82);
            this->flpBan->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
            this->flpBan->Name = L"flpBan";
            this->flpBan->Size = System::Drawing::Size(975, 506);
            this->flpBan->TabIndex = 4;
            // 
            // labelDanhsachban
            // 
            this->labelDanhsachban->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelDanhsachban->Location = System::Drawing::Point(411, 15);
            this->labelDanhsachban->Name = L"labelDanhsachban";
            this->labelDanhsachban->Size = System::Drawing::Size(223, 36);
            this->labelDanhsachban->TabIndex = 3;
            this->labelDanhsachban->Text = L"Danh Sách Bàn";
            // 
            // panelGeneral
            // 
            this->panelGeneral->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panelGeneral->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->panelGeneral->Controls->Add(this->panelMangVe);
            this->panelGeneral->Controls->Add(this->panelDanhsachban);
            this->panelGeneral->ForeColor = System::Drawing::SystemColors::ControlText;
            this->panelGeneral->Location = System::Drawing::Point(0, 138);
            this->panelGeneral->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelGeneral->Name = L"panelGeneral";
            this->panelGeneral->Size = System::Drawing::Size(1429, 604);
            this->panelGeneral->TabIndex = 3;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(761, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(176, 181);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(513, 0);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(176, 181);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 5;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(3, 3);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(176, 181);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 6;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(311, -15);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(176, 166);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 7;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(985, 0);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(176, 151);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 8;
            this->pictureBox5->TabStop = false;
            // 
            // formStaff
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1429, 745);
            this->Controls->Add(this->panelStaff);
            this->Controls->Add(this->panelGeneral);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"formStaff";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"formStaff";
            this->Load += gcnew System::EventHandler(this, &formStaff::formStaff_Load);
            this->panelStaff->ResumeLayout(false);
            this->panelStaff->PerformLayout();
            this->panelMangVe->ResumeLayout(false);
            this->panelDanhsachban->ResumeLayout(false);
            this->panelGeneral->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void formStaff_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btnChonBan_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btnDangXuat_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btnLichSuDonHang_Click_1(System::Object^ sender, System::EventArgs^ e);
    private: System::Void panelDanhsachban_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
    private: System::Void panelMangVe_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e); 
    private: System::Void BoGocControl(Control^ control, int radius);
    private: System::Void ResetMauButtonMenu();
};
}