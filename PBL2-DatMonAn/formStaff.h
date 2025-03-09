#pragma once

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include "banManager.h"
#include <windows.h>

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
        formStaff(void)
        {
            InitializeComponent();
        }

    protected:
        ~formStaff()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Panel^ panelStaff;
    private: System::Windows::Forms::Panel^ panelMangVe;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::FlowLayoutPanel^ flpMangVe;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::FlowLayoutPanel^ flpBan;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Panel^ panelDanhsachban;
    private: System::Windows::Forms::Button^ btnDangXuat;
    private: System::Windows::Forms::Button^ btnDanhsach;
    private: System::Windows::Forms::Button^ btnChonBan;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panelStaff = (gcnew System::Windows::Forms::Panel());
            this->btnDangXuat = (gcnew System::Windows::Forms::Button());
            this->btnDanhsach = (gcnew System::Windows::Forms::Button());
            this->btnChonBan = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panelMangVe = (gcnew System::Windows::Forms::Panel());
            this->flpMangVe = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->flpBan = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->panelDanhsachban = (gcnew System::Windows::Forms::Panel());
            this->panelStaff->SuspendLayout();
            this->panelMangVe->SuspendLayout();
            this->flpMangVe->SuspendLayout();
            this->flpBan->SuspendLayout();
            this->panelDanhsachban->SuspendLayout();
            this->SuspendLayout();
            // 
            // panelStaff
            // 
            this->panelStaff->BackColor = System::Drawing::Color::Gainsboro;
            this->panelStaff->Controls->Add(this->btnDangXuat);
            this->panelStaff->Controls->Add(this->btnDanhsach);
            this->panelStaff->Controls->Add(this->btnChonBan);
            this->panelStaff->Controls->Add(this->label1);
            this->panelStaff->Dock = System::Windows::Forms::DockStyle::Top;
            this->panelStaff->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panelStaff->Location = System::Drawing::Point(0, 0);
            this->panelStaff->Name = L"panelStaff";
            this->panelStaff->Size = System::Drawing::Size(1119, 90);
            this->panelStaff->TabIndex = 0;
            // 
            // btnDangXuat
            // 
            this->btnDangXuat->BackColor = System::Drawing::Color::Gainsboro;
            this->btnDangXuat->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDangXuat->FlatAppearance->BorderSize = 0;
            this->btnDangXuat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDangXuat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDangXuat->Location = System::Drawing::Point(936, 32);
            this->btnDangXuat->Name = L"btnDangXuat";
            this->btnDangXuat->Size = System::Drawing::Size(153, 55);
            this->btnDangXuat->TabIndex = 3;
            this->btnDangXuat->Text = L"Đăng Xuất";
            this->btnDangXuat->UseVisualStyleBackColor = false;
            this->btnDangXuat->Click += gcnew System::EventHandler(this, &formStaff::btnDangXuat_Click);
            // 
            // btnDanhsach
            // 
            this->btnDanhsach->BackColor = System::Drawing::Color::Gainsboro;
            this->btnDanhsach->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDanhsach->FlatAppearance->BorderSize = 0;
            this->btnDanhsach->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDanhsach->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDanhsach->Location = System::Drawing::Point(564, 32);
            this->btnDanhsach->Name = L"btnDanhsach";
            this->btnDanhsach->Size = System::Drawing::Size(261, 58);
            this->btnDanhsach->TabIndex = 2;
            this->btnDanhsach->Text = L"Danh sách đơn hàng";
            this->btnDanhsach->UseVisualStyleBackColor = false;
            this->btnDanhsach->Click += gcnew System::EventHandler(this, &formStaff::btnDanhsach_Click);
            // 
            // btnChonBan
            // 
            this->btnChonBan->BackColor = System::Drawing::Color::Gainsboro;
            this->btnChonBan->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnChonBan->FlatAppearance->BorderSize = 0;
            this->btnChonBan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnChonBan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnChonBan->Location = System::Drawing::Point(405, 32);
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
            this->label1->Location = System::Drawing::Point(21, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(286, 62);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Restaurant DD";
            // 
            // panelMangVe
            // 
            this->panelMangVe->BackColor = System::Drawing::Color::Gainsboro;
            this->panelMangVe->Controls->Add(this->flpMangVe);
            this->panelMangVe->Controls->Add(this->panel7);
            this->panelMangVe->Controls->Add(this->label5);
            this->panelMangVe->Location = System::Drawing::Point(696, 96);
            this->panelMangVe->Name = L"panelMangVe";
            this->panelMangVe->Size = System::Drawing::Size(411, 531);
            this->panelMangVe->TabIndex = 2;
            // 
            // flpMangVe
            // 
            this->flpMangVe->Controls->Add(this->button1);
            this->flpMangVe->Location = System::Drawing::Point(4, 84);
            this->flpMangVe->Margin = System::Windows::Forms::Padding(10);
            this->flpMangVe->Name = L"flpMangVe";
            this->flpMangVe->Size = System::Drawing::Size(389, 429);
            this->flpMangVe->TabIndex = 5;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(20, 20);
            this->button1->Margin = System::Windows::Forms::Padding(20);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(114, 84);
            this->button1->TabIndex = 0;
            this->button1->Text = L"button1";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Visible = false;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::Black;
            this->panel7->Location = System::Drawing::Point(0, 73);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(411, 4);
            this->panel7->TabIndex = 4;
            // 
            // label5
            // 
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(114, 20);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(256, 50);
            this->label5->TabIndex = 3;
            this->label5->Text = L"Mang Về";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::Black;
            this->panel6->Location = System::Drawing::Point(0, 73);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(678, 4);
            this->panel6->TabIndex = 0;
            // 
            // label4
            // 
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(207, 20);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(256, 50);
            this->label4->TabIndex = 1;
            this->label4->Text = L"Danh Sách Bàn";
            // 
            // flpBan
            // 
            this->flpBan->AutoScroll = true;
            this->flpBan->Controls->Add(this->button2);
            this->flpBan->Location = System::Drawing::Point(17, 84);
            this->flpBan->Name = L"flpBan";
            this->flpBan->Padding = System::Windows::Forms::Padding(5);
            this->flpBan->Size = System::Drawing::Size(640, 429);
            this->flpBan->TabIndex = 2;
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(8, 8);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(112, 91);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Bàn 2";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Visible = false;
            // 
            // panelDanhsachban
            // 
            this->panelDanhsachban->BackColor = System::Drawing::Color::Gainsboro;
            this->panelDanhsachban->Controls->Add(this->flpBan);
            this->panelDanhsachban->Controls->Add(this->label4);
            this->panelDanhsachban->Controls->Add(this->panel6);
            this->panelDanhsachban->Location = System::Drawing::Point(12, 96);
            this->panelDanhsachban->Name = L"panelDanhsachban";
            this->panelDanhsachban->Size = System::Drawing::Size(678, 531);
            this->panelDanhsachban->TabIndex = 1;
            // 
            // formStaff
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1119, 639);
            this->Controls->Add(this->panelMangVe);
            this->Controls->Add(this->panelDanhsachban);
            this->Controls->Add(this->panelStaff);
            this->Name = L"formStaff";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"formStaff";
            this->Load += gcnew System::EventHandler(this, &formStaff::formStaff_Load);
            this->panelStaff->ResumeLayout(false);
            this->panelMangVe->ResumeLayout(false);
            this->flpMangVe->ResumeLayout(false);
            this->flpBan->ResumeLayout(false);
            this->panelDanhsachban->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void formStaff_Load(System::Object^ sender, System::EventArgs^ e) {
        BanManager::TaoDayBan(10, flpBan);
        BanManager::TakeAway(4, flpMangVe);
        ResetMauButtonMenu();
        btnChonBan->BackColor = Color::IndianRed;

        BoGocControl(btnChonBan, 10);
        BoGocControl(btnDanhsach, 10);
        BoGocControl(btnDangXuat, 10);
    }

    private: System::Void ResetMauButtonMenu() {
        Color mauMacDinh = Color::Gainsboro;
        btnChonBan->BackColor = mauMacDinh;
        btnDanhsach->BackColor = mauMacDinh;
        btnDangXuat->BackColor = mauMacDinh;
    }

    private: System::Void btnChonBan_Click(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        panelMangVe->Visible = true;
        panelDanhsachban->Visible = true;
        btnChonBan->BackColor = Color::IndianRed;
    }

    private: System::Void btnDanhsach_Click(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        panelMangVe->Visible = false;
        panelDanhsachban->Visible = false;
        btnDanhsach->BackColor = Color::IndianRed;
    }

    private: System::Void btnDangXuat_Click(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        btnDangXuat->BackColor = Color::IndianRed;
        this->Close();
    }

           void BoGocControl(Control^ control, int radius) {
               System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
               int w = control->Width;
               int h = control->Height;
               int d = radius * 2;

               path->AddArc(0, 0, d, d, 180, 90);
               path->AddArc(w - d, 0, d, d, 270, 90);
               path->AddArc(w - d, h - d, d, d, 0, 90);
               path->AddArc(0, h - d, d, d, 90, 90);
               path->CloseFigure();

               control->Region = gcnew System::Drawing::Region(path);
           }
    };
}