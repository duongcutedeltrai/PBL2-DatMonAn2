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

    private: System::Windows::Forms::Label^ label1;

    private: System::Windows::Forms::Button^ btnDangXuat;
    private: System::Windows::Forms::Button^ btnDanhsach;
    private: System::Windows::Forms::Button^ btnChonBan;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ labelID;
    private: System::Windows::Forms::Label^ lbID;

    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ lbten;

    private: System::Windows::Forms::Label^ labelTen;





    private: System::Windows::Forms::Panel^ panelMangVe;

    private: System::Windows::Forms::Panel^ panelDanhsachban;


    private: System::Windows::Forms::Label^ labelDanhsachban;
    private: System::Windows::Forms::FlowLayoutPanel^ flpMangVe;

    private: System::Windows::Forms::Label^ labelMangve;
    private: System::Windows::Forms::FlowLayoutPanel^ flpBan;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Panel^ panel7;





    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panelStaff = (gcnew System::Windows::Forms::Panel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->lbten = (gcnew System::Windows::Forms::Label());
            this->labelTen = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->lbID = (gcnew System::Windows::Forms::Label());
            this->labelID = (gcnew System::Windows::Forms::Label());
            this->btnDangXuat = (gcnew System::Windows::Forms::Button());
            this->btnDanhsach = (gcnew System::Windows::Forms::Button());
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
            this->panelStaff->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panelMangVe->SuspendLayout();
            this->panelDanhsachban->SuspendLayout();
            this->SuspendLayout();
            // 
            // panelStaff
            // 
            this->panelStaff->BackColor = System::Drawing::Color::Gainsboro;
            this->panelStaff->Controls->Add(this->panel1);
            this->panelStaff->Controls->Add(this->btnDangXuat);
            this->panelStaff->Controls->Add(this->btnDanhsach);
            this->panelStaff->Controls->Add(this->btnChonBan);
            this->panelStaff->Controls->Add(this->label1);
            this->panelStaff->Dock = System::Windows::Forms::DockStyle::Top;
            this->panelStaff->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panelStaff->Location = System::Drawing::Point(0, 0);
            this->panelStaff->Name = L"panelStaff";
            this->panelStaff->Size = System::Drawing::Size(1137, 132);
            this->panelStaff->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::RosyBrown;
            this->panel1->Controls->Add(this->panel4);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Location = System::Drawing::Point(12, 38);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(320, 94);
            this->panel1->TabIndex = 4;
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->lbten);
            this->panel4->Controls->Add(this->labelTen);
            this->panel4->Location = System::Drawing::Point(3, 53);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(313, 29);
            this->panel4->TabIndex = 2;
            // 
            // lbten
            // 
            this->lbten->BackColor = System::Drawing::Color::Gray;
            this->lbten->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbten->Location = System::Drawing::Point(115, 4);
            this->lbten->Name = L"lbten";
            this->lbten->Size = System::Drawing::Size(171, 20);
            this->lbten->TabIndex = 1;
            // 
            // labelTen
            // 
            this->labelTen->AutoSize = true;
            this->labelTen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTen->Location = System::Drawing::Point(4, 4);
            this->labelTen->Name = L"labelTen";
            this->labelTen->Size = System::Drawing::Size(35, 20);
            this->labelTen->TabIndex = 0;
            this->labelTen->Text = L"Tên:";
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->lbID);
            this->panel2->Controls->Add(this->labelID);
            this->panel2->Location = System::Drawing::Point(3, 18);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(313, 29);
            this->panel2->TabIndex = 0;
            // 
            // lbID
            // 
            this->lbID->BackColor = System::Drawing::Color::Gray;
            this->lbID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbID->Location = System::Drawing::Point(144, 4);
            this->lbID->Name = L"lbID";
            this->lbID->Size = System::Drawing::Size(142, 20);
            this->lbID->TabIndex = 1;
            // 
            // labelID
            // 
            this->labelID->AutoSize = true;
            this->labelID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelID->Location = System::Drawing::Point(4, 4);
            this->labelID->Name = L"labelID";
            this->labelID->Size = System::Drawing::Size(27, 20);
            this->labelID->TabIndex = 0;
            this->labelID->Text = L"ID:";
            // 
            // btnDangXuat
            // 
            this->btnDangXuat->BackColor = System::Drawing::Color::Gainsboro;
            this->btnDangXuat->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDangXuat->FlatAppearance->BorderSize = 0;
            this->btnDangXuat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDangXuat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDangXuat->Location = System::Drawing::Point(963, 77);
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
            this->btnDanhsach->Location = System::Drawing::Point(555, 74);
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
            this->btnChonBan->Location = System::Drawing::Point(405, 74);
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
            this->label1->Size = System::Drawing::Size(282, 37);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Restaurant DD";
            // 
            // panelMangVe
            // 
            this->panelMangVe->BackColor = System::Drawing::Color::Gainsboro;
            this->panelMangVe->Controls->Add(this->panel8);
            this->panelMangVe->Controls->Add(this->flpMangVe);
            this->panelMangVe->Controls->Add(this->labelMangve);
            this->panelMangVe->Location = System::Drawing::Point(748, 138);
            this->panelMangVe->Name = L"panelMangVe";
            this->panelMangVe->Size = System::Drawing::Size(389, 489);
            this->panelMangVe->TabIndex = 1;
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::Black;
            this->panel8->Location = System::Drawing::Point(0, 53);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(385, 4);
            this->panel8->TabIndex = 0;
            // 
            // flpMangVe
            // 
            this->flpMangVe->AutoScroll = true;
            this->flpMangVe->Location = System::Drawing::Point(3, 83);
            this->flpMangVe->Margin = System::Windows::Forms::Padding(8);
            this->flpMangVe->Name = L"flpMangVe";
            this->flpMangVe->Size = System::Drawing::Size(378, 394);
            this->flpMangVe->TabIndex = 5;
            // 
            // labelMangve
            // 
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
            this->panelDanhsachban->BackColor = System::Drawing::Color::Gainsboro;
            this->panelDanhsachban->Controls->Add(this->panel7);
            this->panelDanhsachban->Controls->Add(this->flpBan);
            this->panelDanhsachban->Controls->Add(this->labelDanhsachban);
            this->panelDanhsachban->Location = System::Drawing::Point(12, 138);
            this->panelDanhsachban->Name = L"panelDanhsachban";
            this->panelDanhsachban->Size = System::Drawing::Size(730, 489);
            this->panelDanhsachban->TabIndex = 2;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::Black;
            this->panel7->Location = System::Drawing::Point(0, 53);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(730, 4);
            this->panel7->TabIndex = 5;
            // 
            // flpBan
            // 
            this->flpBan->AutoScroll = true;
            this->flpBan->Location = System::Drawing::Point(12, 83);
            this->flpBan->Margin = System::Windows::Forms::Padding(10);
            this->flpBan->Name = L"flpBan";
            this->flpBan->Size = System::Drawing::Size(715, 394);
            this->flpBan->TabIndex = 4;
            // 
            // labelDanhsachban
            // 
            this->labelDanhsachban->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelDanhsachban->Location = System::Drawing::Point(271, 16);
            this->labelDanhsachban->Name = L"labelDanhsachban";
            this->labelDanhsachban->Size = System::Drawing::Size(223, 36);
            this->labelDanhsachban->TabIndex = 3;
            this->labelDanhsachban->Text = L"Danh Sách Bàn";
            this->labelDanhsachban->Click += gcnew System::EventHandler(this, &formStaff::labelDanhsachban_Click);
            // 
            // formStaff
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1137, 639);
            this->Controls->Add(this->panelDanhsachban);
            this->Controls->Add(this->panelMangVe);
            this->Controls->Add(this->panelStaff);
            this->Name = L"formStaff";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"formStaff";
            this->Load += gcnew System::EventHandler(this, &formStaff::formStaff_Load);
            this->panelStaff->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panelMangVe->ResumeLayout(false);
            this->panelDanhsachban->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void formStaff_Load(System::Object^ sender, System::EventArgs^ e) {
        BanManager^ manager = gcnew BanManager();
        manager->TaoDayBan(10, flpBan);
        manager->TakeAway(4, flpMangVe);


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

    private: System::Void btnDangXuat_Click(System::Object^ sender, System::EventArgs^ e);

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
    private: System::Void panelDanhsachban_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		BoGocControl(panelDanhsachban, 10);
    }
private: System::Void panelMangVe_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	BoGocControl(panelMangVe, 10);
}
private: System::Void labelDanhsachban_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}