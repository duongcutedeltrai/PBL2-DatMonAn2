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
	/// Summary for AddStatiticForm
	/// </summary>
	public ref class AddStatiticForm : public System::Windows::Forms::UserControl
	{
	public:
		AddStatiticForm(void)
		{
			InitializeComponent();
			billFilePath = "Bill.txt";
			foodFilePath = "monan.txt";

			dtpFrom->Value = DateTime::Now.AddDays(-1);
			dtpTo->Value = DateTime::Now;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddStatiticForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ billFilePath;
		   System::String^ foodFilePath;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartMonAnBanChayNhat;
	private: System::Windows::Forms::Button^ btnLocSoLuongBanRa;
	private: System::Windows::Forms::Label^ lblTo;
	private: System::Windows::Forms::Label^ lblFrom;
	private: System::Windows::Forms::DateTimePicker^ dtpTo;
	private: System::Windows::Forms::DateTimePicker^ dtpFrom;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartSoSanh;
	private: System::Windows::Forms::Button^ btnLocSoSanh;
	private: System::Windows::Forms::ComboBox^ cbBoxMonthBefore;

	private: System::Windows::Forms::ComboBox^ cbBoxMonthAfter;








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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblTo = (gcnew System::Windows::Forms::Label());
			this->btnLocSoLuongBanRa = (gcnew System::Windows::Forms::Button());
			this->lblFrom = (gcnew System::Windows::Forms::Label());
			this->dtpTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->chartMonAnBanChayNhat = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartSoSanh = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btnLocSoSanh = (gcnew System::Windows::Forms::Button());
			this->cbBoxMonthBefore = (gcnew System::Windows::Forms::ComboBox());
			this->cbBoxMonthAfter = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMonAnBanChayNhat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSoSanh))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblTo);
			this->panel1->Controls->Add(this->btnLocSoLuongBanRa);
			this->panel1->Controls->Add(this->lblFrom);
			this->panel1->Controls->Add(this->dtpTo);
			this->panel1->Controls->Add(this->dtpFrom);
			this->panel1->Controls->Add(this->chartMonAnBanChayNhat);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1397, 366);
			this->panel1->TabIndex = 0;
			// 
			// lblTo
			// 
			this->lblTo->AutoSize = true;
			this->lblTo->Location = System::Drawing::Point(619, 19);
			this->lblTo->Name = L"lblTo";
			this->lblTo->Size = System::Drawing::Size(67, 16);
			this->lblTo->TabIndex = 5;
			this->lblTo->Text = L"Đến ngày:";
			// 
			// btnLocSoLuongBanRa
			// 
			this->btnLocSoLuongBanRa->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLocSoLuongBanRa->FlatAppearance->BorderSize = 0;
			this->btnLocSoLuongBanRa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLocSoLuongBanRa->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLocSoLuongBanRa->Location = System::Drawing::Point(1050, 133);
			this->btnLocSoLuongBanRa->Name = L"btnLocSoLuongBanRa";
			this->btnLocSoLuongBanRa->Size = System::Drawing::Size(226, 50);
			this->btnLocSoLuongBanRa->TabIndex = 1;
			this->btnLocSoLuongBanRa->Text = L"Lọc tổng số lượng";
			this->btnLocSoLuongBanRa->UseVisualStyleBackColor = false;
			this->btnLocSoLuongBanRa->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnLocSoLuongBanRa_Click);
			// 
			// lblFrom
			// 
			this->lblFrom->AutoSize = true;
			this->lblFrom->Location = System::Drawing::Point(64, 19);
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(56, 16);
			this->lblFrom->TabIndex = 4;
			this->lblFrom->Text = L"Bắt đầu:";
			// 
			// dtpTo
			// 
			this->dtpTo->CustomFormat = L"dd/MM/yyyy";
			this->dtpTo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpTo->Location = System::Drawing::Point(709, 13);
			this->dtpTo->Name = L"dtpTo";
			this->dtpTo->Size = System::Drawing::Size(200, 22);
			this->dtpTo->TabIndex = 3;
			// 
			// dtpFrom
			// 
			this->dtpFrom->CustomFormat = L"  dd/MM/yyyy";
			this->dtpFrom->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFrom->Location = System::Drawing::Point(160, 13);
			this->dtpFrom->Name = L"dtpFrom";
			this->dtpFrom->Size = System::Drawing::Size(200, 22);
			this->dtpFrom->TabIndex = 2;
			// 
			// chartMonAnBanChayNhat
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartMonAnBanChayNhat->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartMonAnBanChayNhat->Legends->Add(legend1);
			this->chartMonAnBanChayNhat->Location = System::Drawing::Point(32, 49);
			this->chartMonAnBanChayNhat->Name = L"chartMonAnBanChayNhat";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Số lượng";
			this->chartMonAnBanChayNhat->Series->Add(series1);
			this->chartMonAnBanChayNhat->Size = System::Drawing::Size(1181, 304);
			this->chartMonAnBanChayNhat->TabIndex = 0;
			this->chartMonAnBanChayNhat->Text = L"chart1";
			// 
			// chartSoSanh
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartSoSanh->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartSoSanh->Legends->Add(legend2);
			this->chartSoSanh->Location = System::Drawing::Point(35, 437);
			this->chartSoSanh->Name = L"chartSoSanh";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Số lượng";
			this->chartSoSanh->Series->Add(series2);
			this->chartSoSanh->Size = System::Drawing::Size(1181, 304);
			this->chartSoSanh->TabIndex = 6;
			this->chartSoSanh->Text = L"chart1";
			// 
			// btnLocSoSanh
			// 
			this->btnLocSoSanh->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLocSoSanh->FlatAppearance->BorderSize = 0;
			this->btnLocSoSanh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLocSoSanh->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLocSoSanh->Location = System::Drawing::Point(1053, 582);
			this->btnLocSoSanh->Name = L"btnLocSoSanh";
			this->btnLocSoSanh->Size = System::Drawing::Size(226, 50);
			this->btnLocSoSanh->TabIndex = 6;
			this->btnLocSoSanh->Text = L"Tương quan giữa các món ";
			this->btnLocSoSanh->UseVisualStyleBackColor = false;
			this->btnLocSoSanh->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnLocSoSanh_Click);
			// 
			// cbBoxMonthBefore
			// 
			this->cbBoxMonthBefore->FormattingEnabled = true;
			this->cbBoxMonthBefore->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01/2025", L"02/2025", L"03/2025", L"04/2025",
					L"05/2025", L"06/2025", L"07/2025", L"08/2025", L"09/2025", L"10/2025", L"11/2025", L"12/2025"
			});
			this->cbBoxMonthBefore->Location = System::Drawing::Point(80, 392);
			this->cbBoxMonthBefore->Name = L"cbBoxMonthBefore";
			this->cbBoxMonthBefore->Size = System::Drawing::Size(121, 24);
			this->cbBoxMonthBefore->TabIndex = 7;
			// 
			// cbBoxMonthAfter
			// 
			this->cbBoxMonthAfter->FormattingEnabled = true;
			this->cbBoxMonthAfter->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01/2025", L"02/2025", L"03/2025", L"04/2025",
					L"05/2025", L"06/2025", L"07/2025", L"08/2025", L"09/2025", L"10/2025", L"11/2025", L"12/2025"
			});
			this->cbBoxMonthAfter->Location = System::Drawing::Point(483, 392);
			this->cbBoxMonthAfter->Name = L"cbBoxMonthAfter";
			this->cbBoxMonthAfter->Size = System::Drawing::Size(121, 24);
			this->cbBoxMonthAfter->TabIndex = 8;
			// 
			// AddStatiticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->cbBoxMonthAfter);
			this->Controls->Add(this->cbBoxMonthBefore);
			this->Controls->Add(this->btnLocSoSanh);
			this->Controls->Add(this->chartSoSanh);
			this->Controls->Add(this->panel1);
			this->Name = L"AddStatiticForm";
			this->Size = System::Drawing::Size(1405, 864);
			this->Load += gcnew System::EventHandler(this, &AddStatiticForm::AddStatiticForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMonAnBanChayNhat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSoSanh))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddStatiticForm_Load(System::Object^ sender, System::EventArgs^ e) {
		VeBieuDoSoLuongMonAn();
		CapNhatComBoBox();
		SoSanhCacMonAn();
	}
	private:
		System::Void VeBieuDoSoLuongMonAn() {
			// Xóa dữ liệu cũ trong series
			this->chartMonAnBanChayNhat->Series[L"Số lượng"]->Points->Clear();

			// Đọc khoảng thời gian từ DateTimePicker
			DateTime fromDate = dtpFrom->Value.Date;
			DateTime toDate = dtpTo->Value.Date.AddDays(1).AddSeconds(-1); // Bao gồm cả ngày cuối cùng

			// Kiểm tra khoảng thời gian hợp lệ
			if (fromDate > toDate) {
				MessageBox::Show(L"Ngày bắt đầu phải nhỏ hơn hoặc bằng ngày kết thúc!", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Đọc danh sách hóa đơn từ bill.txt
			List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);

			// Lọc hóa đơn theo khoảng thời gian
			List<PayMent^>^ danhSachHoaDonLoc = gcnew List<PayMent^>();
			for each (PayMent ^ bill in danhSachHoaDon) {
				if (bill->ThoiGianThanhToan >= fromDate && bill->ThoiGianThanhToan <= toDate) {
					danhSachHoaDonLoc->Add(bill);
				}
			}

			// Tính tổng số lượng bán ra của từng món
			Dictionary<String^, int>^ soLuongMonAn = gcnew Dictionary<String^, int>();

			// Đọc danh sách món ăn từ monan.txt
			List<MonAn^>^ danhSachMonAn = MonAn::DocDanhSachMonAn(foodFilePath);
			if (danhSachMonAn == nullptr || danhSachMonAn->Count == 0) {
				MessageBox::Show(L"Không tìm thấy danh sách món ăn trong file monan.txt!", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Khởi tạo số lượng bán ra của tất cả món ăn là 0
			for each (MonAn ^ mon in danhSachMonAn) {
				soLuongMonAn[mon->TenMon] = 0;
			}

			// Tính tổng số lượng từ các hóa đơn đã lọc
			for each (PayMent ^ bill in danhSachHoaDonLoc) {
				for each (MonAn ^ mon in bill->DanhSachMon) {
					if (soLuongMonAn->ContainsKey(mon->TenMon)) {
						soLuongMonAn[mon->TenMon] += mon->SoLuong;
					}
				}
			}

			// Kiểm tra xem có dữ liệu để hiển thị không
			bool coDuLieu = false;
			for each (auto pair in soLuongMonAn) {
				if (pair.Value > 0) { // Sửa pair->Value thành pair.Value
					coDuLieu = true;
					break;
				}
			}

			if (!coDuLieu) {
				MessageBox::Show(L"Không có dữ liệu để hiển thị trong khoảng thời gian đã chọn!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Thêm dữ liệu vào biểu đồ
			for each (auto pair in soLuongMonAn) {
				this->chartMonAnBanChayNhat->Series[L"Số lượng"]->Points->AddXY(pair.Key, pair.Value); 
			}

			// Tùy chỉnh biểu đồ
			this->chartMonAnBanChayNhat->ChartAreas["ChartArea1"]->AxisX->Title = L"Tên món ăn";
			this->chartMonAnBanChayNhat->ChartAreas["ChartArea1"]->AxisY->Title = L"Số lượng món ăn đã bán";
			this->chartMonAnBanChayNhat->ChartAreas["ChartArea1"]->AxisY->Minimum = 0; // Bắt đầu từ 0
			this->chartMonAnBanChayNhat->ChartAreas["ChartArea1"]->AxisX->LabelStyle->Angle = 45; // Xoay nhãn trục X
			this->chartMonAnBanChayNhat->ChartAreas["ChartArea1"]->AxisX->Interval = 1; // Hiển thị tất cả nhãn

			// Tùy chỉnh đường và điểm
			this->chartMonAnBanChayNhat->Series[L"Số lượng"]->Color = System::Drawing::Color::Blue; // Màu đường
			this->chartMonAnBanChayNhat->Series[L"Số lượng"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle; // Đánh dấu điểm
			this->chartMonAnBanChayNhat->Series[L"Số lượng"]->MarkerSize = 8;
			this->chartMonAnBanChayNhat->Series[L"Số lượng"]->MarkerColor = System::Drawing::Color::Blue;
		}



		private: System::Void SoSanhCacMonAn() {
			// Xóa dữ liệu cũ trên biểu đồ
			this->chartSoSanh->Series->Clear();

			// Tạo hai Series mới cho hai tháng
			this->chartSoSanh->Series->Add(L"Tháng sau");
			this->chartSoSanh->Series[L"Tháng sau"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			this->chartSoSanh->Series[L"Tháng sau"]->Color = System::Drawing::Color::Blue;
			this->chartSoSanh->Series[L"Tháng sau"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			this->chartSoSanh->Series[L"Tháng sau"]->MarkerSize = 8;
			this->chartSoSanh->Series[L"Tháng sau"]->MarkerColor = System::Drawing::Color::Blue;

			this->chartSoSanh->Series->Add(L"Tháng trước");
			this->chartSoSanh->Series[L"Tháng trước"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			this->chartSoSanh->Series[L"Tháng trước"]->Color = System::Drawing::Color::Red;
			this->chartSoSanh->Series[L"Tháng trước"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			this->chartSoSanh->Series[L"Tháng trước"]->MarkerSize = 8;
			this->chartSoSanh->Series[L"Tháng trước"]->MarkerColor = System::Drawing::Color::Red;

			// Đọc danh sách hóa đơn từ bill.txt
			List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);
			if (danhSachHoaDon->Count == 0) {
				MessageBox::Show(L"Không có hóa đơn nào để so sánh!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Lọc hóa đơn theo tháng đã chọn
			String^ selectedMonthAfter = cbBoxMonthAfter->SelectedItem->ToString();
			String^ selectedMonthBefore = cbBoxMonthBefore->SelectedItem->ToString();
			int monthAfter = Int32::Parse(selectedMonthAfter->Substring(0, 2));
			int yearAfter = Int32::Parse(selectedMonthAfter->Substring(3, 4));
			int monthBefore = Int32::Parse(selectedMonthBefore->Substring(0, 2));
			int yearBefore = Int32::Parse(selectedMonthBefore->Substring(3, 4));
			DateTime startDateAfter = DateTime(yearAfter, monthAfter, 1);
			DateTime endDateAfter = startDateAfter.AddMonths(1).AddDays(-1);
			DateTime startDateBefore = DateTime(yearBefore, monthBefore, 1);
			DateTime endDateBefore = startDateBefore.AddMonths(1).AddDays(-1);
			List<PayMent^>^ danhSachHoaDonLocAfter = gcnew List<PayMent^>();
			List<PayMent^>^ danhSachHoaDonLocBefore = gcnew List<PayMent^>();
			for each (PayMent ^ bill in danhSachHoaDon) {
				if (bill->ThoiGianThanhToan >= startDateAfter && bill->ThoiGianThanhToan <= endDateAfter) {
					danhSachHoaDonLocAfter->Add(bill);
				}
				if (bill->ThoiGianThanhToan >= startDateBefore && bill->ThoiGianThanhToan <= endDateBefore) {
					danhSachHoaDonLocBefore->Add(bill);
				}
			}

			// Kiểm tra xem có hóa đơn nào trong tháng đã chọn không
			if (danhSachHoaDonLocAfter->Count == 0 || danhSachHoaDonLocBefore->Count == 0) {
				MessageBox::Show(L"Không có hóa đơn nào trong tháng đã chọn!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Tính tổng số lượng bán ra của từng món trong tháng đã chọn
			Dictionary<String^, int>^ soLuongMonAnAfter = gcnew Dictionary<String^, int>();
			Dictionary<String^, int>^ soLuongMonAnBefore = gcnew Dictionary<String^, int>();

			// Đọc danh sách món ăn từ monan.txt
			List<MonAn^>^ danhSachMonAn = MonAn::DocDanhSachMonAn(foodFilePath);
			if (danhSachMonAn == nullptr || danhSachMonAn->Count == 0) {
				MessageBox::Show(L"Không tìm thấy danh sách món ăn trong file monan.txt!", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Khởi tạo số lượng bán ra của tất cả món ăn là 0
			for each (MonAn ^ mon in danhSachMonAn) {
				soLuongMonAnAfter[mon->TenMon] = 0;
				soLuongMonAnBefore[mon->TenMon] = 0;
			}

			// Tính tổng số lượng từ các hóa đơn đã lọc
			for each (PayMent ^ bill in danhSachHoaDonLocAfter) {
				for each (MonAn ^ mon in bill->DanhSachMon) {
					if (soLuongMonAnAfter->ContainsKey(mon->TenMon)) {
						soLuongMonAnAfter[mon->TenMon] += mon->SoLuong;
					}
				}
			}
			for each (PayMent ^ bill in danhSachHoaDonLocBefore) {
				for each (MonAn ^ mon in bill->DanhSachMon) {
					if (soLuongMonAnBefore->ContainsKey(mon->TenMon)) {
						soLuongMonAnBefore[mon->TenMon] += mon->SoLuong;
					}
				}
			}

			// Kiểm tra xem có dữ liệu để hiển thị không
			bool coDuLieu = false;
			for each (auto pair in soLuongMonAnAfter) {
				if (pair.Value > 0) {
					coDuLieu = true;
					break;
				}
			}
			if (!coDuLieu) {
				MessageBox::Show(L"Không có dữ liệu để hiển thị trong tháng đã chọn!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Thêm dữ liệu vào biểu đồ
			for each (auto pair in soLuongMonAnAfter) {
				this->chartSoSanh->Series[L"Tháng sau"]->Points->AddXY(pair.Key, pair.Value);
				// Đồng thời thêm dữ liệu cho tháng trước với cùng tên món
				int soLuongBefore = soLuongMonAnBefore->ContainsKey(pair.Key) ? soLuongMonAnBefore[pair.Key] : 0;
				this->chartSoSanh->Series[L"Tháng trước"]->Points->AddXY(pair.Key, soLuongBefore);
			}

			// Tùy chỉnh biểu đồ
			this->chartSoSanh->ChartAreas["ChartArea1"]->AxisX->Title = L"Tên món ăn";
			this->chartSoSanh->ChartAreas["ChartArea1"]->AxisY->Title = L"Số lượng món ăn đã bán";
			this->chartSoSanh->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
			this->chartSoSanh->ChartAreas["ChartArea1"]->AxisX->LabelStyle->Angle = 45;
			this->chartSoSanh->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
		}

		private: System::Void CapNhatComBoBox() {
			this->cbBoxMonthAfter->Items->Clear();
			this->cbBoxMonthBefore->Items->Clear();

			int startYear = 2025;
			int currentYear = DateTime::Now.Year;
			int currentMonth = DateTime::Now.Month;

			for (int year = startYear; year <= currentYear; year++) {
				for (int month = 1; month <= 12; month++) {
					if (year == currentYear && month > currentMonth) {
						break;
					}
					this->cbBoxMonthAfter->Items->Add(month.ToString("D2") + "/" + year);
					this->cbBoxMonthBefore->Items->Add(month.ToString("D2") + "/" + year);
				}
			}

			if (cbBoxMonthAfter->Items->Count > 0) {
				cbBoxMonthAfter->SelectedIndex = cbBoxMonthAfter->Items->Count - 1; // Chọn tháng hiện tại
			}

			if (cbBoxMonthBefore->Items->Count > 0) {
				cbBoxMonthBefore->SelectedIndex = cbBoxMonthBefore->Items->Count - 1; // Chọn tháng hiện tại
			}
		}
	private: System::Void btnLocSoLuongBanRa_Click(System::Object^ sender, System::EventArgs^ e) {
		VeBieuDoSoLuongMonAn();
	}
private: System::Void btnLocSoSanh_Click(System::Object^ sender, System::EventArgs^ e) {
	SoSanhCacMonAn();
}
};
}