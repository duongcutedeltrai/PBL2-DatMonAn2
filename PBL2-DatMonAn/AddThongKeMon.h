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
	/// Summary for AddThongKeMon
	/// </summary>
	public ref class AddThongKeMon : public System::Windows::Forms::UserControl
	{
	public:
		AddThongKeMon(void)
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
		~AddThongKeMon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ billFilePath;
	private: System::String^ foodFilePath;
	private: System::Windows::Forms::TextBox^ txtDateFrom;
	protected:
	private: System::Windows::Forms::TextBox^ txtDateTo;
	private: System::Windows::Forms::Label^ lblDateTo;
	private: System::Windows::Forms::Label^ lblDateFrom;
	private: System::Windows::Forms::Button^ btnLocSoSanh;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartSoSanh;

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
			this->txtDateFrom = (gcnew System::Windows::Forms::TextBox());
			this->txtDateTo = (gcnew System::Windows::Forms::TextBox());
			this->lblDateTo = (gcnew System::Windows::Forms::Label());
			this->lblDateFrom = (gcnew System::Windows::Forms::Label());
			this->btnLocSoSanh = (gcnew System::Windows::Forms::Button());
			this->chartSoSanh = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSoSanh))->BeginInit();
			this->SuspendLayout();
			// 
			// txtDateFrom
			// 
			this->txtDateFrom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtDateFrom->ForeColor = System::Drawing::Color::Gray;
			this->txtDateFrom->Location = System::Drawing::Point(235, 252);
			this->txtDateFrom->Name = L"txtDateFrom";
			this->txtDateFrom->Size = System::Drawing::Size(184, 22);
			this->txtDateFrom->TabIndex = 18;
			this->txtDateFrom->Text = L"dd/MM/yyyy hoặc yyyy";
			this->txtDateFrom->Enter += gcnew System::EventHandler(this, &AddThongKeMon::txtDateFrom_Enter);
			this->txtDateFrom->Leave += gcnew System::EventHandler(this, &AddThongKeMon::txtDateFrom_Leave);
			// 
			// txtDateTo
			// 
			this->txtDateTo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtDateTo->ForeColor = System::Drawing::Color::Gray;
			this->txtDateTo->Location = System::Drawing::Point(934, 249);
			this->txtDateTo->Name = L"txtDateTo";
			this->txtDateTo->Size = System::Drawing::Size(155, 22);
			this->txtDateTo->TabIndex = 17;
			this->txtDateTo->Text = L"dd/MM/yyyy hoặc yyyy";
			this->txtDateTo->Enter += gcnew System::EventHandler(this, &AddThongKeMon::txtDateTo_Enter);
			this->txtDateTo->Leave += gcnew System::EventHandler(this, &AddThongKeMon::txtDateTo_Leave);
			// 
			// lblDateTo
			// 
			this->lblDateTo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblDateTo->AutoSize = true;
			this->lblDateTo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDateTo->Location = System::Drawing::Point(813, 249);
			this->lblDateTo->Name = L"lblDateTo";
			this->lblDateTo->Size = System::Drawing::Size(89, 23);
			this->lblDateTo->TabIndex = 16;
			this->lblDateTo->Text = L"Kết thúc:";
			// 
			// lblDateFrom
			// 
			this->lblDateFrom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblDateFrom->AutoSize = true;
			this->lblDateFrom->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDateFrom->Location = System::Drawing::Point(145, 249);
			this->lblDateFrom->Name = L"lblDateFrom";
			this->lblDateFrom->Size = System::Drawing::Size(84, 23);
			this->lblDateFrom->TabIndex = 15;
			this->lblDateFrom->Text = L"Bắt đầu:";
			// 
			// btnLocSoSanh
			// 
			this->btnLocSoSanh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnLocSoSanh->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLocSoSanh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLocSoSanh->FlatAppearance->BorderSize = 0;
			this->btnLocSoSanh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLocSoSanh->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLocSoSanh->Location = System::Drawing::Point(504, 232);
			this->btnLocSoSanh->Name = L"btnLocSoSanh";
			this->btnLocSoSanh->Size = System::Drawing::Size(226, 50);
			this->btnLocSoSanh->TabIndex = 13;
			this->btnLocSoSanh->Text = L"Lọc";
			this->btnLocSoSanh->UseVisualStyleBackColor = false;
			this->btnLocSoSanh->Click += gcnew System::EventHandler(this, &AddThongKeMon::btnLocSoSanh_Click);
			// 
			// chartSoSanh
			// 
			this->chartSoSanh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			chartArea1->Name = L"ChartArea1";
			this->chartSoSanh->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartSoSanh->Legends->Add(legend1);
			this->chartSoSanh->Location = System::Drawing::Point(111, 322);
			this->chartSoSanh->Name = L"chartSoSanh";
			this->chartSoSanh->Size = System::Drawing::Size(1016, 393);
			this->chartSoSanh->TabIndex = 14;
			this->chartSoSanh->Text = L"chart1";
			// 
			// AddThongKeMon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnLocSoSanh);
			this->Controls->Add(this->txtDateFrom);
			this->Controls->Add(this->txtDateTo);
			this->Controls->Add(this->lblDateTo);
			this->Controls->Add(this->lblDateFrom);
			this->Controls->Add(this->chartSoSanh);
			this->Name = L"AddThongKeMon";
			this->Size = System::Drawing::Size(1166, 778);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSoSanh))->EndInit();
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

		private: System::Void btnLocSoSanh_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
