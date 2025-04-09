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
    return 0;
}

extern "C" HRGN __stdcall CreateRoundRectRgn(
    int nLeftRect, int nTopRect,
    int nRightRect, int nBottomRect,
    int nWidthEllipse, int nHeightEllipse
);

namespace PBL2DatMonAn {
    System::Void Login::Login_Load(System::Object^ sender, System::EventArgs^ e) {
		//them thong tin admin
        danhsachTaiKhoan->Add(gcnew User("Pham anh duong", "2", "123", "03/11/2004", "Nam", "Thu ngân", "Admin"));

       //bo goc
        HRGN hrgn = CreateRoundRectRgn(0, 0, txtID->Width, txtID->Height, 20, 20);
        txtID->Region = System::Drawing::Region::FromHrgn((IntPtr)hrgn);

        hrgn = CreateRoundRectRgn(0, 0, txtPass->Width, txtPass->Height, 20, 20);
        txtPass->Region = System::Drawing::Region::FromHrgn((IntPtr)hrgn);

        hrgn = CreateRoundRectRgn(0, 0, btnLogin->Width, btnLogin->Height, 20, 20);
        btnLogin->Region = System::Drawing::Region::FromHrgn((IntPtr)hrgn);
    }
    //login
    System::Void Login::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ taikhoan = txtID->Text;
        String^ pass = txtPass->Text;

        if (taikhoan == "" || pass == "") {
            MessageBox::Show(L"Vui lòng nhập đầy đủ thông tin", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
		//lay danh sach tai khoan
        String^ role = "Invalid";
        String^ name = "Invalid";
        String^ sex = "Invalid";
        String^ birt = "Invalid";
        String^ pos = "Invalid";

   
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
    }

    System::Void Login::txtID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyCode == Keys::Enter) {
            e->SuppressKeyPress = true;
        }
    }

    System::Void Login::txtPass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyCode == Keys::Enter) {
            e->SuppressKeyPress = true;
        }
    }
}