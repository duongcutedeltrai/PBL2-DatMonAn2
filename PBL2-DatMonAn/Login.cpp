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
        String^ taikhoan = txtID->Text;
        String^ pass = txtPass->Text;
        //kiem tra trong
        if (taikhoan == "" || pass == "") {
            MessageBox::Show(L"Vui lòng nhập đầy đủ thông tin", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
        String^ role = "Invalid";
        String^ name = "Invalid";
        String^ sex = "Invalid";
        String^ birt = "Invalid";
        String^ pos = "Invalid";

        // Duyệt qua danh sách Account để tìm tài khoản phù hợp
        for each (User ^ acc in this->danhsachTaiKhoan) {
            if (acc->Account == taikhoan && acc->Password == pass) {
                role = acc->Role;
                name = acc->Name;
                sex = acc->Sex;
                birt = acc->Birtday;
                pos = acc->Position;
                break;
            }
        }

        if (role == "Admin") {
            formAdmin^ admin = gcnew formAdmin(name);
            this->Hide();
            admin->ShowDialog();
        }
        else if (role == "Nhân viên") {
            formStaff^ staff = gcnew formStaff(name);
            this->Hide();
            staff->ShowDialog();
        }
        else {
            MessageBox::Show(L"Sai tên đăng nhập hoặc mật khẩu", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }


        ////tao doi tuong user va ghi file text "login.txt"
    };
}
