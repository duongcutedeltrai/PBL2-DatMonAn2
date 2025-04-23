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

	/// <summary>
	/// Summary for addBaoCaoNhanVienForm
	/// </summary>
	public ref class AddBaoCaoNhanVienForm : public System::Windows::Forms::UserControl
	{
	public:
		AddBaoCaoNhanVienForm(void)
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
		~AddBaoCaoNhanVienForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ billFilePath;
	private: System::String^ foodFilePath;
	private: System::Windows::Forms::TextBox^ txtNhanVienFrom;
	protected:
	private: System::Windows::Forms::TextBox^ txtNhanVienTo;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnLocDoanhThuNhanVien;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartNhanVien;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->txtNhanVienFrom = (gcnew System::Windows::Forms::TextBox());
			this->txtNhanVienTo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnLocDoanhThuNhanVien = (gcnew System::Windows::Forms::Button());
			this->chartNhanVien = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartNhanVien))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNhanVienFrom
			// 
			this->txtNhanVienFrom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->txtNhanVienFrom->ForeColor = System::Drawing::Color::Gray;
			this->txtNhanVienFrom->Location = System::Drawing::Point(297, 162);
			this->txtNhanVienFrom->Name = L"txtNhanVienFrom";
			this->txtNhanVienFrom->Size = System::Drawing::Size(184, 22);
			this->txtNhanVienFrom->TabIndex = 30;
			this->txtNhanVienFrom->Text = L"dd/MM/yyyy hoặc yyyy";
			this->txtNhanVienFrom->Enter += gcnew System::EventHandler(this, &AddBaoCaoNhanVienForm::txtNhanVienFrom_Enter);
			this->txtNhanVienFrom->Leave += gcnew System::EventHandler(this, &AddBaoCaoNhanVienForm::txtNhanVienFrom_Leave);
			// 
			// txtNhanVienTo
			// 
			this->txtNhanVienTo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->txtNhanVienTo->ForeColor = System::Drawing::Color::Gray;
			this->txtNhanVienTo->Location = System::Drawing::Point(823, 162);
			this->txtNhanVienTo->Name = L"txtNhanVienTo";
			this->txtNhanVienTo->Size = System::Drawing::Size(155, 22);
			this->txtNhanVienTo->TabIndex = 29;
			this->txtNhanVienTo->Text = L"dd/MM/yyyy hoặc yyyy";
			this->txtNhanVienTo->Enter += gcnew System::EventHandler(this, &AddBaoCaoNhanVienForm::txtNhanVienTo_Enter);
			this->txtNhanVienTo->Leave += gcnew System::EventHandler(this, &AddBaoCaoNhanVienForm::txtNhanVienTo_Leave);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(728, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 23);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Kết thúc:";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(191, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 23);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Bắt đầu:";
			// 
			// btnLocDoanhThuNhanVien
			// 
			this->btnLocDoanhThuNhanVien->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnLocDoanhThuNhanVien->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLocDoanhThuNhanVien->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLocDoanhThuNhanVien->FlatAppearance->BorderSize = 0;
			this->btnLocDoanhThuNhanVien->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLocDoanhThuNhanVien->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLocDoanhThuNhanVien->Location = System::Drawing::Point(496, 145);
			this->btnLocDoanhThuNhanVien->Name = L"btnLocDoanhThuNhanVien";
			this->btnLocDoanhThuNhanVien->Size = System::Drawing::Size(226, 50);
			this->btnLocDoanhThuNhanVien->TabIndex = 26;
			this->btnLocDoanhThuNhanVien->Text = L"Lọc";
			this->btnLocDoanhThuNhanVien->UseVisualStyleBackColor = false;
			this->btnLocDoanhThuNhanVien->Click += gcnew System::EventHandler(this, &AddBaoCaoNhanVienForm::btnLocDoanhThuNhanVien_Click);
			// 
			// chartNhanVien
			// 
			this->chartNhanVien->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			chartArea1->Name = L"ChartArea1";
			this->chartNhanVien->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartNhanVien->Legends->Add(legend1);
			this->chartNhanVien->Location = System::Drawing::Point(135, 214);
			this->chartNhanVien->Name = L"chartNhanVien";
			this->chartNhanVien->Size = System::Drawing::Size(855, 462);
			this->chartNhanVien->TabIndex = 25;
			this->chartNhanVien->Text = L"chart1";
			// 
			// AddBaoCaoNhanVienForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->txtNhanVienFrom);
			this->Controls->Add(this->txtNhanVienTo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnLocDoanhThuNhanVien);
			this->Controls->Add(this->chartNhanVien);
			this->Name = L"AddBaoCaoNhanVienForm";
			this->Size = System::Drawing::Size(1180, 753);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartNhanVien))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
