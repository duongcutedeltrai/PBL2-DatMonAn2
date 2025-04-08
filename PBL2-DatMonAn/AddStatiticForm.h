#pragma once
#include "PayMent.h"
#include "MonAn.h"

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnDoanhThu;
	private: System::Windows::Forms::Button^ btnDoanhThu;
	private: System::Windows::Forms::Label^ lblDoanhThu;
	private: System::Windows::Forms::Panel^ pnDateTimeInDoanhThu;
	private: System::Windows::Forms::DateTimePicker^ dateTimeDoanhThuTo;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ pnDateTimeFromDoanhThu;
	private: System::Windows::Forms::DateTimePicker^ dateTimeDoanhThuFrom;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartDoanhThu;
	private: System::Windows::Forms::Panel^ pnStatiticSTaff;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartStatiticStaff;
	private: System::Windows::Forms::Button^ btnStatiticStaff;
	private: System::Windows::Forms::Label^ lblStaffStatitic;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DateTimePicker^ dateTimeFormStatiticIn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ pnStaffStatitics;
	private: System::Windows::Forms::DateTimePicker^ dateTimeStatiticStaffFrom;
	private: System::Windows::Forms::Label^ label6;
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
			this->pnStatiticSTaff = (gcnew System::Windows::Forms::Panel());
			this->chartStatiticStaff = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btnStatiticStaff = (gcnew System::Windows::Forms::Button());
			this->lblStaffStatitic = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dateTimeFormStatiticIn = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pnStaffStatitics = (gcnew System::Windows::Forms::Panel());
			this->dateTimeStatiticStaffFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pnDoanhThu = (gcnew System::Windows::Forms::Panel());
			this->chartDoanhThu = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btnDoanhThu = (gcnew System::Windows::Forms::Button());
			this->lblDoanhThu = (gcnew System::Windows::Forms::Label());
			this->pnDateTimeInDoanhThu = (gcnew System::Windows::Forms::Panel());
			this->dateTimeDoanhThuTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnDateTimeFromDoanhThu = (gcnew System::Windows::Forms::Panel());
			this->dateTimeDoanhThuFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->pnStatiticSTaff->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartStatiticStaff))->BeginInit();
			this->panel3->SuspendLayout();
			this->pnStaffStatitics->SuspendLayout();
			this->pnDoanhThu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartDoanhThu))->BeginInit();
			this->pnDateTimeInDoanhThu->SuspendLayout();
			this->pnDateTimeFromDoanhThu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pnStatiticSTaff);
			this->panel1->Controls->Add(this->pnDoanhThu);
			this->panel1->Location = System::Drawing::Point(0, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1055, 612);
			this->panel1->TabIndex = 1;
			// 
			// pnStatiticSTaff
			// 
			this->pnStatiticSTaff->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pnStatiticSTaff->Controls->Add(this->chartStatiticStaff);
			this->pnStatiticSTaff->Controls->Add(this->btnStatiticStaff);
			this->pnStatiticSTaff->Controls->Add(this->lblStaffStatitic);
			this->pnStatiticSTaff->Controls->Add(this->panel3);
			this->pnStatiticSTaff->Controls->Add(this->pnStaffStatitics);
			this->pnStatiticSTaff->Location = System::Drawing::Point(35, 304);
			this->pnStatiticSTaff->Name = L"pnStatiticSTaff";
			this->pnStatiticSTaff->Size = System::Drawing::Size(998, 305);
			this->pnStatiticSTaff->TabIndex = 5;
			// 
			// chartStatiticStaff
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartStatiticStaff->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartStatiticStaff->Legends->Add(legend1);
			this->chartStatiticStaff->Location = System::Drawing::Point(0, 95);
			this->chartStatiticStaff->Name = L"chartStatiticStaff";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Doanh thu nhân viên";
			this->chartStatiticStaff->Series->Add(series1);
			this->chartStatiticStaff->Size = System::Drawing::Size(998, 184);
			this->chartStatiticStaff->TabIndex = 6;
			this->chartStatiticStaff->Text = L"chart1";
			// 
			// btnStatiticStaff
			// 
			this->btnStatiticStaff->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStatiticStaff->Location = System::Drawing::Point(771, 45);
			this->btnStatiticStaff->Name = L"btnStatiticStaff";
			this->btnStatiticStaff->Size = System::Drawing::Size(133, 44);
			this->btnStatiticStaff->TabIndex = 4;
			this->btnStatiticStaff->Text = L"Lọc";
			this->btnStatiticStaff->UseVisualStyleBackColor = true;
			this->btnStatiticStaff->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnStatiticStaff_Click);
			// 
			// lblStaffStatitic
			// 
			this->lblStaffStatitic->AutoSize = true;
			this->lblStaffStatitic->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStaffStatitic->Location = System::Drawing::Point(16, 15);
			this->lblStaffStatitic->Name = L"lblStaffStatitic";
			this->lblStaffStatitic->Size = System::Drawing::Size(178, 23);
			this->lblStaffStatitic->TabIndex = 3;
			this->lblStaffStatitic->Text = L"Thống kê nhân viên";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dateTimeFormStatiticIn);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(368, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(297, 44);
			this->panel3->TabIndex = 2;
			// 
			// dateTimeFormStatiticIn
			// 
			this->dateTimeFormStatiticIn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimeFormStatiticIn->CustomFormat = L"   dd/MM/yyyy";
			this->dateTimeFormStatiticIn->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeFormStatiticIn->Location = System::Drawing::Point(99, 8);
			this->dateTimeFormStatiticIn->Name = L"dateTimeFormStatiticIn";
			this->dateTimeFormStatiticIn->Size = System::Drawing::Size(195, 22);
			this->dateTimeFormStatiticIn->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Từ ngày:";
			// 
			// pnStaffStatitics
			// 
			this->pnStaffStatitics->Controls->Add(this->dateTimeStatiticStaffFrom);
			this->pnStaffStatitics->Controls->Add(this->label6);
			this->pnStaffStatitics->Location = System::Drawing::Point(14, 45);
			this->pnStaffStatitics->Name = L"pnStaffStatitics";
			this->pnStaffStatitics->Size = System::Drawing::Size(297, 44);
			this->pnStaffStatitics->TabIndex = 1;
			// 
			// dateTimeStatiticStaffFrom
			// 
			this->dateTimeStatiticStaffFrom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimeStatiticStaffFrom->CustomFormat = L"   dd/MM/yyyy";
			this->dateTimeStatiticStaffFrom->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeStatiticStaffFrom->Location = System::Drawing::Point(99, 8);
			this->dateTimeStatiticStaffFrom->Name = L"dateTimeStatiticStaffFrom";
			this->dateTimeStatiticStaffFrom->Size = System::Drawing::Size(195, 22);
			this->dateTimeStatiticStaffFrom->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Từ ngày:";
			// 
			// pnDoanhThu
			// 
			this->pnDoanhThu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pnDoanhThu->Controls->Add(this->chartDoanhThu);
			this->pnDoanhThu->Controls->Add(this->btnDoanhThu);
			this->pnDoanhThu->Controls->Add(this->lblDoanhThu);
			this->pnDoanhThu->Controls->Add(this->pnDateTimeInDoanhThu);
			this->pnDoanhThu->Controls->Add(this->pnDateTimeFromDoanhThu);
			this->pnDoanhThu->Location = System::Drawing::Point(35, 19);
			this->pnDoanhThu->Name = L"pnDoanhThu";
			this->pnDoanhThu->Size = System::Drawing::Size(998, 279);
			this->pnDoanhThu->TabIndex = 0;
			// 
			// chartDoanhThu
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartDoanhThu->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartDoanhThu->Legends->Add(legend2);
			this->chartDoanhThu->Location = System::Drawing::Point(0, 95);
			this->chartDoanhThu->Name = L"chartDoanhThu";
			this->chartDoanhThu->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Doanh thu";
			this->chartDoanhThu->Series->Add(series2);
			this->chartDoanhThu->Size = System::Drawing::Size(998, 184);
			this->chartDoanhThu->TabIndex = 5;
			this->chartDoanhThu->Text = L"chart1";
			// 
			// btnDoanhThu
			// 
			this->btnDoanhThu->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDoanhThu->Location = System::Drawing::Point(771, 45);
			this->btnDoanhThu->Name = L"btnDoanhThu";
			this->btnDoanhThu->Size = System::Drawing::Size(133, 44);
			this->btnDoanhThu->TabIndex = 4;
			this->btnDoanhThu->Text = L"Lọc";
			this->btnDoanhThu->UseVisualStyleBackColor = true;
			this->btnDoanhThu->Click += gcnew System::EventHandler(this, &AddStatiticForm::btnDoanhThu_Click);
			// 
			// lblDoanhThu
			// 
			this->lblDoanhThu->AutoSize = true;
			this->lblDoanhThu->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDoanhThu->Location = System::Drawing::Point(16, 15);
			this->lblDoanhThu->Name = L"lblDoanhThu";
			this->lblDoanhThu->Size = System::Drawing::Size(184, 23);
			this->lblDoanhThu->TabIndex = 3;
			this->lblDoanhThu->Text = L"Doanh thu bán hàng";
			// 
			// pnDateTimeInDoanhThu
			// 
			this->pnDateTimeInDoanhThu->Controls->Add(this->dateTimeDoanhThuTo);
			this->pnDateTimeInDoanhThu->Controls->Add(this->label3);
			this->pnDateTimeInDoanhThu->Location = System::Drawing::Point(368, 45);
			this->pnDateTimeInDoanhThu->Name = L"pnDateTimeInDoanhThu";
			this->pnDateTimeInDoanhThu->Size = System::Drawing::Size(297, 44);
			this->pnDateTimeInDoanhThu->TabIndex = 2;
			// 
			// dateTimeDoanhThuTo
			// 
			this->dateTimeDoanhThuTo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimeDoanhThuTo->CustomFormat = L"   dd/MM/yyyy";
			this->dateTimeDoanhThuTo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeDoanhThuTo->Location = System::Drawing::Point(99, 8);
			this->dateTimeDoanhThuTo->Name = L"dateTimeDoanhThuTo";
			this->dateTimeDoanhThuTo->Size = System::Drawing::Size(195, 22);
			this->dateTimeDoanhThuTo->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Từ ngày:";
			// 
			// pnDateTimeFromDoanhThu
			// 
			this->pnDateTimeFromDoanhThu->Controls->Add(this->dateTimeDoanhThuFrom);
			this->pnDateTimeFromDoanhThu->Controls->Add(this->label2);
			this->pnDateTimeFromDoanhThu->Location = System::Drawing::Point(14, 45);
			this->pnDateTimeFromDoanhThu->Name = L"pnDateTimeFromDoanhThu";
			this->pnDateTimeFromDoanhThu->Size = System::Drawing::Size(297, 44);
			this->pnDateTimeFromDoanhThu->TabIndex = 1;
			// 
			// dateTimeDoanhThuFrom
			// 
			this->dateTimeDoanhThuFrom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimeDoanhThuFrom->CustomFormat = L"   dd/MM/yyyy";
			this->dateTimeDoanhThuFrom->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeDoanhThuFrom->Location = System::Drawing::Point(99, 8);
			this->dateTimeDoanhThuFrom->Name = L"dateTimeDoanhThuFrom";
			this->dateTimeDoanhThuFrom->Size = System::Drawing::Size(195, 22);
			this->dateTimeDoanhThuFrom->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Từ ngày:";
			// 
			// AddStatiticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"AddStatiticForm";
			this->Size = System::Drawing::Size(1058, 698);
			this->panel1->ResumeLayout(false);
			this->pnStatiticSTaff->ResumeLayout(false);
			this->pnStatiticSTaff->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartStatiticStaff))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->pnStaffStatitics->ResumeLayout(false);
			this->pnStaffStatitics->PerformLayout();
			this->pnDoanhThu->ResumeLayout(false);
			this->pnDoanhThu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartDoanhThu))->EndInit();
			this->pnDateTimeInDoanhThu->ResumeLayout(false);
			this->pnDateTimeInDoanhThu->PerformLayout();
			this->pnDateTimeFromDoanhThu->ResumeLayout(false);
			this->pnDateTimeFromDoanhThu->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void LoadSTatistics() {
		UpdateChartDoanhThu();
		UpdateChartStaff();
	}

		   void UpdateChartDoanhThu() {
			   //doc danh sach hoa don
			   List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);
			   DateTime startDate = dateTimeDoanhThuFrom->Value;
			   DateTime endDate = dateTimeDoanhThuTo->Value;

			   //kiem tra ngay bat dau va ket thuc
			   if (startDate == endDate) {
				   Dictionary<int, double>^ doanhThuTheoGio = gcnew Dictionary<int, double>();

				   //(0h -> 23h)
				   for (int i = 0; i < 24; i++) {
					   doanhThuTheoGio->Add(i, 0.0);
				   }

				   //tinh doanh thu theo gio
				   for each (PayMent ^ bill in danhSachHoaDon) {
					   DateTime billDate = bill->ThoiGianThanhToan.Date;
					   if (billDate == startDate) {
						   int hour = bill->ThoiGianThanhToan.Hour;
						   doanhThuTheoGio[hour] += bill->TongTien;
					   }
				   }

				   chartDoanhThu->Series["Doanh thu"]->Points->Clear();

				   //them du lieu moi
				   for each (KeyValuePair<int, double> ^ entry in doanhThuTheoGio) {
					   if (entry->Value > 0) {
						   chartDoanhThu->Series["Doanh thu"]->Points->AddXY(entry->Key.ToString() + ":00", entry->Value);
					   }
				   }

				   // Thêm dữ liệu mới vào biểu đồ (theo giờ)
				   bool hasData = false;
				   for each (KeyValuePair<int, double> ^ entry in doanhThuTheoGio) {
					   if (entry->Value > 0) { // Chỉ hiển thị các giờ có doanh thu
						   int pointIndex = chartDoanhThu->Series["Doanh thu"]->Points->AddXY(entry->Key.ToString() + ":00", entry->Value);
						   chartDoanhThu->Series["Doanh thu"]->Points[pointIndex]->Label = entry->Value.ToString("N0") + " $"; // Hiển thị giá trị trên cột
						   hasData = true;
					   }
				   }

				   //cap nhat tieu de truc x
				   chartDoanhThu->ChartAreas["ChartArea1"]->AxisX->Title = "Thời gian" + startDate.ToString("dd/MM/yyyy");
			   }

			   else {
				   //hien thi doanh thu theo ngay
				   Dictionary<DateTime, double>^ doanhThuTheoNgay = gcnew Dictionary<DateTime, double>();
				   for each (PayMent ^ bill in danhSachHoaDon) {
					   DateTime billDate = bill->ThoiGianThanhToan.Date;
					   if (billDate >= startDate && billDate <= endDate) {
						   if (doanhThuTheoNgay->ContainsKey(billDate)) {
							   doanhThuTheoNgay[billDate] += bill->TongTien;
						   }
						   else {
							   doanhThuTheoNgay->Add(billDate, bill->TongTien);
						   }
					   }


				   }



				   //xoa du lieu cu
				   chartDoanhThu->Series["Doanh thu"]->Points->Clear();
				   //them du lieu moi
				   for each (KeyValuePair<DateTime, double> ^ entry in doanhThuTheoNgay) {
					   if (entry->Value > 0) {
						   int pointIndex = chartDoanhThu->Series["Doanh thu"]->Points->AddXY(entry->Key.ToString("dd/MM/yyyy"), entry->Value);
						   chartDoanhThu->Series["Doanh thu"]->Points[pointIndex]->Label = entry->Value.ToString("N0") + " $";
					   }
				   }


				   //cap nhat tieu de truc x
				   chartDoanhThu->ChartAreas["ChartArea1"]->AxisX->Title = "Ngày";
				   chartDoanhThu->ChartAreas["ChartArea1"]->AxisY->Title = "Doanh thu ($)";
			   }


		   };

		   void UpdateChartStaff() {
			   //doc danh sach hoa don
			   List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);
			   DateTime startDate = dateTimeStatiticStaffFrom->Value;
			   DateTime endDate = dateTimeFormStatiticIn->Value;

			   //loc hoa don va tinh doanh thu
			   Dictionary<String^, double>^ doanhThuTheoNhanVien = gcnew Dictionary<String^, double>();
			   for each (PayMent ^ bill in danhSachHoaDon) {
				   DateTime doanhThuTheoNgay = bill->ThoiGianThanhToan.Date;
				   if (doanhThuTheoNgay >= startDate && doanhThuTheoNgay <= endDate) {
					   String^ staffName = bill->TenNhanVien;
					   if (doanhThuTheoNhanVien->ContainsKey(staffName)) {
						   doanhThuTheoNhanVien[staffName] += bill->TongTien;
					   }
					   else {
						   doanhThuTheoNhanVien->Add(staffName, bill->TongTien);
					   }
				   }
			   }
			   

			   //xoa du lieu cu
			   chartStatiticStaff->Series["Doanh thu nhân viên"]->Points->Clear();
			   //them du lieu moi

			   for each (KeyValuePair<String^, double> ^ entry in doanhThuTheoNhanVien) {
				   if (entry->Value > 0) {
					   int pointIndex = chartStatiticStaff->Series["Doanh thu nhân viên"]->Points->AddXY(entry->Key, entry->Value);
					   chartStatiticStaff->Series["Doanh thu nhân viên"]->Points[pointIndex]->Label = entry->Value.ToString("N0") + " $";
				   }
			   }

			   //cap nhat tieu de truc 
			   chartStatiticStaff->ChartAreas["ChartArea1"]->AxisX->Title = "Nhân viên";
			   chartStatiticStaff->ChartAreas["ChartArea1"]->AxisY->Title = "Doanh thu ($)";
		   }

	private: System::Void btnDoanhThu_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateChartDoanhThu();
	}
private: System::Void btnStatiticStaff_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateChartStaff();
}
};
}
