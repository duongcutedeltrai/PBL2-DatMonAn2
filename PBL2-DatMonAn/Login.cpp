#include "Login.h"
#include "formStaff.h"
#include "formAdmin.h"
#include "User.h"
#pragma comment(lib, "Gdi32.lib")
#include <wingdi.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

//[STAThreadAttribute]
//int main(array<String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    PBL2DatMonAn::Login form;
//    Application::Run(% form);
//}

extern "C" HRGN __stdcall CreateRoundRectRgn(
    int nLeftRect, int nTopRect,
    int nRightRect, int nBottomRect,
    int nWidthEllipse, int nHeightEllipse
);

namespace PBL2DatMonAn {      

    System::Void Login::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ id = txtID->Text;
        String^ pass = txtPass->Text;


        //kiem tra trong
        if (id == "" || pass == "") {
            MessageBox::Show("Vui lòng nhập đầy đủ thông tin", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
        String^ role = "Invalid";


        // Duyệt qua danh sách Account để tìm tài khoản phù hợp
        for each (User ^ acc in this->Account) {
            if (acc->ID == id && acc->Password == pass) {
                role = acc->Role; // Lấy Role từ tài khoản trong danh sách
                break;
            }
        }

        if (role == "Admin") {
            formAdmin^ admin = gcnew formAdmin();
            this->Hide();
            admin->ShowDialog();
        }
        else if (role == "Staff") {
            formStaff^ staff = gcnew formStaff();
            this->Hide();
            staff->ShowDialog();
        }
        else {
            MessageBox::Show("Sai tên đăng nhập hoặc mật khẩu", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }


        ////tao doi tuong user va ghi file text "login.txt"
        User^ currentUser = gcnew User(id, pass, role);
        currentUser->GhiFile("login.txt");
    }
}
