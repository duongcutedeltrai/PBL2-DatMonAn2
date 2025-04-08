﻿#pragma once
#include "PayMent.h"
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
	public:
		AddDiscountForm(PayMent^ bill)
		{
			InitializeComponent();
			currenBill = bill;
			tyLeGiamGia = 0.0;
			//
			//TODO: Add the constructor code here
			//
		}

		//thuoc tinh lay ty le giam gia
		property double TyLeGiamGia
		{
			double get()
			{
				return tyLeGiamGia;
			}
			void set(double value)
			{
				tyLeGiamGia = value;
			}
		}

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
	private: PayMent^ currenBill;
		   double tyLeGiamGia;
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
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddDiscountForm::panel1_Paint);
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
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currenBill == nullptr) {
			MessageBox::Show("Không có hóa đơn nào được chọn", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		//giam gia trong txtbox
		String^ NumberGiamGia = textBox1->Text->Trim();
		if (String::IsNullOrEmpty(NumberGiamGia)) {
			MessageBox::Show("Vui lòng nhập mã giảm giá", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		//chuyen doi sang so
		double giamGia;
		try {
			giamGia = Convert::ToDouble(NumberGiamGia);
			if (giamGia < 0 || giamGia > 100) {
				MessageBox::Show("Mã giảm giá không hợp lệ", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
		}
		catch (FormatException^ ex) {
			MessageBox::Show("Mã giảm giá không hợp lệ", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		//tinh so tien giam
		tyLeGiamGia = giamGia;
		double soTienGiam = (giamGia) / 100.0;
		double soTienSauGiam = currenBill->TongTien * soTienGiam;
		double tongTienBanDau = currenBill->TongTien;
		currenBill->TongTien = soTienGiam;

		//hine thi thong bao
		System::Windows::Forms::MessageBox::Show(
			"Giảm giá thành công\n" +
			"Mã giảm giá: " + giamGia + "\n" +
			"Số tiền giảm: " + soTienSauGiam.ToString("NO") + "$" + "\n" +
			"Tổng tiền sau giảm: " + currenBill->TongTien.ToString("NO") + "$",
			"Thông báo",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
	};
	};
}
