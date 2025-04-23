#pragma once
#include "MonAn.h"
namespace PBL2DatMonAn {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class AddFoodForm : public System::Windows::Forms::UserControl
    {
    public:
        AddFoodForm(void)
        {
            InitializeComponent();
            FoodfilePath = "monan.txt";
            danhSachMonAn = MonAn::DocDanhSachMonAn(FoodfilePath);
            isNewImageSelected = false;
            selectedPanel = nullptr;
            for each (MonAn ^ monAn in danhSachMonAn)
            {
                ThemPanelMonAn(monAn, danhSachMonAn->IndexOf(monAn) + 1);
            }
        }

    protected:
        ~AddFoodForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        bool isNewImageSelected;
        String^ FoodfilePath;
        List<MonAn^>^ danhSachMonAn;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ pnTenMon;
        System::Windows::Forms::Label^ label1;

        System::Windows::Forms::TextBox^ txtTenMon;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Button^ btnThemMon;
        System::Windows::Forms::Panel^ pnDonGia;
        System::Windows::Forms::TextBox^ txtDonGia;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Panel^ panel3;
        System::Windows::Forms::Button^ btnChonAnh;
        System::Windows::Forms::OpenFileDialog^ openFileDialog1;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::ComboBox^ cbLoaiMon;









    private: System::Windows::Forms::Button^ btnChangerMon;


        System::Drawing::Font^ commonFont;
        Panel^ selectedPanel;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ lblSTT;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ lblPhanLoaiMon;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ lblGiaDaThem;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ lblMonDaThem;
    private: System::Windows::Forms::Label^ label4;










        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->btnChangerMon = (gcnew System::Windows::Forms::Button());
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
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->lblMonDaThem = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->lblGiaDaThem = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->lblPhanLoaiMon = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->lblSTT = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->pnDonGia->SuspendLayout();
            this->pnTenMon->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->flowLayoutPanel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->panel1->Controls->Add(this->btnChangerMon);
            this->panel1->Controls->Add(this->cbLoaiMon);
            this->panel1->Controls->Add(this->btnThemMon);
            this->panel1->Controls->Add(this->pnDonGia);
            this->panel1->Controls->Add(this->pnTenMon);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Location = System::Drawing::Point(71, 14);
            this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(396, 628);
            this->panel1->TabIndex = 0;
            // 
            // btnChangerMon
            // 
            this->btnChangerMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnChangerMon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnChangerMon->Location = System::Drawing::Point(211, 519);
            this->btnChangerMon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnChangerMon->Name = L"btnChangerMon";
            this->btnChangerMon->Size = System::Drawing::Size(147, 36);
            this->btnChangerMon->TabIndex = 5;
            this->btnChangerMon->Text = L"Sửa món";
            this->btnChangerMon->UseVisualStyleBackColor = true;
            this->btnChangerMon->Click += gcnew System::EventHandler(this, &AddFoodForm::btnChangerMon_Click);
            // 
            // cbLoaiMon
            // 
            this->cbLoaiMon->FormattingEnabled = true;
            this->cbLoaiMon->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Món Chính", L"Khai Vị", L"Salad", L"Tráng Miệng",
                    L"Nước uống"
            });
            this->cbLoaiMon->Location = System::Drawing::Point(255, 244);
            this->cbLoaiMon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->cbLoaiMon->Name = L"cbLoaiMon";
            this->cbLoaiMon->Size = System::Drawing::Size(121, 24);
            this->cbLoaiMon->TabIndex = 4;
            // 
            // btnThemMon
            // 
            this->btnThemMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnThemMon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnThemMon->Location = System::Drawing::Point(43, 519);
            this->btnThemMon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
            this->pnDonGia->Location = System::Drawing::Point(13, 150);
            this->pnDonGia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pnDonGia->Name = L"pnDonGia";
            this->pnDonGia->Size = System::Drawing::Size(364, 89);
            this->pnDonGia->TabIndex = 2;
            // 
            // txtDonGia
            // 
            this->txtDonGia->Location = System::Drawing::Point(37, 39);
            this->txtDonGia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
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
            this->pnTenMon->Location = System::Drawing::Point(13, 47);
            this->pnTenMon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pnTenMon->Name = L"pnTenMon";
            this->pnTenMon->Size = System::Drawing::Size(364, 98);
            this->pnTenMon->TabIndex = 1;
            // 
            // txtTenMon
            // 
            this->txtTenMon->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTenMon->Location = System::Drawing::Point(37, 39);
            this->txtTenMon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
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
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label1->Location = System::Drawing::Point(121, 18);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(113, 28);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Thêm món";
            this->label1->Click += gcnew System::EventHandler(this, &AddFoodForm::label1_Click);
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->pictureBox1);
            this->panel3->Controls->Add(this->btnChonAnh);
            this->panel3->Location = System::Drawing::Point(13, 274);
            this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(364, 240);
            this->panel3->TabIndex = 3;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox1->Location = System::Drawing::Point(29, 14);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(293, 183);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            // 
            // btnChonAnh
            // 
            this->btnChonAnh->AutoSize = true;
            this->btnChonAnh->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnChonAnh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnChonAnh->Location = System::Drawing::Point(113, 202);
            this->btnChonAnh->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnChonAnh->Name = L"btnChonAnh";
            this->btnChonAnh->Size = System::Drawing::Size(105, 33);
            this->btnChonAnh->TabIndex = 1;
            this->btnChonAnh->Text = L"Chọn Ảnh";
            this->btnChonAnh->UseVisualStyleBackColor = true;
            this->btnChonAnh->Click += gcnew System::EventHandler(this, &AddFoodForm::btnChonAnh_Click);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            this->openFileDialog1->Filter = L"L\"Image Files|*.jpg;*.jpeg;*.png;*.bmp|All Files|*.*\";";
            this->openFileDialog1->Title = L"L\"Chọn ảnh món ăn\"";
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
            this->flowLayoutPanel1->Controls->Add(this->panel2);
            this->flowLayoutPanel1->Location = System::Drawing::Point(473, 14);
            this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(733, 628);
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
            this->panel2->Location = System::Drawing::Point(3, 2);
            this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(525, 71);
            this->panel2->TabIndex = 0;
            this->panel2->Visible = false;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label4->Location = System::Drawing::Point(151, 4);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(76, 17);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Tên món:";
            // 
            // lblMonDaThem
            // 
            this->lblMonDaThem->AutoSize = true;
            this->lblMonDaThem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblMonDaThem->Location = System::Drawing::Point(151, 33);
            this->lblMonDaThem->Name = L"lblMonDaThem";
            this->lblMonDaThem->Size = System::Drawing::Size(44, 16);
            this->lblMonDaThem->TabIndex = 1;
            this->lblMonDaThem->Text = L"label5";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label5->Location = System::Drawing::Point(279, 4);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(38, 17);
            this->label5->TabIndex = 2;
            this->label5->Text = L"Giá:";
            // 
            // lblGiaDaThem
            // 
            this->lblGiaDaThem->AutoSize = true;
            this->lblGiaDaThem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblGiaDaThem->Location = System::Drawing::Point(279, 33);
            this->lblGiaDaThem->Name = L"lblGiaDaThem";
            this->lblGiaDaThem->Size = System::Drawing::Size(44, 16);
            this->lblGiaDaThem->TabIndex = 3;
            this->lblGiaDaThem->Text = L"label5";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label6->Location = System::Drawing::Point(387, 4);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(76, 17);
            this->label6->TabIndex = 4;
            this->label6->Text = L"Phân loại";
            // 
            // lblPhanLoaiMon
            // 
            this->lblPhanLoaiMon->AutoSize = true;
            this->lblPhanLoaiMon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblPhanLoaiMon->Location = System::Drawing::Point(387, 33);
            this->lblPhanLoaiMon->Name = L"lblPhanLoaiMon";
            this->lblPhanLoaiMon->Size = System::Drawing::Size(67, 16);
            this->lblPhanLoaiMon->TabIndex = 5;
            this->lblPhanLoaiMon->Text = L"Mon chinh";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label7->Location = System::Drawing::Point(3, 4);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(38, 17);
            this->label7->TabIndex = 6;
            this->label7->Text = L"STT";
            // 
            // lblSTT
            // 
            this->lblSTT->AutoSize = true;
            this->lblSTT->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblSTT->Location = System::Drawing::Point(3, 33);
            this->lblSTT->Name = L"lblSTT";
            this->lblSTT->Size = System::Drawing::Size(34, 16);
            this->lblSTT->TabIndex = 7;
            this->lblSTT->Text = L"STT";
            // 
            // AddFoodForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->flowLayoutPanel1);
            this->Controls->Add(this->panel1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"AddFoodForm";
            this->Size = System::Drawing::Size(1221, 661);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->pnDonGia->ResumeLayout(false);
            this->pnDonGia->PerformLayout();
            this->pnTenMon->ResumeLayout(false);
            this->pnTenMon->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
                isNewImageSelected = true;
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Không thể tải ảnh: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    }

  private: void ThemPanelMonAn(MonAn^ monAn, int stt) {
      if (monAn == nullptr) return;

      Panel^ panelOrder = gcnew Panel();
      panelOrder->Size = System::Drawing::Size(520, 70);
      panelOrder->Margin = System::Windows::Forms::Padding(10);
      panelOrder->BackColor = Color::White;
      panelOrder->Cursor = System::Windows::Forms::Cursors::Hand;
      panelOrder->Click += gcnew System::EventHandler(this, &AddFoodForm::panelOrder_Click);

      panelOrder->Tag = monAn;

      commonFont = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Regular);

      Label^ lblSTTTitle = gcnew Label();
      lblSTTTitle->Text = "STT";
      lblSTTTitle->Font = commonFont;
      lblSTTTitle->Size = System::Drawing::Size(50, 20);
      lblSTTTitle->Location = System::Drawing::Point(10, 10);

      Label^ lblSTTValue = gcnew Label();
      lblSTTValue->Text = stt.ToString();
      lblSTTValue->Font = commonFont;
      lblSTTValue->Size = System::Drawing::Size(50, 20);
      lblSTTValue->Location = System::Drawing::Point(10, 40);
      lblSTTValue->Name = L"lblSTTValue";

      Label^ lblTenMonTitle = gcnew Label();
      lblTenMonTitle->Text = L"Tên món";
      lblTenMonTitle->Font = commonFont;
      lblTenMonTitle->Size = System::Drawing::Size(150, 20);
      lblTenMonTitle->Location = System::Drawing::Point(70, 10);

      Label^ lblTenMonValue = gcnew Label();
      lblTenMonValue->Text = monAn->TenMon;
      lblTenMonValue->Font = commonFont;
      lblTenMonValue->Size = System::Drawing::Size(150, 20);
      lblTenMonValue->Location = System::Drawing::Point(70, 40);
      lblTenMonValue->Name = L"lblTenMonValue"; // Đặt tên để dễ tìm trong btnChangerMon_Click

      Label^ lblDonGiaTitle = gcnew Label();
      lblDonGiaTitle->Text = L"Đơn giá";
      lblDonGiaTitle->Font = commonFont;
      lblDonGiaTitle->Size = System::Drawing::Size(100, 20);
      lblDonGiaTitle->Location = System::Drawing::Point(230, 10);

      Label^ lblDonGiaValue = gcnew Label();
      lblDonGiaValue->Text = monAn->Gia + " $";
      lblDonGiaValue->Font = commonFont;
      lblDonGiaValue->Size = System::Drawing::Size(100, 20);
      lblDonGiaValue->Location = System::Drawing::Point(230, 40);
      lblDonGiaValue->Name = L"lblDonGiaValue";

      Label^ lblPhanLoaiTitle = gcnew Label();
      lblPhanLoaiTitle->Text = L"Phân loại";
      lblPhanLoaiTitle->Font = commonFont;
      lblPhanLoaiTitle->Size = System::Drawing::Size(100, 20);
      lblPhanLoaiTitle->Location = System::Drawing::Point(340, 10);

      Label^ lblPhanLoaiValue = gcnew Label();
      lblPhanLoaiValue->Text = monAn->LoaiMon;
      lblPhanLoaiValue->Font = commonFont;
      lblPhanLoaiValue->Size = System::Drawing::Size(100, 20);
      lblPhanLoaiValue->Location = System::Drawing::Point(340, 40);
      lblPhanLoaiValue->Name = L"lblPhanLoaiValue";

      PictureBox^ picTrash = gcnew PictureBox();
      picTrash->Location = System::Drawing::Point(470, 20);
      picTrash->Name = L"picTrash";
      picTrash->Size = System::Drawing::Size(25, 25);
      picTrash->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
      picTrash->TabIndex = 0;
      picTrash->BackColor = System::Drawing::Color::Transparent;
      picTrash->Cursor = Cursors::Hand;
      picTrash->BringToFront();
      picTrash->Parent = panelOrder;
      picTrash->Image = Image::FromFile(".\\Image\\thungrac2.png");
      picTrash->Tag = monAn;
      picTrash->Click += gcnew System::EventHandler(this, &AddFoodForm::picBox_Click);

      panelOrder->Controls->Add(lblSTTTitle);
      panelOrder->Controls->Add(lblSTTValue);
      panelOrder->Controls->Add(lblTenMonTitle);
      panelOrder->Controls->Add(lblTenMonValue);
      panelOrder->Controls->Add(lblDonGiaTitle);
      panelOrder->Controls->Add(lblDonGiaValue);
      panelOrder->Controls->Add(lblPhanLoaiTitle);
      panelOrder->Controls->Add(lblPhanLoaiValue);
      panelOrder->Controls->Add(picTrash);

      flowLayoutPanel1->Controls->Add(panelOrder);
  }

      private: System::Void btnChangerMon_Click(System::Object^ sender, System::EventArgs^ e) {
          if (selectedPanel == nullptr) {
              MessageBox::Show(L"Vui lòng chọn món ăn để sửa", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
              return;
          }
          if (txtTenMon->Text == "" || txtDonGia->Text == "") {
              MessageBox::Show(L"Vui lòng nhập đầy đủ thông tin món ăn", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
              return;
          }

          MonAn^ monAn = safe_cast<MonAn^>(selectedPanel->Tag);
          monAn->TenMon = txtTenMon->Text;
          monAn->Gia = txtDonGia->Text;
          monAn->LoaiMon = cbLoaiMon->Text;

          if (isNewImageSelected) {
              monAn->Anh = openFileDialog1->FileName;
          }

          for each(Control ^ control in selectedPanel->Controls) {
              if (control->GetType() == Label::typeid) {
                  Label^ lbl = safe_cast<Label^>(control);
                  if (lbl->Name == "lblTenMonValue") {
                      lbl->Text = monAn->TenMon;
                  }
                  else if (lbl->Name == "lblDonGiaValue") {
                      lbl->Text = monAn->Gia + " $";
                  }
                  else if (lbl->Name == "lblPhanLoaiValue") {
                      lbl->Text = monAn->LoaiMon;
                  }
              }
              else if (control->GetType() == PictureBox::typeid) {
                  PictureBox^ picBox = safe_cast<PictureBox^>(control);
                  if (picBox->Name == "picFoodImage") { // Cập nhật hình ảnh món ăn
                      if (isNewImageSelected && !String::IsNullOrEmpty(monAn->Anh) && System::IO::File::Exists(monAn->Anh) && monAn->Anh != "openFileDialog1") {
                          try {
                              picBox->Image = Image::FromFile(monAn->Anh);
                          }
                          catch (Exception^ ex) {
                              MessageBox::Show(L"Không thể tải ảnh: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                              picBox->Image = nullptr;
                          }
                      }
                      else if (isNewImageSelected) {
                          picBox->Image = nullptr; // Xóa hình ảnh nếu đường dẫn không hợp lệ
                      }
                  }
              }
          }

          MonAn::GhiDanhSachMonAn(danhSachMonAn, FoodfilePath);
          MessageBox::Show(L"Sửa món thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);

          txtTenMon->Clear();
          txtDonGia->Clear();
          cbLoaiMon->SelectedIndex = -1;
          pictureBox1->Image = nullptr;
          selectedPanel->BackColor = Color::White;
          selectedPanel = nullptr;
          isNewImageSelected = false;
      }

private: System::Void picBox_Click(System::Object^ sender, System::EventArgs^ e) {
    PictureBox^ pic = safe_cast<PictureBox^>(sender);
    MonAn^ monDelete = safe_cast<MonAn^>(pic->Tag);
    MonAn^ monAn = safe_cast<MonAn^>(pic->Parent->Tag);

    if (MessageBox::Show(L"Bạn có chắc chắn muốn xóa món " + monAn->TenMon + L" không?", "Thông báo", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        danhSachMonAn->Remove(monDelete);
        Panel^ panelToRemove = safe_cast<Panel^>(pic->Parent);
        flowLayoutPanel1->Controls->Remove(panelToRemove);
        UpdateStt();
        MonAn::GhiDanhSachMonAn(danhSachMonAn, FoodfilePath);
        MessageBox::Show(L"Xóa món thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
}
    private: System::Void panelOrder_Click(System::Object^ sender, System::EventArgs^ e) {
        Panel^ clickedPanel = safe_cast<Panel^>(sender);

        if (selectedPanel != nullptr) {
            selectedPanel->BackColor = Color::White;
        }

        clickedPanel->BackColor = Color::LightGray;
        selectedPanel = clickedPanel;

        MonAn^ mon = safe_cast<MonAn^>(clickedPanel->Tag);
        txtTenMon->Text = mon->TenMon;
        txtDonGia->Text = mon->Gia;
        cbLoaiMon->SelectedItem = mon->LoaiMon;

        if (!String::IsNullOrEmpty(mon->Anh) && System::IO::File::Exists(mon->Anh) && mon->Anh != "openFileDialog1") {
            try {
                pictureBox1->Image = Image::FromFile(mon->Anh);
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Không thể tải ảnh: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                pictureBox1->Image = nullptr;
            }
        }
        else {
            pictureBox1->Image = nullptr;
        }

        isNewImageSelected = false;
    }


   private: System::Void btnThemMon_Click(System::Object^ sender, System::EventArgs^ e) {
       if (txtTenMon->Text == "" || txtDonGia->Text == "") {
           MessageBox::Show(L"Vui lòng nhập đầy đủ thông tin món ăn", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
           return;
       }

       String^ loaiMon = cbLoaiMon->Text;
       String^ tenMon = txtTenMon->Text;
       String^ gia = txtDonGia->Text;
       String^ anh = isNewImageSelected ? openFileDialog1->FileName : nullptr; // Chỉ gán đường dẫn ảnh nếu đã chọn ảnh

       MonAn^ monAn = gcnew MonAn(loaiMon, tenMon, gia, anh);
       danhSachMonAn->Add(monAn);
       MonAn::GhiDanhSachMonAn(danhSachMonAn, FoodfilePath);
       MessageBox::Show(L"Thêm món thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);

       ThemPanelMonAn(monAn, danhSachMonAn->Count);

       txtTenMon->Clear();
       txtDonGia->Clear();
       cbLoaiMon->SelectedIndex = -1;
       pictureBox1->Image = nullptr;
       isNewImageSelected = false; 
   }

    private: System::Void txtDonGia_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && (e->KeyChar != '.')) {
            e->Handled = true;
        }
        if ((e->KeyChar == '.') && (dynamic_cast<TextBox^>(sender)->Text->IndexOf('.') > -1)) {
            e->Handled = true;
        }
    }

    private: System::Void UpdateStt() {
        int stt = 1;
        for each (Control ^ control in flowLayoutPanel1->Controls) {
            if (control->GetType() == Panel::typeid && control != panel2) {
                Panel^ panel = safe_cast<Panel^>(control);
                Label^ lblSTTValue = safe_cast<Label^>(panel->Controls["lblSTTValue"]);
                if (lblSTTValue != nullptr) {
                    lblSTTValue->Text = stt.ToString();
                    stt++;
                }
            }
        }
    }
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}