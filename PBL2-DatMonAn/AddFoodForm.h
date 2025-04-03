#pragma once
#include "MonAn.h"
namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddFoodForm
	/// </summary>
	public ref class AddFoodForm : public System::Windows::Forms::UserControl
	{
	public:
		AddFoodForm(void)
		{
			InitializeComponent();
			filePath = "monan.txt";
			danhSachMonAn = MonAn::DocDanhSachMonAn(filePath);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddFoodForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		String^ filePath;
		List<MonAn^>^ danhSachMonAn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnTenMon;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnDanhSachMon;

	private: System::Windows::Forms::TextBox^ txtTenMon;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnThemMon;

	private: System::Windows::Forms::Panel^ pnDonGia;
	private: System::Windows::Forms::TextBox^ txtDonGia;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnChonAnh;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ cbLoaiMon;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblPhanLoaiMon;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblGiaDaThem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblMonDaThem;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnXoaMon;
	private: System::Windows::Forms::Label^ lblSTT;
	private: System::Drawing::Font^ commonFont;




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
			this->btnXoaMon = (gcnew System::Windows::Forms::Button());
			this->cbLoaiMon = (gcnew System::Windows::Forms::ComboBox());
			this->btnThemMon = (gcnew System::Windows::Forms::Button());
			this->pnDonGia = (gcnew System::Windows::Forms::Panel());
			this->txtDonGia = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnTenMon = (gcnew System::Windows::Forms::Panel());
			this->txtTenMon = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnChonAnh = (gcnew System::Windows::Forms::Button());
			this->pnDanhSachMon = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblSTT = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblPhanLoaiMon = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblGiaDaThem = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblMonDaThem = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->pnDonGia->SuspendLayout();
			this->pnTenMon->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnDanhSachMon->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnXoaMon);
			this->panel1->Controls->Add(this->cbLoaiMon);
			this->panel1->Controls->Add(this->btnThemMon);
			this->panel1->Controls->Add(this->pnDonGia);
			this->panel1->Controls->Add(this->pnTenMon);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(396, 662);
			this->panel1->TabIndex = 0;
			// 
			// btnXoaMon
			// 
			this->btnXoaMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXoaMon->Location = System::Drawing::Point(190, 608);
			this->btnXoaMon->Name = L"btnXoaMon";
			this->btnXoaMon->Size = System::Drawing::Size(147, 36);
			this->btnXoaMon->TabIndex = 5;
			this->btnXoaMon->Text = L"Xóa Món";
			this->btnXoaMon->UseVisualStyleBackColor = true;
			// 
			// cbLoaiMon
			// 
			this->cbLoaiMon->FormattingEnabled = true;
			this->cbLoaiMon->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Món Chính", L"Khai Vị", L"Salad", L"Tráng Miệng",
					L"Nước uống"
			});
			this->cbLoaiMon->Location = System::Drawing::Point(216, 284);
			this->cbLoaiMon->Name = L"cbLoaiMon";
			this->cbLoaiMon->Size = System::Drawing::Size(121, 24);
			this->cbLoaiMon->TabIndex = 4;
			// 
			// btnThemMon
			// 
			this->btnThemMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThemMon->Location = System::Drawing::Point(14, 608);
			this->btnThemMon->Name = L"btnThemMon";
			this->btnThemMon->Size = System::Drawing::Size(147, 36);
			this->btnThemMon->TabIndex = 3;
			this->btnThemMon->Text = L"Thêm món";
			this->btnThemMon->UseVisualStyleBackColor = true;
			this->btnThemMon->Click += gcnew System::EventHandler(this, &AddFoodForm::btnThemMon_Click);
			// 
			// pnDonGia
			// 
			this->pnDonGia->Controls->Add(this->txtDonGia);
			this->pnDonGia->Controls->Add(this->label3);
			this->pnDonGia->Location = System::Drawing::Point(14, 189);
			this->pnDonGia->Name = L"pnDonGia";
			this->pnDonGia->Size = System::Drawing::Size(364, 89);
			this->pnDonGia->TabIndex = 2;
			// 
			// txtDonGia
			// 
			this->txtDonGia->Location = System::Drawing::Point(38, 40);
			this->txtDonGia->Multiline = true;
			this->txtDonGia->Name = L"txtDonGia";
			this->txtDonGia->Size = System::Drawing::Size(285, 36);
			this->txtDonGia->TabIndex = 1;
			this->txtDonGia->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddFoodForm::txtDonGia_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Đơn giá";
			// 
			// pnTenMon
			// 
			this->pnTenMon->Controls->Add(this->txtTenMon);
			this->pnTenMon->Controls->Add(this->label2);
			this->pnTenMon->Location = System::Drawing::Point(14, 85);
			this->pnTenMon->Name = L"pnTenMon";
			this->pnTenMon->Size = System::Drawing::Size(364, 89);
			this->pnTenMon->TabIndex = 1;
			// 
			// txtTenMon
			// 
			this->txtTenMon->Location = System::Drawing::Point(38, 40);
			this->txtTenMon->Multiline = true;
			this->txtTenMon->Name = L"txtTenMon";
			this->txtTenMon->Size = System::Drawing::Size(285, 36);
			this->txtTenMon->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Tên món";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(131, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Thêm món";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->btnChonAnh);
			this->panel3->Location = System::Drawing::Point(14, 334);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(364, 252);
			this->panel3->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(29, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(294, 183);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// btnChonAnh
			// 
			this->btnChonAnh->AutoSize = true;
			this->btnChonAnh->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChonAnh->Location = System::Drawing::Point(113, 202);
			this->btnChonAnh->Name = L"btnChonAnh";
			this->btnChonAnh->Size = System::Drawing::Size(97, 33);
			this->btnChonAnh->TabIndex = 1;
			this->btnChonAnh->Text = L"Chọn Ảnh";
			this->btnChonAnh->UseVisualStyleBackColor = true;
			this->btnChonAnh->Click += gcnew System::EventHandler(this, &AddFoodForm::btnChonAnh_Click);
			// 
			// pnDanhSachMon
			// 
			this->pnDanhSachMon->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pnDanhSachMon->Controls->Add(this->flowLayoutPanel1);
			this->pnDanhSachMon->Location = System::Drawing::Point(405, 3);
			this->pnDanhSachMon->Name = L"pnDanhSachMon";
			this->pnDanhSachMon->Size = System::Drawing::Size(532, 663);
			this->pnDanhSachMon->TabIndex = 1;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(535, 659);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->lblSTT);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->lblPhanLoaiMon);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->lblGiaDaThem);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->lblMonDaThem);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(526, 72);
			this->panel2->TabIndex = 0;
			this->panel2->Visible = false;
			// 
			// lblSTT
			// 
			this->lblSTT->AutoSize = true;
			this->lblSTT->Location = System::Drawing::Point(3, 33);
			this->lblSTT->Name = L"lblSTT";
			this->lblSTT->Size = System::Drawing::Size(34, 16);
			this->lblSTT->TabIndex = 7;
			this->lblSTT->Text = L"STT";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"STT";
			// 
			// lblPhanLoaiMon
			// 
			this->lblPhanLoaiMon->AutoSize = true;
			this->lblPhanLoaiMon->Location = System::Drawing::Point(387, 33);
			this->lblPhanLoaiMon->Name = L"lblPhanLoaiMon";
			this->lblPhanLoaiMon->Size = System::Drawing::Size(67, 16);
			this->lblPhanLoaiMon->TabIndex = 5;
			this->lblPhanLoaiMon->Text = L"Mon chinh";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(387, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 16);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Phân loại";
			// 
			// lblGiaDaThem
			// 
			this->lblGiaDaThem->AutoSize = true;
			this->lblGiaDaThem->Location = System::Drawing::Point(279, 33);
			this->lblGiaDaThem->Name = L"lblGiaDaThem";
			this->lblGiaDaThem->Size = System::Drawing::Size(44, 16);
			this->lblGiaDaThem->TabIndex = 3;
			this->lblGiaDaThem->Text = L"label5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(279, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Giá:";
			// 
			// lblMonDaThem
			// 
			this->lblMonDaThem->AutoSize = true;
			this->lblMonDaThem->Location = System::Drawing::Point(151, 33);
			this->lblMonDaThem->Name = L"lblMonDaThem";
			this->lblMonDaThem->Size = System::Drawing::Size(44, 16);
			this->lblMonDaThem->TabIndex = 1;
			this->lblMonDaThem->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 4);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Tên món:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"L\"Image Files|*.jpg;*.jpeg;*.png;*.bmp|All Files|*.*\";";
			this->openFileDialog1->Title = L"L\"Chọn ảnh món ăn\"";
			// 
			// AddFoodForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->pnDanhSachMon);
			this->Controls->Add(this->panel1);
			this->Name = L"AddFoodForm";
			this->Size = System::Drawing::Size(940, 669);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnDonGia->ResumeLayout(false);
			this->pnDonGia->PerformLayout();
			this->pnTenMon->ResumeLayout(false);
			this->pnTenMon->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnDanhSachMon->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnChonAnh_Click(System::Object^ sender, System::EventArgs^ e) {

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Không thể tải ảnh: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void btnThemMon_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtTenMon->Text == "" || txtDonGia->Text == "") {
			MessageBox::Show("Vui lòng nhập đầy đủ thông tin món ăn", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Tạo đối tượng MonAn từ thông tin nhập vào
		String^ loaiMon = cbLoaiMon->Text;
		String^ tenMon = txtTenMon->Text;
		String^ gia = txtDonGia->Text;
		String^ anh = openFileDialog1->FileName;

		MonAn^ monAn = gcnew MonAn(loaiMon, tenMon, gia, anh);
		danhSachMonAn->Add(monAn); // Thêm món ăn vào danh sách

		// Ghi lại danh sách món ăn vào file
		MonAn::GhiDanhSachMonAn(danhSachMonAn, filePath);
			// Tạo panel cho món ăn với kích thước cố định và margin để tách các panel ra
			MessageBox::Show("Thêm món thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Panel^ panelOrder = gcnew Panel();
			panelOrder->Size = System::Drawing::Size(520, 70);
			panelOrder->Margin = System::Windows::Forms::Padding(10);
			panelOrder->BackColor = Color::White;

			// Định nghĩa font chung cho các label
			commonFont = gcnew System::Drawing::Font("Segoe UI", 10, System::Drawing::FontStyle::Regular);

			// Cột STT
			Label^ lblSTTTitle = gcnew Label();
			lblSTTTitle->Text = "STT";
			lblSTTTitle->Font = commonFont;
			lblSTTTitle->Size = System::Drawing::Size(50, 20);
			lblSTTTitle->Location = System::Drawing::Point(10, 10);

			Label^ lblSTTValue = gcnew Label();
			lblSTTValue->Text = (flowLayoutPanel1->Controls->Count + 1).ToString();
			lblSTTValue->Font = commonFont;
			lblSTTValue->Size = System::Drawing::Size(50, 20);
			lblSTTValue->Location = System::Drawing::Point(10, 40);

			// Cột Tên món
			Label^ lblTenMonTitle = gcnew Label();
			lblTenMonTitle->Text = "Tên món";
			lblTenMonTitle->Font = commonFont;
			lblTenMonTitle->Size = System::Drawing::Size(150, 20);
			lblTenMonTitle->Location = System::Drawing::Point(70, 10);

			Label^ lblTenMonValue = gcnew Label();
			lblTenMonValue->Text = txtTenMon->Text;
			lblTenMonValue->Font = commonFont;
			lblTenMonValue->Size = System::Drawing::Size(150, 20);
			lblTenMonValue->Location = System::Drawing::Point(70, 40);

			// Cột Đơn giá
			Label^ lblDonGiaTitle = gcnew Label();
			lblDonGiaTitle->Text = "Đơn giá";
			lblDonGiaTitle->Font = commonFont;
			lblDonGiaTitle->Size = System::Drawing::Size(100, 20);
			lblDonGiaTitle->Location = System::Drawing::Point(230, 10);

			Label^ lblDonGiaValue = gcnew Label();
			lblDonGiaValue->Text = txtDonGia->Text;
			lblDonGiaValue->Font = commonFont;
			lblDonGiaValue->Size = System::Drawing::Size(100, 20);
			lblDonGiaValue->Location = System::Drawing::Point(230, 40);

			// Cột Phân loại
			Label^ lblPhanLoaiTitle = gcnew Label();
			lblPhanLoaiTitle->Text = "Phân loại";
			lblPhanLoaiTitle->Font = commonFont;
			lblPhanLoaiTitle->Size = System::Drawing::Size(100, 20);
			lblPhanLoaiTitle->Location = System::Drawing::Point(340, 10);

			Label^ lblPhanLoaiValue = gcnew Label();
			lblPhanLoaiValue->Text = cbLoaiMon->Text;
			lblPhanLoaiValue->Font = commonFont;
			lblPhanLoaiValue->Size = System::Drawing::Size(100, 20);
			lblPhanLoaiValue->Location = System::Drawing::Point(340, 40);

			// Thêm các label vào panel
			panelOrder->Controls->Add(lblSTTTitle);
			panelOrder->Controls->Add(lblSTTValue);
			panelOrder->Controls->Add(lblTenMonTitle);
			panelOrder->Controls->Add(lblTenMonValue);
			panelOrder->Controls->Add(lblDonGiaTitle);
			panelOrder->Controls->Add(lblDonGiaValue);
			panelOrder->Controls->Add(lblPhanLoaiTitle);
			panelOrder->Controls->Add(lblPhanLoaiValue);

			// Thêm panel mới vào FlowLayoutPanel
			flowLayoutPanel1->Controls->Add(panelOrder);

			txtTenMon->Clear();
			txtDonGia->Clear();
			cbLoaiMon->SelectedIndex = -1;
			pictureBox1->Image = nullptr; // Xóa ảnh cũ
	}

private: System::Void txtDonGia_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Chỉ cho phép nhập số và dấu chấm
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && (e->KeyChar != '.')) {
		e->Handled = true;
	}
	// Chỉ cho phép một dấu chấm
	if ((e->KeyChar == '.') && (dynamic_cast<TextBox^>(sender)->Text->IndexOf('.') > -1)) {
		e->Handled = true;
	}
}
};
}
