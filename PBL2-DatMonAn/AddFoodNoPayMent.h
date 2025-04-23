#pragma once
#include "PayMent.h"
#include "MonAn.h"
#include "DiscountManager.h"
#include "FormFood.h"
#include "FormBill.h"
#include "formStaff.h"
namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddFoodNoPayMent
	/// </summary>
	public ref class AddFoodNoPayMent : public System::Windows::Forms::UserControl
	{
	public:
		AddFoodNoPayMent(void)
		{
			InitializeComponent();
			billFilePath = "Bill.txt";
			foodFilePath = "monan.txt";
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddFoodNoPayMent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ billFilePath;
	private: System::String^ foodFilePath;
	private: System::Windows::Forms::FlowLayoutPanel^ flpList;
	protected:

	private: System::Windows::Forms::Panel^ panelTitle;
	private: System::Windows::Forms::Label^ lblNav1;
	private: System::Windows::Forms::Label^ lblNav2;
	private: System::Windows::Forms::Label^ lblNav4;
	private: System::Windows::Forms::Label^ lblNav3;
	private: System::Windows::Forms::Label^ llbNav4;


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
			this->flpList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelTitle = (gcnew System::Windows::Forms::Panel());
			this->lblNav1 = (gcnew System::Windows::Forms::Label());
			this->lblNav2 = (gcnew System::Windows::Forms::Label());
			this->lblNav3 = (gcnew System::Windows::Forms::Label());
			this->lblNav4 = (gcnew System::Windows::Forms::Label());
			this->llbNav4 = (gcnew System::Windows::Forms::Label());
			this->flpList->SuspendLayout();
			this->panelTitle->SuspendLayout();
			this->SuspendLayout();
			// 
			// flpList
			// 
			this->flpList->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->flpList->Controls->Add(this->panelTitle);
			this->flpList->Location = System::Drawing::Point(62, 85);
			this->flpList->Name = L"flpList";
			this->flpList->Size = System::Drawing::Size(1135, 559);
			this->flpList->TabIndex = 0;
			// 
			// panelTitle
			// 
			this->panelTitle->Controls->Add(this->llbNav4);
			this->panelTitle->Controls->Add(this->lblNav4);
			this->panelTitle->Controls->Add(this->lblNav3);
			this->panelTitle->Controls->Add(this->lblNav2);
			this->panelTitle->Controls->Add(this->lblNav1);
			this->panelTitle->Location = System::Drawing::Point(3, 3);
			this->panelTitle->Name = L"panelTitle";
			this->panelTitle->Size = System::Drawing::Size(1132, 50);
			this->panelTitle->TabIndex = 0;
			// 
			// lblNav1
			// 
			this->lblNav1->AutoSize = true;
			this->lblNav1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNav1->Location = System::Drawing::Point(14, 15);
			this->lblNav1->Name = L"lblNav1";
			this->lblNav1->Size = System::Drawing::Size(40, 19);
			this->lblNav1->TabIndex = 0;
			this->lblNav1->Text = L"STT";
			// 
			// lblNav2
			// 
			this->lblNav2->AutoSize = true;
			this->lblNav2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNav2->Location = System::Drawing::Point(156, 15);
			this->lblNav2->Name = L"lblNav2";
			this->lblNav2->Size = System::Drawing::Size(40, 19);
			this->lblNav2->TabIndex = 1;
			this->lblNav2->Text = L"Bàn";
			// 
			// lblNav3
			// 
			this->lblNav3->AutoSize = true;
			this->lblNav3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNav3->Location = System::Drawing::Point(342, 15);
			this->lblNav3->Name = L"lblNav3";
			this->lblNav3->Size = System::Drawing::Size(89, 19);
			this->lblNav3->TabIndex = 2;
			this->lblNav3->Text = L"Nhân Viên";
			// 
			// lblNav4
			// 
			this->lblNav4->AutoSize = true;
			this->lblNav4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNav4->Location = System::Drawing::Point(608, 15);
			this->lblNav4->Name = L"lblNav4";
			this->lblNav4->Size = System::Drawing::Size(83, 19);
			this->lblNav4->TabIndex = 3;
			this->lblNav4->Text = L"Tổng tiền";
			// 
			// llbNav4
			// 
			this->llbNav4->AutoSize = true;
			this->llbNav4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llbNav4->Location = System::Drawing::Point(850, 15);
			this->llbNav4->Name = L"llbNav4";
			this->llbNav4->Size = System::Drawing::Size(70, 19);
			this->llbNav4->TabIndex = 4;
			this->llbNav4->Text = L"Giờ Đặt";
			// 
			// AddFoodNoPayMent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->flpList);
			this->Name = L"AddFoodNoPayMent";
			this->Size = System::Drawing::Size(1320, 774);
			this->flpList->ResumeLayout(false);
			this->panelTitle->ResumeLayout(false);
			this->panelTitle->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
