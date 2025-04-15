#pragma once
//#include "PayMent.h"
#include "DiscountManager.h"
namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddDiscountForm
	/// </summary>
	public ref class AddDiscountForm : public System::Windows::Forms::UserControl
	{
	private:
		//PayMent^ currentBill;
		double discountPercent;
	public:
		AddDiscountForm()
		{
			InitializeComponent();
			//currentBill = ;
			discountPercent = 0.0;
			//
			//TODO: Add the constructor code here
			//
		}

		//get formbill truy cap phan tram giam gia
		property double DiscountPercent
		{
			double get()
			{
				return discountPercent;
			}
		}

			//set formbill truyen payment
			/*void SetCurrentBill(PayMent^ bill)
		{
			currentBill = bill;
		}*/
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddDiscountForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(206, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(634, 281);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(143, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Mã giảm giá:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(232, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Áp dụng";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddDiscountForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(322, 103);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 49);
			this->textBox1->TabIndex = 0;
			// 
			// AddDiscountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"AddDiscountForm";
			this->Size = System::Drawing::Size(1102, 577);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
