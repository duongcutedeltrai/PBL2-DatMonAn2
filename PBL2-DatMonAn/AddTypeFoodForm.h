#pragma once  
#include "PhanLoaiMon.h" 
#include "FormFood.h"
#include "QuanLyMonAn.h"
namespace PBL2DatMonAn {  

using namespace System;  
using namespace System::ComponentModel;  
using namespace System::Collections;  
using namespace System::Windows::Forms;  
using namespace System::Data;  
using namespace System::Drawing;  

/// <summary>  
/// Summary for AddTypeFoodForm  
/// </summary>  
public ref class AddTypeFoodForm : public System::Windows::Forms::UserControl  
{  
private:
	FormFood^ formFoodCha;
public:  
	AddTypeFoodForm(FormFood^ parent)
	{  
		InitializeComponent();  
		formFoodCha = parent;
		//  
		//TODO: Add the constructor code here  
		//  
	}  

protected:  
	/// <summary>  
	/// Clean up any resources being used.  
	/// </summary>  
	~AddTypeFoodForm()  
	{  
		if (components)  
		{  
			delete components;  
		}  
	}  
private: System::Windows::Forms::Panel^ panel1;
protected:
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ lblTenSanPham;
private: System::Windows::Forms::Label^ lblNhapHang;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Button^ btnChonAnh;
private: System::Windows::Forms::PictureBox^ picBox;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ txtID;
private: System::Windows::Forms::Label^ lblID;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
private: System::String^ duongDanAnh;

protected:  


protected:  

private:  
	/// <summary>  
	/// Required designer variable.  
	/// </summary>  
	System::ComponentModel::Container ^components;  

#pragma region Windows Form Designer generated code  
	/// <summary>  
	/// Required method for Designer support - do not modify  
	/// the contents of this method with the code editor.  
	/// </summary>  
	void InitializeComponent(void)  
	{  
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->btnChonAnh = (gcnew System::Windows::Forms::Button());
		this->picBox = (gcnew System::Windows::Forms::PictureBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->panel5 = (gcnew System::Windows::Forms::Panel());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->lblTenSanPham = (gcnew System::Windows::Forms::Label());
		this->lblNhapHang = (gcnew System::Windows::Forms::Label());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->txtID = (gcnew System::Windows::Forms::TextBox());
		this->lblID = (gcnew System::Windows::Forms::Label());
		this->panel1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox))->BeginInit();
		this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
		this->panel5->SuspendLayout();
		this->panel3->SuspendLayout();
		this->panel2->SuspendLayout();

		this->SuspendLayout();
		// 
		// panel1
		// 
		this->panel1->Controls->Add(this->panel2);
		this->panel1->Controls->Add(this->comboBox1);
		this->panel1->Controls->Add(this->btnChonAnh);
		this->panel1->Controls->Add(this->picBox);
		this->panel1->Controls->Add(this->button1);
		this->panel1->Controls->Add(this->panel5);
		this->panel1->Controls->Add(this->panel3);
		this->panel1->Controls->Add(this->lblNhapHang);
		this->panel1->Location = System::Drawing::Point(302, 22);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(357, 505);
		this->panel1->TabIndex = 0;
		// 
		// comboBox1
		// 
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
			L"Món chính", L"Khai Vị", L"Salad", L"Tráng Miệng",
				L"Nước Uống"
		});
		this->comboBox1->Location = System::Drawing::Point(199, 247);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(121, 24);
		this->comboBox1->TabIndex = 7;
		// 
		// btnChonAnh
		// 
		this->btnChonAnh->Location = System::Drawing::Point(128, 437);
		this->btnChonAnh->Name = L"btnChonAnh";
		this->btnChonAnh->Size = System::Drawing::Size(75, 23);
		this->btnChonAnh->TabIndex = 6;
		this->btnChonAnh->Text = L"Chọn ảnh";
		this->btnChonAnh->UseVisualStyleBackColor = true;
		// 
		// picBox
		// 
		this->picBox->Location = System::Drawing::Point(43, 277);
		this->picBox->Name = L"picBox";
		this->picBox->Size = System::Drawing::Size(277, 134);
		this->picBox->TabIndex = 5;
		this->picBox->TabStop = false;
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(108, 466);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(126, 23);
		this->button1->TabIndex = 4;
		this->button1->Text = L"Thêm món";
		this->button1->UseVisualStyleBackColor = true;
		// 
		// panel5
		// 
		this->panel5->Controls->Add(this->textBox3);
		this->panel5->Controls->Add(this->label2);
		this->panel5->Location = System::Drawing::Point(22, 175);
		this->panel5->Name = L"panel5";
		this->panel5->Size = System::Drawing::Size(309, 66);
		this->panel5->TabIndex = 3;
		// 
		// textBox3
		// 
		this->textBox3->Location = System::Drawing::Point(7, 24);
		this->textBox3->Multiline = true;
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(277, 39);
		this->textBox3->TabIndex = 1;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(4, 5);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(56, 16);
		this->label2->TabIndex = 0;
		this->label2->Text = L"Đơn giá:";
		// 
		// panel3
		// 
		this->panel3->Controls->Add(this->textBox1);
		this->panel3->Controls->Add(this->lblTenSanPham);
		this->panel3->Location = System::Drawing::Point(22, 103);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(309, 66);
		this->panel3->TabIndex = 1;
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(7, 24);
		this->textBox1->Multiline = true;
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(277, 39);
		this->textBox1->TabIndex = 1;
		// 
		// lblTenSanPham
		// 
		this->lblTenSanPham->AutoSize = true;
		this->lblTenSanPham->Location = System::Drawing::Point(4, 5);
		this->lblTenSanPham->Name = L"lblTenSanPham";
		this->lblTenSanPham->Size = System::Drawing::Size(96, 16);
		this->lblTenSanPham->TabIndex = 0;
		this->lblTenSanPham->Text = L"Tên sản phẩm:";
		// 
		// lblNhapHang
		// 
		this->lblNhapHang->AutoSize = true;
		this->lblNhapHang->Location = System::Drawing::Point(161, 12);
		this->lblNhapHang->Name = L"lblNhapHang";
		this->lblNhapHang->Size = System::Drawing::Size(33, 16);
		this->lblNhapHang->TabIndex = 0;
		this->lblNhapHang->Text = L"Món";
		// 
		// panel2
		// 
		this->panel2->Controls->Add(this->txtID);
		this->panel2->Controls->Add(this->lblID);
		this->panel2->Location = System::Drawing::Point(22, 31);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(309, 66);
		this->panel2->TabIndex = 2;
		// 
		// 
		// // openFileDialog1
            // 
		this->openFileDialog1->Filter = L"Image Files|*.jpg;*.jpeg;*.png;*.bmp";
		this->openFileDialog1->Title = L"Chọn ảnh món ăn";


		// txtID
		// 
		this->txtID->Location = System::Drawing::Point(7, 24);
		this->txtID->Multiline = true;
		this->txtID->Name = L"txtID";
		this->txtID->Size = System::Drawing::Size(277, 39);
		this->txtID->TabIndex = 1;
		// 
		// lblID
		// 
		this->lblID->AutoSize = true;
		this->lblID->Location = System::Drawing::Point(4, 5);
		this->lblID->Name = L"lblID";
		this->lblID->Size = System::Drawing::Size(20, 16);
		this->lblID->TabIndex = 0;
		this->lblID->Text = L"ID";
		// 
		// AddTypeFoodForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->Controls->Add(this->panel1);
		this->Name = L"AddTypeFoodForm";
		this->Size = System::Drawing::Size(934, 558);
		this->Load += gcnew System::EventHandler(this, &AddTypeFoodForm::AddTypeFoodForm_Load);
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox))->EndInit();
		this->panel5->ResumeLayout(false);
		this->panel5->PerformLayout();
		this->panel3->ResumeLayout(false);
		this->panel3->PerformLayout();
		this->panel2->ResumeLayout(false);
		this->panel2->PerformLayout();
		this->ResumeLayout(false);

	}
#pragma endregion  
private: System::Void btnThemMon_Click(System::Object^ sender, System::EventArgs^ e) {  
	//String^ tenLoai = txtTenMon->Text;  
	//PhanLoaiMon^ plm = gcnew PhanLoaiMon(tenLoai);  
	//plm->GhiFile("phanloai.txt", plm);  
	//MessageBox::Show("Them thanh cong");

	//cli::array<PhanLoaiMon^>^ arr = PhanLoaiMon::DocFile("phanloai.txt");
}  
private: System::Void AddTypeFoodForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// Sinh ID tự động dựa trên ngày giờ hiện tại
	DateTime now = DateTime::Now;
	txtID->Text = "MON" + now.Hour.ToString("D2") + now.Minute.ToString("D2") + now.Second.ToString("D2");
}
};
}
