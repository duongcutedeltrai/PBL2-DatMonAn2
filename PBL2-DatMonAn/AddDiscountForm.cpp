#include "AddDiscountForm.h"

namespace PBL2DatMonAn {
	System::Void AddDiscountForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//giam gia trong txtbox
		String^ NumberGiamGia = textBox1->Text->Trim();
		if (String::IsNullOrEmpty(NumberGiamGia)) {
			MessageBox::Show(L"Vui lòng nhập mã giảm giá", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		//chuyen doi sang so
		double giamGia;
		try {
			discountPercent = Convert::ToDouble(NumberGiamGia);
			if (discountPercent < 0 || discountPercent > 100) {
				MessageBox::Show(L"Mã giảm giá không hợp lệ", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
		}
		catch (FormatException^ ex) {
			MessageBox::Show(L"Mã giảm giá không hợp lệ", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		//luu phan tram giam gia
		DiscountManager::DiscountPercent = discountPercent;
		//hien thu giam gia thanh cong
		MessageBox::Show(L"Áp dụng mã giảm giá thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}