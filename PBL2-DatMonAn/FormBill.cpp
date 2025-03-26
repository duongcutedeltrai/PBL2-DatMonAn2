#include "FormBill.h"

//using namespace System;
//using namespace System::Windows::Forms;
//using namespace System::Runtime::InteropServices;
//
//
//[STAThreadAttribute]
//int main(array<String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    PBL2DatMonAn::FormBill form;
//    Application::Run(% form);
//}
//cac mon duoc chon duoc dua vao datagridbill
namespace PBL2DatMonAn {
	System::Void FormBill::Monandachon() {
		datagridViewBill->Rows->Clear();
		double tongtien = 0;
		for each(MonAn ^ mon in danhSachMon) {
			double gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
			int soluong = mon->SoLuong;
			double thanhtien = gia * soluong;
			tongtien += thanhtien;

			datagridViewBill->Rows->Add(mon->TenMon, soluong.ToString(), gia.ToString("F2") + " $", thanhtien.ToString("F2") + " $");
		}
		txtPrice->Text = tongtien.ToString("F2") + " $";
	}
}