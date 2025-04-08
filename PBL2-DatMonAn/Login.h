﻿#pragma once
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

	/// <summary>
	/// Summary for Login
	/// </summary>
	/// 

	public ref class Login : public System::Windows::Forms::Form
	{

	public:
		Login(void)
		{
			InitializeComponent();
			filePath = "Account.txt";
			danhsachTaiKhoan = User::DocDanhSachTaiKhoan(filePath);

			//
			//TODO: Add the constructor code here
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		//System::Collections::Generic::List<User^>^ Account;
	private: System::String^ filePath;
		   List<User^>^ danhsachTaiKhoan;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnLogin;

	protected:

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(94, 48);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(247, 36);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->txtID);
			this->panel2->ForeColor = System::Drawing::Color::Transparent;
			this->panel2->Location = System::Drawing::Point(98, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(147, 31);
			this->panel2->TabIndex = 1;
			// 
			// txtID
			// 
			this->txtID->BackColor = System::Drawing::Color::Silver;
			this->txtID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtID->Location = System::Drawing::Point(16, 4);
			this->txtID->Margin = System::Windows::Forms::Padding(2);
			this->txtID->Multiline = true;
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(109, 24);
			this->txtID->TabIndex = 0;
			this->txtID->TextChanged += gcnew System::EventHandler(this, &Login::txtID_TextChanged);
			this->txtID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::txtID_KeyDown);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label2->Location = System::Drawing::Point(13, 6);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Tài khoản:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label1->Location = System::Drawing::Point(111, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Restaurant D^D";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(94, 89);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(247, 36);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->txtPass);
			this->panel4->ForeColor = System::Drawing::Color::Transparent;
			this->panel4->Location = System::Drawing::Point(98, 2);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(147, 31);
			this->panel4->TabIndex = 1;
			// 
			// txtPass
			// 
			this->txtPass->BackColor = System::Drawing::Color::LightGray;
			this->txtPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtPass->Location = System::Drawing::Point(16, 4);
			this->txtPass->Margin = System::Windows::Forms::Padding(2);
			this->txtPass->Multiline = true;
			this->txtPass->Name = L"txtPass";
			this->txtPass->PasswordChar = '*';
			this->txtPass->Size = System::Drawing::Size(109, 24);
			this->txtPass->TabIndex = 0;
			this->txtPass->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::txtPass_KeyDown);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label3->Location = System::Drawing::Point(13, 6);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Mật khẩu:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnLogin->Location = System::Drawing::Point(166, 136);
			this->btnLogin->Margin = System::Windows::Forms::Padding(2);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(98, 28);
			this->btnLogin->TabIndex = 3;
			this->btnLogin->Text = L"Đăng nhập";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->ClientSize = System::Drawing::Size(430, 192);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Location = System::Drawing::Point(5, 4);
			this->Margin = System::Windows::Forms::Padding(2);
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

	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
		//dien thong tin dang nhap
		//User^ saveUser = User::DocFile("login.txt");
		//if (saveUser != nullptr) {
		//	txtID->Text = saveUser->ID;
		//	txtPass->Text = saveUser->Password;
		//}

		//tao danh sach tai khoan
		//Account = gcnew System::Collections::Generic::List<User^>();
	/*	User^ user = User::DocFile("login.txt");*/
		//Account = gcnew System::Collections::Generic::List<User^>();
	/*	if (user != nullptr) {
			Account->Add(user);
		}*/
		danhsachTaiKhoan = User::DocDanhSachTaiKhoan(filePath);
        danhsachTaiKhoan->Add(gcnew User("Pham anh duong", "2", "123", "03/11/2004", "Nam",  "Thu ngân", "Admin"));


		// Tạo border bo tròn cho txtID
		HRGN hrgn = CreateRoundRectRgn(
			0, 0, txtID->Width, txtID->Height, 
			20, 20                           
		);

		txtID->Region = System::Drawing::Region::FromHrgn((IntPtr)hrgn);

		// Tạo border bo tròn cho txtPass
		hrgn = CreateRoundRectRgn(
			0, 0, txtPass->Width, txtPass->Height,
			20, 20                          
		);

		txtPass->Region = System::Drawing::Region::FromHrgn((IntPtr)hrgn);

		// Tạo border bo tròn cho btnLogin
		hrgn = CreateRoundRectRgn(
			0, 0, btnLogin->Width, btnLogin->Height, 
			20, 20                     
		);

		btnLogin->Region = System::Drawing::Region::FromHrgn((IntPtr)hrgn);
	}


	private: System::Void txtID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true; 
		}
	}

	private: System::Void txtID_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void txtPass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true; 
		}
	}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e);
};

}

