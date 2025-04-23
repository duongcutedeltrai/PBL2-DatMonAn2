#pragma once
#include <windows.h>
#include "User.h"
#include "AddUserForm.h"

namespace PBL2DatMonAn {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Login : public System::Windows::Forms::Form {
    public:
        Login(void) {
            InitializeComponent();
            UserfilePath = "Account.txt";
            danhsachTaiKhoan = User::DocDanhSachTaiKhoan(UserfilePath);
        }

    protected:
        ~Login() {
            if (components) {
                delete components;
            }
        }

    private:
        System::String^ UserfilePath;
        List<User^>^ danhsachTaiKhoan;
        System::ComponentModel::Container^ components;

        // UI Components
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::Panel^ panel3;
        System::Windows::Forms::Panel^ panel4;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ txtID;
        System::Windows::Forms::TextBox^ txtPass;
        System::Windows::Forms::Button^ btnLogin;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void) {
            this->panel1 = gcnew System::Windows::Forms::Panel();
            this->panel2 = gcnew System::Windows::Forms::Panel();
            this->panel3 = gcnew System::Windows::Forms::Panel();
            this->panel4 = gcnew System::Windows::Forms::Panel();
            this->label1 = gcnew System::Windows::Forms::Label();
            this->label2 = gcnew System::Windows::Forms::Label();
            this->label3 = gcnew System::Windows::Forms::Label();
            this->txtID = gcnew System::Windows::Forms::TextBox();
            this->txtPass = gcnew System::Windows::Forms::TextBox();
            this->btnLogin = gcnew System::Windows::Forms::Button();

            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->SuspendLayout();

            // panel1
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Location = System::Drawing::Point(94, 48);
            this->panel1->Size = System::Drawing::Size(247, 36);
            this->panel1->TabIndex = 1;

            // panel2
            this->panel2->Controls->Add(this->txtID);
            this->panel2->Location = System::Drawing::Point(98, 2);
            this->panel2->Size = System::Drawing::Size(147, 31);
            this->panel2->TabIndex = 1;

            // txtID
            this->txtID->BackColor = System::Drawing::Color::Silver;
            this->txtID->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtID->Font = gcnew System::Drawing::Font(L"Segoe UI", 10);
            this->txtID->Location = System::Drawing::Point(16, 4);
            this->txtID->Multiline = true;
            this->txtID->Name = L"txtID";
            this->txtID->Size = System::Drawing::Size(109, 24);
            this->txtID->TabIndex = 0;
            this->txtID->TextChanged += gcnew System::EventHandler(this, &Login::txtID_TextChanged);
            this->txtID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::txtID_KeyDown);

            // label2
            this->label2->Font = gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold);
            this->label2->ForeColor = System::Drawing::Color::FromArgb(63, 41, 18);
            this->label2->Location = System::Drawing::Point(13, 6);
            this->label2->Size = System::Drawing::Size(80, 19);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Tài khoản:";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

            // label1
            this->label1->Font = gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(63, 41, 18);
            this->label1->Location = System::Drawing::Point(111, 9);
            this->label1->Size = System::Drawing::Size(230, 55);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Restaurant D^D";

            // panel3
            this->panel3->Controls->Add(this->panel4);
            this->panel3->Controls->Add(this->label3);
            this->panel3->Location = System::Drawing::Point(94, 89);
            this->panel3->Size = System::Drawing::Size(247, 36);
            this->panel3->TabIndex = 2;

            // panel4
            this->panel4->Controls->Add(this->txtPass);
            this->panel4->Location = System::Drawing::Point(98, 2);
            this->panel4->Size = System::Drawing::Size(147, 31);
            this->panel4->TabIndex = 1;

            // txtPass
            this->txtPass->BackColor = System::Drawing::Color::LightGray;
            this->txtPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtPass->Font = gcnew System::Drawing::Font(L"Segoe UI", 10);
            this->txtPass->Location = System::Drawing::Point(16, 4);
            this->txtPass->Multiline = true;
            this->txtPass->Name = L"txtPass";
            this->txtPass->PasswordChar = '*';
            this->txtPass->Size = System::Drawing::Size(109, 24);
            this->txtPass->TabIndex = 0;
            this->txtPass->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::txtPass_KeyDown);

            // label3
            this->label3->Font = gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold);
            this->label3->ForeColor = System::Drawing::Color::FromArgb(63, 41, 18);
            this->label3->Location = System::Drawing::Point(13, 6);
            this->label3->Size = System::Drawing::Size(80, 19);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Mật khẩu:";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

            // btnLogin
            this->btnLogin->BackColor = System::Drawing::Color::FromArgb(167, 141, 120);
            this->btnLogin->FlatAppearance->BorderSize = 0;
            this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLogin->Font = gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold);
            this->btnLogin->ForeColor = System::Drawing::Color::FromArgb(63, 41, 18);
            this->btnLogin->Location = System::Drawing::Point(166, 136);
            this->btnLogin->Size = System::Drawing::Size(98, 28);
            this->btnLogin->TabIndex = 3;
            this->btnLogin->Text = L"Đăng nhập";
            this->btnLogin->UseVisualStyleBackColor = false;
            this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);

            // Login Form
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->ClientSize = System::Drawing::Size(430, 192);
            this->Controls->Add(this->btnLogin);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->label1);
            this->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Name = L"Login";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Login";
            this->Load += gcnew System::EventHandler(this, &Login::Login_Load);

            this->panel1->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->ResumeLayout(false);
        }
#pragma endregion

    private:
        System::Void Login_Load(System::Object^ sender, System::EventArgs^ e);
        System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void txtID_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
        System::Void txtID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
        System::Void txtPass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
    };
}