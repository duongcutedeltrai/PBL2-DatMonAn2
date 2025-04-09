#include "AddStatiticForm.h"

namespace PBL2DatMonAn {
	void AddStatiticForm::LoadSTatistics() {
		UpdateChartDoanhThu();
		UpdateChartStaff();
	}

	void AddStatiticForm::UpdateChartDoanhThu() {
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
	}

	void AddStatiticForm::UpdateChartStaff() {
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

	System::Void AddStatiticForm::btnDoanhThu_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateChartDoanhThu();
	}

	System::Void AddStatiticForm::btnStatiticStaff_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateChartStaff();
	}
}
