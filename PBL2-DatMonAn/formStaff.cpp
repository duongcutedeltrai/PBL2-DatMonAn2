#include "formStaff.h"
#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;


//[STAThreadAttribute]
//int main(array<String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    PBL2DatMonAn::formStaff form;
//    Application::Run(% form);
//}

namespace PBL2DatMonAn {
    System::Void formStaff::btnDangXuat_Click(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        btnDangXuat->BackColor = Color::IndianRed;
        this->Hide();
        Login^ login = gcnew Login();
        login->ShowDialog();
     
    }

    System::Void formStaff::btnChonBan_Click(System::Object^ sender, System::EventArgs^ e){
        ResetMauButtonMenu();
        panelDanhsachban->Visible = true;
        panelMangVe->Visible = true;
        addHistoryBillForm->Visible = false;
        btnChonBan->BackColor = Color::IndianRed;
    }

    //System::Void formStaff::btnDanhsach_Click(System::Object^ sender, System::EventArgs^ e) {
    //    ResetMauButtonMenu();
    //    panelMangVe->Visible = false;
    //    panelDanhsachban->Visible = false;
    //    btnDanhsach->BackColor = Color::IndianRed;
    //}

    System::Void formStaff::BoGocControl(Control^ control, int radius) {
        System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
        int w = control->Width;
        int h = control->Height;
        int d = radius * 2;

        path->AddArc(0, 0, d, d, 180, 90);
        path->AddArc(w - d, 0, d, d, 270, 90);
        path->AddArc(w - d, h - d, d, d, 0, 90);
        path->AddArc(0, h - d, d, d, 90, 90);
        path->CloseFigure();

        control->Region = gcnew System::Drawing::Region(path);
    }
}
