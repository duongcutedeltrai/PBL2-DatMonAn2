#include "Login.h"
#include "formStaff.h"
#include "formAdmin.h"
#include "User.h"
#pragma comment(lib, "Gdi32.lib")
#include <wingdi.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

[STAThreadAttribute]
int main(cli::array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PBL2DatMonAn::Login form;
    Application::Run(% form);
}

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
            MessageBox::Show(L"Vui lòng nhập đầy đủ thông tin", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
        String^ role = "Invalid";
        String^ name = "Invalid";

        // Duyệt qua danh sách Account để tìm tài khoản phù hợp
        for each (User ^ acc in this->Account) {
            if (acc->ID == id && acc->Password == pass) {
                role = acc->Role; 
				name = acc->Name;
                break;
            }
        }

        if (role == "Admin") {
            formAdmin^ admin = gcnew formAdmin(name);
            this->Hide();
            admin->ShowDialog();
        }
        else if (role == "Staff") {
            formStaff^ staff = gcnew formStaff(name);
            this->Hide();
            staff->ShowDialog();
        }
        else {
            MessageBox::Show(L"Sai tên đăng nhập hoặc mật khẩu", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }


        ////tao doi tuong user va ghi file text "login.txt"
        User^ currentUser = gcnew User(id, name, pass, role);
        currentUser->GhiFile("login.txt");
    }
}
