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
			createTable->TaoDayBan(10, flpBan, danhSachBan);
			createTable->TakeAway(4, flpMangVe);
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
    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
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
            this->panelStaff->SuspendLayout();
            this->panelMangVe->SuspendLayout();
            this->panelDanhsachban->SuspendLayout();
            this->panelGeneral->SuspendLayout();
            this->SuspendLayout();
            // 
            // panelStaff
            // 
            this->panelStaff->BackColor = System::Drawing::Color::Gainsboro;
            this->panelStaff->Controls->Add(this->lblTenNhanVien);
            this->panelStaff->Controls->Add(this->btnDangXuat);
            this->panelStaff->Controls->Add(this->btnLichSuDonHang);
            this->panelStaff->Controls->Add(this->btnChonBan);
            this->panelStaff->Controls->Add(this->label1);
            this->panelStaff->Dock = System::Windows::Forms::DockStyle::Top;
            this->panelStaff->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panelStaff->Location = System::Drawing::Point(0, 0);
            this->panelStaff->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelStaff->Name = L"panelStaff";
            this->panelStaff->Size = System::Drawing::Size(1144, 132);
            this->panelStaff->TabIndex = 0;
            // 
            // lblTenNhanVien
            // 
            this->lblTenNhanVien->BackColor = System::Drawing::Color::Transparent;
            this->lblTenNhanVien->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblTenNhanVien->Location = System::Drawing::Point(19, 55);
            this->lblTenNhanVien->Name = L"lblTenNhanVien";
            this->lblTenNhanVien->Size = System::Drawing::Size(387, 36);
            this->lblTenNhanVien->TabIndex = 0;
            // 
            // btnDangXuat
            // 
            this->btnDangXuat->BackColor = System::Drawing::Color::Gainsboro;
            this->btnDangXuat->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDangXuat->FlatAppearance->BorderSize = 0;
            this->btnDangXuat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDangXuat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDangXuat->Location = System::Drawing::Point(963, 37);
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
            this->btnLichSuDonHang->BackColor = System::Drawing::Color::Gainsboro;
            this->btnLichSuDonHang->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnLichSuDonHang->FlatAppearance->BorderSize = 0;
            this->btnLichSuDonHang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLichSuDonHang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
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
            this->btnChonBan->BackColor = System::Drawing::Color::Gainsboro;
            this->btnChonBan->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnChonBan->FlatAppearance->BorderSize = 0;
            this->btnChonBan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnChonBan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
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
            this->label1->Location = System::Drawing::Point(12, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(283, 37);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Restaurant DD";
            // 
            // panelMangVe
            // 
            this->panelMangVe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panelMangVe->BackColor = System::Drawing::Color::Gainsboro;
            this->panelMangVe->Controls->Add(this->panel8);
            this->panelMangVe->Controls->Add(this->flpMangVe);
            this->panelMangVe->Controls->Add(this->labelMangve);
            this->panelMangVe->Location = System::Drawing::Point(760, 0);
            this->panelMangVe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelMangVe->Name = L"panelMangVe";
            this->panelMangVe->Size = System::Drawing::Size(389, 489);
            this->panelMangVe->TabIndex = 1;
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::Black;
            this->panel8->Location = System::Drawing::Point(0, 53);
            this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(385, 4);
            this->panel8->TabIndex = 0;
            // 
            // flpMangVe
            // 
            this->flpMangVe->AutoScroll = true;
            this->flpMangVe->Location = System::Drawing::Point(3, 82);
            this->flpMangVe->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
            this->flpMangVe->Name = L"flpMangVe";
            this->flpMangVe->Size = System::Drawing::Size(379, 394);
            this->flpMangVe->TabIndex = 5;
            // 
            // labelMangve
            // 
            this->labelMangve->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->labelMangve->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelMangve->Location = System::Drawing::Point(101, 16);
            this->labelMangve->Name = L"labelMangve";
            this->labelMangve->Size = System::Drawing::Size(179, 33);
            this->labelMangve->TabIndex = 4;
            this->labelMangve->Text = L"Mang Về";
            // 
            // panelDanhsachban
            // 
            this->panelDanhsachban->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panelDanhsachban->BackColor = System::Drawing::Color::Gainsboro;
            this->panelDanhsachban->Controls->Add(this->panel7);
            this->panelDanhsachban->Controls->Add(this->flpBan);
            this->panelDanhsachban->Controls->Add(this->labelDanhsachban);
            this->panelDanhsachban->Location = System::Drawing::Point(12, 1);
            this->panelDanhsachban->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelDanhsachban->Name = L"panelDanhsachban";
            this->panelDanhsachban->Size = System::Drawing::Size(732, 489);
            this->panelDanhsachban->TabIndex = 2;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::Black;
            this->panel7->Location = System::Drawing::Point(0, 53);
            this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(731, 4);
            this->panel7->TabIndex = 5;
            // 
            // flpBan
            // 
            this->flpBan->AutoScroll = true;
            this->flpBan->Location = System::Drawing::Point(12, 82);
            this->flpBan->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
            this->flpBan->Name = L"flpBan";
            this->flpBan->Size = System::Drawing::Size(715, 394);
            this->flpBan->TabIndex = 4;
            // 
            // labelDanhsachban
            // 
            this->labelDanhsachban->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelDanhsachban->Location = System::Drawing::Point(263, 11);
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
            this->panelGeneral->BackColor = System::Drawing::Color::Transparent;
            this->panelGeneral->Controls->Add(this->panelMangVe);
            this->panelGeneral->Controls->Add(this->panelDanhsachban);
            this->panelGeneral->Location = System::Drawing::Point(0, 138);
            this->panelGeneral->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panelGeneral->Name = L"panelGeneral";
            this->panelGeneral->Size = System::Drawing::Size(1144, 498);
            this->panelGeneral->TabIndex = 3;
            // 
            // formStaff
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1144, 639);
            this->Controls->Add(this->panelStaff);
            this->Controls->Add(this->panelGeneral);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"formStaff";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"formStaff";
            this->Load += gcnew System::EventHandler(this, &formStaff::formStaff_Load);
            this->panelStaff->ResumeLayout(false);
            this->panelMangVe->ResumeLayout(false);
            this->panelDanhsachban->ResumeLayout(false);
            this->panelGeneral->ResumeLayout(false);
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