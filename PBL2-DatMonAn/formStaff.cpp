#include "formStaff.h"
#include "Login.h"

namespace PBL2DatMonAn {
    System::Void formStaff::btnDangXuat_Click(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        btnDangXuat->BackColor = Color::IndianRed;
        this->Hide();
        Login^ login = gcnew Login();
        login->ShowDialog();
    }
}
