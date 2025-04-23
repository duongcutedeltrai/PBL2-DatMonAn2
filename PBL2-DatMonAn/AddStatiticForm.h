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






        System::Windows::Forms::TextBox^ txtDoanhThuFrom;
        System::Windows::Forms::TextBox^ txtDoanhThuTo;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;

        System::Windows::Forms::DataVisualization::Charting::Chart^ chartDoanhThu;
    private: System::Windows::Forms::Button^ btnLocDoanhThu;






        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            this->txtDoanhThuFrom = (gcnew System::Windows::Forms::TextBox());
            this->txtDoanhThuTo = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->chartDoanhThu = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->btnLocDoanhThu = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartDoanhThu))->BeginInit();
            this->SuspendLayout();
            // 
            // txtDoanhThuFrom
            // 
            this->txtDoanhThuFrom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->txtDoanhThuFrom->ForeColor = System::Drawing::Color::Gray;
            this->txtDoanhThuFrom->Location = System::Drawing::Point(259, 98);
            this->txtDoanhThuFrom->Name = L"txtDoanhThuFrom";
            this->txtDoanhThuFrom->Size = System::Drawing::Size(184, 22);
            this->txtDoanhThuFrom->TabIndex = 18;
            this->txtDoanhThuFrom->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtDoanhThuFrom->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuFrom_Enter);
            this->txtDoanhThuFrom->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuFrom_Leave);
            // 
            // txtDoanhThuTo
            // 
            this->txtDoanhThuTo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->txtDoanhThuTo->ForeColor = System::Drawing::Color::Gray;
            this->txtDoanhThuTo->Location = System::Drawing::Point(958, 95);
            this->txtDoanhThuTo->Name = L"txtDoanhThuTo";
            this->txtDoanhThuTo->Size = System::Drawing::Size(155, 22);
            this->txtDoanhThuTo->TabIndex = 17;
            this->txtDoanhThuTo->Text = L"dd/MM/yyyy hoặc yyyy";
            this->txtDoanhThuTo->Enter += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuTo_Enter);
            this->txtDoanhThuTo->Leave += gcnew System::EventHandler(this, &AddStatiticForm::txtDoanhThuTo_Leave);
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(837, 95);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(89, 23);
            this->label1->TabIndex = 16;
            this->label1->Text = L"Kết thúc:";
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(169, 95);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(84, 23);
            this->label2->TabIndex = 15;
            this->label2->Text = L"Bắt đầu:";
            // 
            // chartDoanhThu
            // 
            this->chartDoanhThu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            chartArea2->Name = L"ChartArea1";
            this->chartDoanhThu->ChartAreas->Add(chartArea2);
            legend2->Name = L"Legend1";
            this->chartDoanhThu->Legends->Add(legend2);
            this->chartDoanhThu->Location = System::Drawing::Point(135, 198);
            this->chartDoanhThu->Name = L"chartDoanhThu";
            this->chartDoanhThu->Size = System::Drawing::Size(1016, 510);
            this->chartDoanhThu->TabIndex = 14;
            this->chartDoanhThu->Text = L"chart1";
            // 
            // btnLocDoanhThu
            // 
            this->btnLocDoanhThu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->btnLocDoanhThu->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->btnLocDoanhThu->FlatAppearance->BorderSize = 0;
            this->btnLocDoanhThu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLocDoanhThu->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLocDoanhThu->Location = System::Drawing::Point(525, 78);
            this->btnLocDoanhThu->Name = L"btnLocDoanhThu";
            this->btnLocDoanhThu->Size = System::Drawing::Size(226, 50);
            this->btnLocDoanhThu->TabIndex = 13;
            this->btnLocDoanhThu->Text = L"Lọc";
            this->btnLocDoanhThu->UseVisualStyleBackColor = false;
            this->btnLocDoanhThu->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnLocDoanhThu_Click);
            // 
            // AddStatiticForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->txtDoanhThuFrom);
            this->Controls->Add(this->txtDoanhThuTo);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->btnLocDoanhThu);
            this->Controls->Add(this->chartDoanhThu);
            this->Name = L"AddStatiticForm";
            this->Size = System::Drawing::Size(1293, 864);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartDoanhThu))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private:
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
    };
}