#pragma once
#include "PayMent.h"
#include "MonAn.h"
#include "DiscountManager.h"
namespace PBL2DatMonAn {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class AddStatiticForm : public System::Windows::Forms::UserControl
    {
    public:
        AddStatiticForm(void)
        {
            InitializeComponent();
            billFilePath = "Bill.txt";
            foodFilePath = "monan.txt";
        }

    protected:
        ~AddStatiticForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::String^ billFilePath;
        System::String^ foodFilePath;
        System::Windows::Forms::DataVisualization::Charting::Chart^ chartSoSanh;
        System::Windows::Forms::Button^ btnLocSoSanh;
        System::Windows::Forms::Label^ lblDateFrom;
        System::Windows::Forms::Label^ lblDateTo;
        System::Windows::Forms::TextBox^ txtDateTo;
        System::Windows::Forms::TextBox^ txtDateFrom;
        System::Windows::Forms::TextBox^ txtDoanhThuFrom;
        System::Windows::Forms::TextBox^ txtDoanhThuTo;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Button^ btnLocDoanhThu;
        System::Windows::Forms::DataVisualization::Charting::Chart^ chartDoanhThu;
        System::Windows::Forms::DataVisualization::Charting::Chart^ chartNhanVien;
        System::Windows::Forms::TextBox^ txtNhanVienFrom;
        System::Windows::Forms::TextBox^ txtNhanVienTo;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Button^ btnLocDoanhThuNhanVien;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            this->chartSoSanh = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->btnLocSoSanh = (gcnew System::Windows::Forms::Button());
            this->lblDateFrom = (gcnew System::Windows::Forms::Label());
            this->lblDateTo = (gcnew System::Windows::Forms::Label());
            this->txtDateTo = (gcnew System::Windows::Forms::TextBox());
            this->txtDateFrom = (gcnew System::Windows::Forms::TextBox());
            this->txtDoanhThuFrom = (gcnew System::Windows::Forms::TextBox());
            this->txtDoanhThuTo = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->btnLocDoanhThu = (gcnew System::Windows::Forms::Button());
            this->chartDoanhThu = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->chartNhanVien = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->txtNhanVienFrom = (gcnew System::Windows::Forms::TextBox());
            this->txtNhanVienTo = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->btnLocDoanhThuNhanVien = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSoSanh))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartDoanhThu))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartNhanVien))->BeginInit();
            this->SuspendLayout();
            // 
            // chartSoSanh
            // 
            chartArea1->Name = L"ChartArea1";
            this->chartSoSanh->ChartAreas->Add(chartArea1);
            legend1->Name = L"Legend1";
            this->chartSoSanh->Legends->Add(legend1);
            this->chartSoSanh->Location = System::Drawing::Point(21, 89);
            this->chartSoSanh->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->chartSoSanh->Name = L"chartSoSanh";
            this->chartSoSanh->Size = System::Drawing::Size(762, 247);
            this->chartSoSanh->TabIndex = 6;
            this->chartSoSanh->Text = L"chart1";
            // 
            // btnLocSoSanh
            // 
            this->btnLocSoSanh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(120)));
            this->btnLocSoSanh->FlatAppearance->BorderSize = 0;
            this->btnLocSoSanh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLocSoSanh->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLocSoSanh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnLocSoSanh->Location = System::Drawing::Point(346, 33);
            this->btnLocSoSanh->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->btnLocSoSanh->Name = L"btnLocSoSanh";
            this->btnLocSoSanh->Size = System::Drawing::Size(170, 41);
            this->btnLocSoSanh->TabIndex = 6;
            this->btnLocSoSanh->Text = L"Lọc";
            this->btnLocSoSanh->UseVisualStyleBackColor = false;
            this->btnLocSoSanh->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnLocSoSanh_Click);
            // 
            // lblDateFrom
            // 
            this->lblDateFrom->AutoSize = true;
            this->lblDateFrom->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDateFrom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblDateFrom->Location = System::Drawing::Point(75, 45);
            this->lblDateFrom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblDateFrom->Name = L"lblDateFrom";
            this->lblDateFrom->Size = System::Drawing::Size(66, 18);
            this->lblDateFrom->TabIndex = 9;
            this->lblDateFrom->Text = L"Bắt đầu:";
            // 
            // lblDateTo
            // 
            this->lblDateTo->AutoSize = true;
            this->lblDateTo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDateTo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblDateTo->Location = System::Drawing::Point(576, 45);
            this->lblDateTo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblDateTo->Name = L"lblDateTo";
            this->lblDateTo->Size = System::Drawing::Size(68, 18);
            this->lblDateTo->TabIndex = 10;
            this->lblDateTo->Text = L"Kết thúc:";
            // 
            // txtDateTo
            // 
            this->txtDateTo->ForeColor = System::Drawing::Color::Gray;
            this->txtDateTo->Location = System::Drawing::Point(667, 45);
            this->txtDateTo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->txtDateTo->Name = L"txtDateTo";
            this->txtDateTo->Size = System::Drawing::Size(117, 20);
            this->txtDateTo->TabIndex = 11;
            this->txtDateTo->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtDateTo->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtDateTo_Enter);
            this->txtDateTo->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtDateTo_Leave);
            // 
            // txtDateFrom
            // 
            this->txtDateFrom->ForeColor = System::Drawing::Color::Gray;
            this->txtDateFrom->Location = System::Drawing::Point(142, 47);
            this->txtDateFrom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->txtDateFrom->Name = L"txtDateFrom";
            this->txtDateFrom->Size = System::Drawing::Size(139, 20);
            this->txtDateFrom->TabIndex = 12;
            this->txtDateFrom->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtDateFrom->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtDateFrom_Enter);
            this->txtDateFrom->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtDateFrom_Leave);
            // 
            // txtDoanhThuFrom
            // 
            this->txtDoanhThuFrom->ForeColor = System::Drawing::Color::Gray;
            this->txtDoanhThuFrom->Location = System::Drawing::Point(142, 349);
            this->txtDoanhThuFrom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->txtDoanhThuFrom->Name = L"txtDoanhThuFrom";
            this->txtDoanhThuFrom->Size = System::Drawing::Size(139, 20);
            this->txtDoanhThuFrom->TabIndex = 18;
            this->txtDoanhThuFrom->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtDoanhThuFrom->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuFrom_Enter);
            this->txtDoanhThuFrom->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuFrom_Leave);
            // 
            // txtDoanhThuTo
            // 
            this->txtDoanhThuTo->ForeColor = System::Drawing::Color::Gray;
            this->txtDoanhThuTo->Location = System::Drawing::Point(667, 347);
            this->txtDoanhThuTo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->txtDoanhThuTo->Name = L"txtDoanhThuTo";
            this->txtDoanhThuTo->Size = System::Drawing::Size(117, 20);
            this->txtDoanhThuTo->TabIndex = 17;
            this->txtDoanhThuTo->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtDoanhThuTo->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuTo_Enter);
            this->txtDoanhThuTo->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuTo_Leave);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label1->Location = System::Drawing::Point(576, 347);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(68, 18);
            this->label1->TabIndex = 16;
            this->label1->Text = L"Kết thúc:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label2->Location = System::Drawing::Point(75, 347);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(66, 18);
            this->label2->TabIndex = 15;
            this->label2->Text = L"Bắt đầu:";
            // 
            // btnLocDoanhThu
            // 
            this->btnLocDoanhThu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(120)));
            this->btnLocDoanhThu->FlatAppearance->BorderSize = 0;
            this->btnLocDoanhThu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLocDoanhThu->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLocDoanhThu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnLocDoanhThu->Location = System::Drawing::Point(346, 349);
            this->btnLocDoanhThu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->btnLocDoanhThu->Name = L"btnLocDoanhThu";
            this->btnLocDoanhThu->Size = System::Drawing::Size(170, 41);
            this->btnLocDoanhThu->TabIndex = 13;
            this->btnLocDoanhThu->Text = L"Lọc";
            this->btnLocDoanhThu->UseVisualStyleBackColor = false;
            this->btnLocDoanhThu->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnLocDoanhThu_Click);
            // 
            // chartDoanhThu
            // 
            chartArea2->Name = L"ChartArea1";
            this->chartDoanhThu->ChartAreas->Add(chartArea2);
            legend2->Name = L"Legend1";
            this->chartDoanhThu->Legends->Add(legend2);
            this->chartDoanhThu->Location = System::Drawing::Point(21, 392);
            this->chartDoanhThu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->chartDoanhThu->Name = L"chartDoanhThu";
            this->chartDoanhThu->Size = System::Drawing::Size(762, 247);
            this->chartDoanhThu->TabIndex = 14;
            this->chartDoanhThu->Text = L"chart1";
            // 
            // chartNhanVien
            // 
            chartArea3->Name = L"ChartArea1";
            this->chartNhanVien->ChartAreas->Add(chartArea3);
            legend3->Name = L"Legend1";
            this->chartNhanVien->Legends->Add(legend3);
            this->chartNhanVien->Location = System::Drawing::Point(794, 89);
            this->chartNhanVien->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->chartNhanVien->Name = L"chartNhanVien";
            this->chartNhanVien->Size = System::Drawing::Size(641, 247);
            this->chartNhanVien->TabIndex = 19;
            this->chartNhanVien->Text = L"chart1";
            // 
            // txtNhanVienFrom
            // 
            this->txtNhanVienFrom->ForeColor = System::Drawing::Color::Gray;
            this->txtNhanVienFrom->Location = System::Drawing::Point(916, 47);
            this->txtNhanVienFrom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->txtNhanVienFrom->Name = L"txtNhanVienFrom";
            this->txtNhanVienFrom->Size = System::Drawing::Size(139, 20);
            this->txtNhanVienFrom->TabIndex = 24;
            this->txtNhanVienFrom->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtNhanVienFrom->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtNhanVienFrom_Enter);
            this->txtNhanVienFrom->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtNhanVienFrom_Leave);
            // 
            // txtNhanVienTo
            // 
            this->txtNhanVienTo->ForeColor = System::Drawing::Color::Gray;
            this->txtNhanVienTo->Location = System::Drawing::Point(1310, 47);
            this->txtNhanVienTo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->txtNhanVienTo->Name = L"txtNhanVienTo";
            this->txtNhanVienTo->Size = System::Drawing::Size(117, 20);
            this->txtNhanVienTo->TabIndex = 23;
            this->txtNhanVienTo->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtNhanVienTo->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtNhanVienTo_Enter);
            this->txtNhanVienTo->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtNhanVienTo_Leave);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label3->Location = System::Drawing::Point(1239, 42);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(68, 18);
            this->label3->TabIndex = 22;
            this->label3->Text = L"Kết thúc:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label4->Location = System::Drawing::Point(836, 45);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(66, 18);
            this->label4->TabIndex = 21;
            this->label4->Text = L"Bắt đầu:";
            // 
            // btnLocDoanhThuNhanVien
            // 
            this->btnLocDoanhThuNhanVien->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
            this->btnLocDoanhThuNhanVien->FlatAppearance->BorderSize = 0;
            this->btnLocDoanhThuNhanVien->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLocDoanhThuNhanVien->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLocDoanhThuNhanVien->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->btnLocDoanhThuNhanVien->Location = System::Drawing::Point(1065, 33);
            this->btnLocDoanhThuNhanVien->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->btnLocDoanhThuNhanVien->Name = L"btnLocDoanhThuNhanVien";
            this->btnLocDoanhThuNhanVien->Size = System::Drawing::Size(170, 41);
            this->btnLocDoanhThuNhanVien->TabIndex = 20;
            this->btnLocDoanhThuNhanVien->Text = L"Lọc";
            this->btnLocDoanhThuNhanVien->UseVisualStyleBackColor = false;
            this->btnLocDoanhThuNhanVien->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnLocDoanhThuNhanVien_Click);
            // 
            // AddStatiticForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->txtNhanVienFrom);
            this->Controls->Add(this->txtNhanVienTo);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->btnLocDoanhThuNhanVien);
            this->Controls->Add(this->chartNhanVien);
            this->Controls->Add(this->txtDoanhThuFrom);
            this->Controls->Add(this->txtDoanhThuTo);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->btnLocDoanhThu);
            this->Controls->Add(this->chartDoanhThu);
            this->Controls->Add(this->txtDateFrom);
            this->Controls->Add(this->txtDateTo);
            this->Controls->Add(this->lblDateTo);
            this->Controls->Add(this->lblDateFrom);
            this->Controls->Add(this->btnLocSoSanh);
            this->Controls->Add(this->chartSoSanh);
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"AddStatiticForm";
            this->Size = System::Drawing::Size(1487, 702);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSoSanh))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartDoanhThu))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartNhanVien))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private:
        // Placeholder text handling for txtDateFrom
        System::Void txtDateFrom_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (this->txtDateFrom->Text == L"dd/MM/yyyy hoặc yyyy") {
                this->txtDateFrom->Text = L"";
                this->txtDateFrom->ForeColor = System::Drawing::Color::Black;
            }
        }
        System::Void txtDateFrom_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(this->txtDateFrom->Text)) {
                this->txtDateFrom->Text = L"dd/MM/yyyy hoặc yyyy";
                this->txtDateFrom->ForeColor = System::Drawing::Color::Gray;
            }
        }
        // Placeholder text handling for txtDateTo
        System::Void txtDateTo_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (this->txtDateTo->Text == L"dd/MM/yyyy hoặc yyyy") {
                this->txtDateTo->Text = L"";
                this->txtDateTo->ForeColor = System::Drawing::Color::Black;
            }
        }
        System::Void txtDateTo_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(this->txtDateTo->Text)) {
                this->txtDateTo->Text = L"dd/MM/yyyy hoặc yyyy";
                this->txtDateTo->ForeColor = System::Drawing::Color::Gray;
            }
        }
        // Placeholder text handling for txtDoanhThuFrom
        System::Void txtDoanhThuFrom_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (this->txtDoanhThuFrom->Text == L"dd/MM/yyyy hoặc yyyy") {
                this->txtDoanhThuFrom->Text = L"";
                this->txtDoanhThuFrom->ForeColor = System::Drawing::Color::Black;
            }
        }
        System::Void txtDoanhThuFrom_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(this->txtDoanhThuFrom->Text)) {
                this->txtDoanhThuFrom->Text = L"dd/MM/yyyy hoặc yyyy";
                this->txtDoanhThuFrom->ForeColor = System::Drawing::Color::Gray;
            }
        }
        // Placeholder text handling for txtDoanhThuTo
        System::Void txtDoanhThuTo_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (this->txtDoanhThuTo->Text == L"dd/MM/yyyy hoặc yyyy") {
                this->txtDoanhThuTo->Text = L"";
                this->txtDoanhThuTo->ForeColor = System::Drawing::Color::Black;
            }
        }
        System::Void txtDoanhThuTo_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(this->txtDoanhThuTo->Text)) {
                this->txtDoanhThuTo->Text = L"dd/MM/yyyy hoặc yyyy";
                this->txtDoanhThuTo->ForeColor = System::Drawing::Color::Gray;
            }
        }
        // Placeholder text handling for txtNhanVienFrom
        System::Void txtNhanVienFrom_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (this->txtNhanVienFrom->Text == L"dd/MM/yyyy hoặc yyyy") {
                this->txtNhanVienFrom->Text = L"";
                this->txtNhanVienFrom->ForeColor = System::Drawing::Color::Black;
            }
        }
        System::Void txtNhanVienFrom_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(this->txtNhanVienFrom->Text)) {
                this->txtNhanVienFrom->Text = L"dd/MM/yyyy hoặc yyyy";
                this->txtNhanVienFrom->ForeColor = System::Drawing::Color::Gray;
            }
        }
        // Placeholder text handling for txtNhanVienTo
        System::Void txtNhanVienTo_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (this->txtNhanVienTo->Text == L"dd/MM/yyyy hoặc yyyy") {
                this->txtNhanVienTo->Text = L"";
                this->txtNhanVienTo->ForeColor = System::Drawing::Color::Black;
            }
        }
        System::Void txtNhanVienTo_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(this->txtNhanVienTo->Text)) {
                this->txtNhanVienTo->Text = L"dd/MM/yyyy hoặc yyyy";
                this->txtNhanVienTo->ForeColor = System::Drawing::Color::Gray;
            }
        }

        System::Void btnLocSoSanh_Click(System::Object^ sender, System::EventArgs^ e) {
            this->chartSoSanh->Series->Clear();

            this->chartSoSanh->Series->Add(L"Kỳ bắt đầu");
            this->chartSoSanh->Series[L"Kỳ bắt đầu"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
            this->chartSoSanh->Series[L"Kỳ bắt đầu"]->Color = System::Drawing::Color::Blue;
            this->chartSoSanh->Series[L"Kỳ bắt đầu"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
            this->chartSoSanh->Series[L"Kỳ bắt đầu"]->MarkerSize = 8;
            this->chartSoSanh->Series[L"Kỳ bắt đầu"]->MarkerColor = System::Drawing::Color::Blue;

            this->chartSoSanh->Series->Add(L"Kỳ kết thúc");
            this->chartSoSanh->Series[L"Kỳ kết thúc"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
            this->chartSoSanh->Series[L"Kỳ kết thúc"]->Color = System::Drawing::Color::Red;
            this->chartSoSanh->Series[L"Kỳ kết thúc"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
            this->chartSoSanh->Series[L"Kỳ kết thúc"]->MarkerSize = 8;
            this->chartSoSanh->Series[L"Kỳ kết thúc"]->MarkerColor = System::Drawing::Color::Red;

            // Read bills
            List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);
            if (danhSachHoaDon->Count == 0) {
                MessageBox::Show(L"Không có hóa đơn nào để so sánh!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            String^ inputFrom = txtDateFrom->Text;
            String^ inputTo = txtDateTo->Text;
            DateTime startDate, endDate, startDateTo, endDateTo;
            bool isYearly = false;

            if (System::Text::RegularExpressions::Regex::IsMatch(inputFrom, L"^[0-9]{4}$") &&
                System::Text::RegularExpressions::Regex::IsMatch(inputTo, L"^[0-9]{4}$")) {
                isYearly = true;
                int yearFrom = Int32::Parse(inputFrom);
                int yearTo = Int32::Parse(inputTo);
                startDate = DateTime(yearFrom, 1, 1);
                endDate = DateTime(yearFrom, 12, 31);
                startDateTo = DateTime(yearTo, 1, 1);
                endDateTo = DateTime(yearTo, 12, 31);
            }
            else {
                try {
                    startDate = DateTime::ParseExact(inputFrom, L"dd/MM/yyyy", nullptr);
                    endDate = startDate.AddMonths(1).AddDays(-1);
                    startDateTo = DateTime::ParseExact(inputTo, L"dd/MM/yyyy", nullptr);
                    endDateTo = startDateTo.AddMonths(1).AddDays(-1);
                }
                catch (Exception^) {
                    MessageBox::Show(L"Định dạng ngày không hợp lệ! Vui lòng nhập dd/MM/yyyy hoặc yyyy.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
            }

            List<PayMent^>^ danhSachHoaDonLocFrom = gcnew List<PayMent^>();
            List<PayMent^>^ danhSachHoaDonLocTo = gcnew List<PayMent^>();
            for each (PayMent ^ bill in danhSachHoaDon) {
                if (bill->ThoiGianThanhToan >= startDate && bill->ThoiGianThanhToan <= endDate) {
                    danhSachHoaDonLocFrom->Add(bill);
                }
                if (bill->ThoiGianThanhToan >= startDateTo && bill->ThoiGianThanhToan <= endDateTo) {
                    danhSachHoaDonLocTo->Add(bill);
                }
            }

            if (danhSachHoaDonLocFrom->Count == 0 || danhSachHoaDonLocTo->Count == 0) {
                MessageBox::Show(L"Không có hóa đơn nào trong kỳ đã chọn!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            List<MonAn^>^ danhSachMonAn = MonAn::DocDanhSachMonAn(foodFilePath);
            if (danhSachMonAn == nullptr || danhSachMonAn->Count == 0) {
                MessageBox::Show(L"Không tìm thấy danh sách món ăn trong file monan.txt!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            Dictionary<String^, int>^ soLuongMonAnFrom = gcnew Dictionary<String^, int>();
            Dictionary<String^, int>^ soLuongMonAnTo = gcnew Dictionary<String^, int>();
            for each (MonAn ^ mon in danhSachMonAn) {
                soLuongMonAnFrom[mon->TenMon] = 0;
                soLuongMonAnTo[mon->TenMon] = 0;
            }

            for each (PayMent ^ bill in danhSachHoaDonLocFrom) {
                for each (MonAn ^ mon in bill->DanhSachMon) {
                    if (soLuongMonAnFrom->ContainsKey(mon->TenMon)) {
                        soLuongMonAnFrom[mon->TenMon] += mon->SoLuong;
                    }
                }
            }
            for each (PayMent ^ bill in danhSachHoaDonLocTo) {
                for each (MonAn ^ mon in bill->DanhSachMon) {
                    if (soLuongMonAnTo->ContainsKey(mon->TenMon)) {
                        soLuongMonAnTo[mon->TenMon] += mon->SoLuong;
                    }
                }
            }

            bool coDuLieu = false;
            for each (auto pair in soLuongMonAnFrom) {
                if (pair.Value > 0 || soLuongMonAnTo[pair.Key] > 0) {
                    coDuLieu = true;
                    break;
                }
            }
            if (!coDuLieu) {
                MessageBox::Show(L"Không có dữ liệu để hiển thị trong kỳ đã chọn!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            for each (auto pair in soLuongMonAnFrom) {
                this->chartSoSanh->Series[L"Kỳ bắt đầu"]->Points->AddXY(pair.Key, pair.Value);
                int soLuongTo = soLuongMonAnTo->ContainsKey(pair.Key) ? soLuongMonAnTo[pair.Key] : 0;
                this->chartSoSanh->Series[L"Kỳ kết thúc"]->Points->AddXY(pair.Key, soLuongTo);
            }

            this->chartSoSanh->ChartAreas["ChartArea1"]->AxisX->Title = L"Tên món ăn";
            this->chartSoSanh->ChartAreas["ChartArea1"]->AxisY->Title = L"Số lượng món ăn đã bán";
            this->chartSoSanh->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
            this->chartSoSanh->ChartAreas["ChartArea1"]->AxisX->LabelStyle->Angle = 45;
            this->chartSoSanh->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
        }

        System::Void btnLocDoanhThu_Click(System::Object^ sender, System::EventArgs^ e) {
            this->chartDoanhThu->Series->Clear();

            this->chartDoanhThu->Series->Add(L"Doanh thu");
            this->chartDoanhThu->Series[L"Doanh thu"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
            this->chartDoanhThu->Series[L"Doanh thu"]->Color = System::Drawing::Color::Blue;
            this->chartDoanhThu->Series[L"Doanh thu"]->BorderWidth = 2;
            this->chartDoanhThu->Series[L"Doanh thu"]->ToolTip = L"#VALY{N2} $";
            this->chartDoanhThu->Series[L"Doanh thu"]->IsValueShownAsLabel = true;
            this->chartDoanhThu->Series[L"Doanh thu"]->LabelFormat = "N2";

            // Read bills
            List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);
            if (danhSachHoaDon->Count == 0) {
                MessageBox::Show(L"Không có hóa đơn nào để hiển thị doanh thu!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            String^ inputFrom = txtDoanhThuFrom->Text;
            String^ inputTo = txtDoanhThuTo->Text;
            DateTime startDate, endDate;
            bool isYearly = false;

            if (System::Text::RegularExpressions::Regex::IsMatch(inputFrom, L"^[0-9]{4}$") &&
                System::Text::RegularExpressions::Regex::IsMatch(inputTo, L"^[0-9]{4}$")) {
                isYearly = true;
                int yearFrom = Int32::Parse(inputFrom);
                int yearTo = Int32::Parse(inputTo);
                if (yearFrom != yearTo) {
                    MessageBox::Show(L"Vui lòng nhập cùng một năm cho khoảng thời gian!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
                startDate = DateTime(yearFrom, 1, 1);
                endDate = DateTime(yearFrom, 12, 31);
            }
            else {
                try {
                    startDate = DateTime::ParseExact(inputFrom, L"dd/MM/yyyy", nullptr);
                    endDate = DateTime::ParseExact(inputTo, L"dd/MM/yyyy", nullptr);
                    if (startDate > endDate) {
                        MessageBox::Show(L"Ngày bắt đầu phải nhỏ hơn hoặc bằng ngày kết thúc!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                }
                catch (Exception^) {
                    MessageBox::Show(L"Định dạng ngày không hợp lệ! Vui lòng nhập dd/MM/yyyy hoặc yyyy.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
            }

            List<PayMent^>^ danhSachHoaDonLoc = gcnew List<PayMent^>();
            for each (PayMent ^ bill in danhSachHoaDon) {
                if (bill->ThoiGianThanhToan >= startDate && bill->ThoiGianThanhToan <= endDate) {
                    danhSachHoaDonLoc->Add(bill);
                }
            }

            if (danhSachHoaDonLoc->Count == 0) {
                MessageBox::Show(L"Không có hóa đơn nào trong khoảng thời gian đã chọn!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            Dictionary<DateTime, double>^ doanhThuHangNgay = gcnew Dictionary<DateTime, double>();
            for (DateTime date = startDate; date <= endDate; date = date.AddDays(1)) {
                doanhThuHangNgay[date.Date] = 0.0;
            }

            for each (PayMent ^ bill in danhSachHoaDonLoc) {
                DateTime billDate = bill->ThoiGianThanhToan.Date;
                if (doanhThuHangNgay->ContainsKey(billDate)) {
                    double revenue = bill->TongTien * (1.0 - bill->Discountpercent / 100.0);
                    doanhThuHangNgay[billDate] += revenue;
                }
            }

            bool coDuLieu = false;
            for each (auto pair in doanhThuHangNgay) {
                if (pair.Value > 0) {
                    coDuLieu = true;
                    break;
                }
            }
            if (!coDuLieu) {
                MessageBox::Show(L"Không có dữ liệu doanh thu để hiển thị trong khoảng thời gian đã chọn!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            for each (auto pair in doanhThuHangNgay) {
                String^ dateLabel = isYearly ? pair.Key.ToString(L"dd/MM/yyyy") : pair.Key.ToString(L"dd/MM");
                int pointIndex = this->chartDoanhThu->Series[L"Doanh thu"]->Points->AddXY(dateLabel, pair.Value);
                this->chartDoanhThu->Series[L"Doanh thu"]->Points[pointIndex]->Label = pair.Value.ToString("N2") + L"$";
            }

            this->chartDoanhThu->ChartAreas["ChartArea1"]->AxisX->Title = L"Ngày";
            this->chartDoanhThu->ChartAreas["ChartArea1"]->AxisY->Title = L"Doanh thu ($)";
            this->chartDoanhThu->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
            this->chartDoanhThu->ChartAreas["ChartArea1"]->AxisX->LabelStyle->Angle = 45;
            this->chartDoanhThu->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
            this->chartDoanhThu->ChartAreas["ChartArea1"]->AxisY->LabelStyle->Format = "N2";
        }

        System::Void btnLocDoanhThuNhanVien_Click(System::Object^ sender, System::EventArgs^ e) {
            this->chartNhanVien->Series->Clear();

            this->chartNhanVien->Series->Add(L"Doanh thu nhân viên");
            this->chartNhanVien->Series[L"Doanh thu nhân viên"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
            this->chartNhanVien->Series[L"Doanh thu nhân viên"]->Color = System::Drawing::Color::Green;
            this->chartNhanVien->Series[L"Doanh thu nhân viên"]->BorderWidth = 2;
            this->chartNhanVien->Series[L"Doanh thu nhân viên"]->ToolTip = L"#VALY{N2} $";
            this->chartNhanVien->Series[L"Doanh thu nhân viên"]->IsValueShownAsLabel = true;
            this->chartNhanVien->Series[L"Doanh thu nhân viên"]->LabelFormat = "N2";

            // Read bills
            List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);
            if (danhSachHoaDon->Count == 0) {
                MessageBox::Show(L"Không có hóa đơn nào để hiển thị doanh thu nhân viên!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            String^ inputFrom = txtNhanVienFrom->Text;
            String^ inputTo = txtNhanVienTo->Text;
            DateTime startDate, endDate;
            bool isYearly = false;

            if (System::Text::RegularExpressions::Regex::IsMatch(inputFrom, L"^[0-9]{4}$") &&
                System::Text::RegularExpressions::Regex::IsMatch(inputTo, L"^[0-9]{4}$")) {
                isYearly = true;
                int yearFrom = Int32::Parse(inputFrom);
                int yearTo = Int32::Parse(inputTo);
                if (yearFrom != yearTo) {
                    MessageBox::Show(L"Vui lòng nhập cùng một năm cho khoảng thời gian!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
                startDate = DateTime(yearFrom, 1, 1);
                endDate = DateTime(yearFrom, 12, 31);
            }
            else {
                try {
                    startDate = DateTime::ParseExact(inputFrom, L"dd/MM/yyyy", nullptr);
                    endDate = DateTime::ParseExact(inputTo, L"dd/MM/yyyy", nullptr);
                    if (startDate > endDate) {
                        MessageBox::Show(L"Ngày bắt đầu phải nhỏ hơn hoặc bằng ngày kết thúc!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                }
                catch (Exception^) {
                    MessageBox::Show(L"Định dạng ngày không hợp lệ! Vui lòng nhập dd/MM/yyyy hoặc yyyy.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
            }

            List<PayMent^>^ danhSachHoaDonLoc = gcnew List<PayMent^>();
            for each (PayMent ^ bill in danhSachHoaDon) {
                if (bill->ThoiGianThanhToan >= startDate && bill->ThoiGianThanhToan <= endDate) {
                    danhSachHoaDonLoc->Add(bill);
                }
            }

            if (danhSachHoaDonLoc->Count == 0) {
                MessageBox::Show(L"Không có hóa đơn nào trong khoảng thời gian đã chọn!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            Dictionary<String^, double>^ doanhThuNhanVien = gcnew Dictionary<String^, double>();
            for each (PayMent ^ bill in danhSachHoaDonLoc) {
                String^ nhanVien = bill->TenNhanVien;
                if (String::IsNullOrEmpty(nhanVien)) {
                    nhanVien = L"Không xác định";
                }
                double revenue = bill->TongTien * (1.0 - bill->Discountpercent / 100.0);
                if (doanhThuNhanVien->ContainsKey(nhanVien)) {
                    doanhThuNhanVien[nhanVien] += revenue;
                }
                else {
                    doanhThuNhanVien[nhanVien] = revenue;
                }
            }

            bool coDuLieu = false;
            for each (auto pair in doanhThuNhanVien) {
                if (pair.Value > 0) {
                    coDuLieu = true;
                    break;
                }
            }
            if (!coDuLieu) {
                MessageBox::Show(L"Không có dữ liệu doanh thu nhân viên để hiển thị trong khoảng thời gian đã chọn!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            for each (auto pair in doanhThuNhanVien) {
                int pointIndex = this->chartNhanVien->Series[L"Doanh thu nhân viên"]->Points->AddXY(pair.Key, pair.Value);
                this->chartNhanVien->Series[L"Doanh thu nhân viên"]->Points[pointIndex]->Label = pair.Value.ToString("N2") + L"$";
            }

            this->chartNhanVien->ChartAreas["ChartArea1"]->AxisX->Title = L"Tên nhân viên";
            this->chartNhanVien->ChartAreas["ChartArea1"]->AxisY->Title = L"Doanh thu ($)";
            this->chartNhanVien->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
            this->chartNhanVien->ChartAreas["ChartArea1"]->AxisX->LabelStyle->Angle = 45;
            this->chartNhanVien->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
            this->chartNhanVien->ChartAreas["ChartArea1"]->AxisY->LabelStyle->Format = "N2";
        }
    };
}