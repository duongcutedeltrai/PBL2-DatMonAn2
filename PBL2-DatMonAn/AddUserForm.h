#pragma once
#include "User.h"
namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddUserForm
	/// </summary>
	public ref class AddUserForm : public System::Windows::Forms::UserControl
	{
	public:
		AddUserForm(void)
		{
			InitializeComponent();
			filePath = "Account.txt";
			danhsachTaiKhoan = User::DocDanhSachTaiKhoan(filePath);

			for each(User ^ account in danhsachTaiKhoan)
			{
				AddPanelUser(account, danhsachTaiKhoan->IndexOf(account) + 1);
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ filePath;
		   List<User^>^ danhsachTaiKhoan;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnAddAccount;
	private: System::Windows::Forms::TextBox^ txtAddAccount;
	private: System::Windows::Forms::Label^ lblAccount;
	private: System::Windows::Forms::Panel^ pnNameStaff;

	private: System::Windows::Forms::TextBox^ txtNameStaff;
	private: System::Windows::Forms::Label^ lblNameStaff;

	private: System::Windows::Forms::Panel^ pnPass;
	private: System::Windows::Forms::TextBox^ txtAddPass;
	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::Panel^ pnBirthday;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ pnSex;

	private: System::Windows::Forms::ComboBox^ cbSex;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnPosition;

	private: System::Windows::Forms::ComboBox^ cbPosition;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lblNav6;
	private: System::Windows::Forms::Label^ lblNavFive;
	private: System::Windows::Forms::Label^ lblNavFour;
	private: System::Windows::Forms::Label^ lblNavThree;
	private: System::Windows::Forms::Label^ lblNavTwo;
	private: System::Windows::Forms::Label^ lblNavOne;
	private: System::Windows::Forms::Label^ label5;
	private: System::Drawing::Font^ commonFont;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pnPosition = (gcnew System::Windows::Forms::Panel());
			this->cbPosition = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pnBirthday = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnSex = (gcnew System::Windows::Forms::Panel());
			this->cbSex = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnNameStaff = (gcnew System::Windows::Forms::Panel());
			this->txtNameStaff = (gcnew System::Windows::Forms::TextBox());
			this->lblNameStaff = (gcnew System::Windows::Forms::Label());
			this->pnPass = (gcnew System::Windows::Forms::Panel());
			this->txtAddPass = (gcnew System::Windows::Forms::TextBox());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->pnAddAccount = (gcnew System::Windows::Forms::Panel());
			this->txtAddAccount = (gcnew System::Windows::Forms::TextBox());
			this->lblAccount = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblNav6 = (gcnew System::Windows::Forms::Label());
			this->lblNavFive = (gcnew System::Windows::Forms::Label());
			this->lblNavFour = (gcnew System::Windows::Forms::Label());
			this->lblNavThree = (gcnew System::Windows::Forms::Label());
			this->lblNavTwo = (gcnew System::Windows::Forms::Label());
			this->lblNavOne = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->pnPosition->SuspendLayout();
			this->pnBirthday->SuspendLayout();
			this->pnSex->SuspendLayout();
			this->pnNameStaff->SuspendLayout();
			this->pnPass->SuspendLayout();
			this->pnAddAccount->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pnPosition);
			this->panel1->Controls->Add(this->pnBirthday);
			this->panel1->Controls->Add(this->pnSex);
			this->panel1->Controls->Add(this->pnNameStaff);
			this->panel1->Controls->Add(this->pnPass);
			this->panel1->Controls->Add(this->pnAddAccount);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(863, 334);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->button1->Location = System::Drawing::Point(360, 287);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 32);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Thêm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddUserForm::button1_Click);
			// 
			// pnPosition
			// 
			this->pnPosition->Controls->Add(this->cbPosition);
			this->pnPosition->Controls->Add(this->label4);
			this->pnPosition->Location = System::Drawing::Point(572, 246);
			this->pnPosition->Margin = System::Windows::Forms::Padding(2);
			this->pnPosition->Name = L"pnPosition";
			this->pnPosition->Size = System::Drawing::Size(178, 37);
			this->pnPosition->TabIndex = 6;
			// 
			// cbPosition
			// 
			this->cbPosition->FormattingEnabled = true;
			this->cbPosition->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Tiếp thực", L"Phục vụ", L"Đầu bếp", L"Thu ngân",
					L"Giữ xe", L"Tạp vụ"
			});
			this->cbPosition->Location = System::Drawing::Point(64, 8);
			this->cbPosition->Margin = System::Windows::Forms::Padding(2);
			this->cbPosition->Name = L"cbPosition";
			this->cbPosition->Size = System::Drawing::Size(74, 21);
			this->cbPosition->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label4->Location = System::Drawing::Point(2, 10);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Vị trí:";
			// 
			// pnBirthday
			// 
			this->pnBirthday->Controls->Add(this->dateTimePicker1);
			this->pnBirthday->Controls->Add(this->label3);
			this->pnBirthday->Location = System::Drawing::Point(314, 246);
			this->pnBirthday->Margin = System::Windows::Forms::Padding(2);
			this->pnBirthday->Name = L"pnBirthday";
			this->pnBirthday->Size = System::Drawing::Size(206, 37);
			this->pnBirthday->TabIndex = 5;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"   dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(83, 9);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(114, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label3->Location = System::Drawing::Point(2, 10);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ngày sinh:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pnSex
			// 
			this->pnSex->Controls->Add(this->cbSex);
			this->pnSex->Controls->Add(this->label2);
			this->pnSex->Location = System::Drawing::Point(135, 246);
			this->pnSex->Margin = System::Windows::Forms::Padding(2);
			this->pnSex->Name = L"pnSex";
			this->pnSex->Size = System::Drawing::Size(139, 37);
			this->pnSex->TabIndex = 4;
			// 
			// cbSex
			// 
			this->cbSex->FormattingEnabled = true;
			this->cbSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nam ", L"Nữ" });
			this->cbSex->Location = System::Drawing::Point(80, 8);
			this->cbSex->Margin = System::Windows::Forms::Padding(2);
			this->cbSex->Name = L"cbSex";
			this->cbSex->Size = System::Drawing::Size(54, 21);
			this->cbSex->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label2->Location = System::Drawing::Point(2, 10);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Giới tính:";
			// 
			// pnNameStaff
			// 
			this->pnNameStaff->Controls->Add(this->txtNameStaff);
			this->pnNameStaff->Controls->Add(this->lblNameStaff);
			this->pnNameStaff->Location = System::Drawing::Point(81, 177);
			this->pnNameStaff->Margin = System::Windows::Forms::Padding(2);
			this->pnNameStaff->Name = L"pnNameStaff";
			this->pnNameStaff->Size = System::Drawing::Size(718, 56);
			this->pnNameStaff->TabIndex = 3;
			// 
			// txtNameStaff
			// 
			this->txtNameStaff->Location = System::Drawing::Point(33, 24);
			this->txtNameStaff->Margin = System::Windows::Forms::Padding(2);
			this->txtNameStaff->Multiline = true;
			this->txtNameStaff->Name = L"txtNameStaff";
			this->txtNameStaff->Size = System::Drawing::Size(615, 24);
			this->txtNameStaff->TabIndex = 1;
			// 
			// lblNameStaff
			// 
			this->lblNameStaff->AutoSize = true;
			this->lblNameStaff->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameStaff->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblNameStaff->Location = System::Drawing::Point(10, 8);
			this->lblNameStaff->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNameStaff->Name = L"lblNameStaff";
			this->lblNameStaff->Size = System::Drawing::Size(114, 18);
			this->lblNameStaff->TabIndex = 0;
			this->lblNameStaff->Text = L"Tên nhân viên;";
			// 
			// pnPass
			// 
			this->pnPass->Controls->Add(this->txtAddPass);
			this->pnPass->Controls->Add(this->lblPass);
			this->pnPass->Location = System::Drawing::Point(81, 103);
			this->pnPass->Margin = System::Windows::Forms::Padding(2);
			this->pnPass->Name = L"pnPass";
			this->pnPass->Size = System::Drawing::Size(718, 70);
			this->pnPass->TabIndex = 2;
			// 
			// txtAddPass
			// 
			this->txtAddPass->Location = System::Drawing::Point(33, 24);
			this->txtAddPass->Margin = System::Windows::Forms::Padding(2);
			this->txtAddPass->Multiline = true;
			this->txtAddPass->Name = L"txtAddPass";
			this->txtAddPass->PasswordChar = '*';
			this->txtAddPass->Size = System::Drawing::Size(615, 23);
			this->txtAddPass->TabIndex = 1;
			// 
			// lblPass
			// 
			this->lblPass->AutoSize = true;
			this->lblPass->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblPass->Location = System::Drawing::Point(10, 8);
			this->lblPass->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(76, 18);
			this->lblPass->TabIndex = 0;
			this->lblPass->Text = L"Mật khẩu:";
			// 
			// pnAddAccount
			// 
			this->pnAddAccount->Controls->Add(this->txtAddAccount);
			this->pnAddAccount->Controls->Add(this->lblAccount);
			this->pnAddAccount->Location = System::Drawing::Point(81, 31);
			this->pnAddAccount->Margin = System::Windows::Forms::Padding(2);
			this->pnAddAccount->Name = L"pnAddAccount";
			this->pnAddAccount->Size = System::Drawing::Size(718, 59);
			this->pnAddAccount->TabIndex = 1;
			// 
			// txtAddAccount
			// 
			this->txtAddAccount->Location = System::Drawing::Point(33, 28);
			this->txtAddAccount->Margin = System::Windows::Forms::Padding(2);
			this->txtAddAccount->Multiline = true;
			this->txtAddAccount->Name = L"txtAddAccount";
			this->txtAddAccount->Size = System::Drawing::Size(615, 24);
			this->txtAddAccount->TabIndex = 1;
			// 
			// lblAccount
			// 
			this->lblAccount->AutoSize = true;
			this->lblAccount->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAccount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblAccount->Location = System::Drawing::Point(10, 8);
			this->lblAccount->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAccount->Name = L"lblAccount";
			this->lblAccount->Size = System::Drawing::Size(81, 18);
			this->lblAccount->TabIndex = 0;
			this->lblAccount->Text = L"Tài khoản:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->label1->Location = System::Drawing::Point(275, 0);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(310, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Thêm tài khoản nhân viên";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 340);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel1->Size = System::Drawing::Size(863, 174);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->lblNav6);
			this->panel2->Controls->Add(this->lblNavFive);
			this->panel2->Controls->Add(this->lblNavFour);
			this->panel2->Controls->Add(this->lblNavThree);
			this->panel2->Controls->Add(this->lblNavTwo);
			this->panel2->Controls->Add(this->lblNavOne);
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel2->Location = System::Drawing::Point(4, 4);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(844, 34);
			this->panel2->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(744, 7);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Vị trí";
			// 
			// lblNav6
			// 
			this->lblNav6->AutoSize = true;
			this->lblNav6->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNav6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblNav6->Location = System::Drawing::Point(618, 7);
			this->lblNav6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNav6->Name = L"lblNav6";
			this->lblNav6->Size = System::Drawing::Size(72, 18);
			this->lblNav6->TabIndex = 5;
			this->lblNav6->Text = L"Mật khẩu";
			// 
			// lblNavFive
			// 
			this->lblNavFive->AutoSize = true;
			this->lblNavFive->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNavFive->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblNavFive->Location = System::Drawing::Point(478, 7);
			this->lblNavFive->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNavFive->Name = L"lblNavFive";
			this->lblNavFive->Size = System::Drawing::Size(77, 18);
			this->lblNavFive->TabIndex = 4;
			this->lblNavFive->Text = L"Tài khoản";
			// 
			// lblNavFour
			// 
			this->lblNavFour->AutoSize = true;
			this->lblNavFour->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNavFour->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblNavFour->Location = System::Drawing::Point(353, 7);
			this->lblNavFour->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNavFour->Name = L"lblNavFour";
			this->lblNavFour->Size = System::Drawing::Size(77, 18);
			this->lblNavFour->TabIndex = 3;
			this->lblNavFour->Text = L"Ngày sinh";
			// 
			// lblNavThree
			// 
			this->lblNavThree->AutoSize = true;
			this->lblNavThree->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNavThree->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblNavThree->Location = System::Drawing::Point(233, 7);
			this->lblNavThree->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNavThree->Name = L"lblNavThree";
			this->lblNavThree->Size = System::Drawing::Size(70, 18);
			this->lblNavThree->TabIndex = 2;
			this->lblNavThree->Text = L"Giới tính";
			// 
			// lblNavTwo
			// 
			this->lblNavTwo->AutoSize = true;
			this->lblNavTwo->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNavTwo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblNavTwo->Location = System::Drawing::Point(85, 7);
			this->lblNavTwo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNavTwo->Name = L"lblNavTwo";
			this->lblNavTwo->Size = System::Drawing::Size(110, 18);
			this->lblNavTwo->TabIndex = 1;
			this->lblNavTwo->Text = L"Tên nhân viên";
			// 
			// lblNavOne
			// 
			this->lblNavOne->AutoSize = true;
			this->lblNavOne->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNavOne->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->lblNavOne->Location = System::Drawing::Point(2, 7);
			this->lblNavOne->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNavOne->Name = L"lblNavOne";
			this->lblNavOne->Size = System::Drawing::Size(38, 18);
			this->lblNavOne->TabIndex = 0;
			this->lblNavOne->Text = L"STT";
			// 
			// AddUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AddUserForm";
			this->Size = System::Drawing::Size(863, 526);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnPosition->ResumeLayout(false);
			this->pnPosition->PerformLayout();
			this->pnBirthday->ResumeLayout(false);
			this->pnBirthday->PerformLayout();
			this->pnSex->ResumeLayout(false);
			this->pnSex->PerformLayout();
			this->pnNameStaff->ResumeLayout(false);
			this->pnNameStaff->PerformLayout();
			this->pnPass->ResumeLayout(false);
			this->pnPass->PerformLayout();
			this->pnAddAccount->ResumeLayout(false);
			this->pnAddAccount->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddPanelUser(User^ user, int stt);
	private: System::Void picBox_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void UpdateStt();
};
}
