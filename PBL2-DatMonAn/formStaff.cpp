#include "formStaff.h"
#include "Login.h"
#include "ManagerTable.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;


namespace PBL2DatMonAn {
    System::Void formStaff::formStaff_Load(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        btnChonBan->BackColor = Color::IndianRed;
        BoGocControl(btnChonBan, 10);
        BoGocControl(btnLichSuDonHang, 10);
        BoGocControl(btnDangXuat, 10);

        panelDanhsachban->Visible = true;
        panelMangVe->Visible = true;
        addHistoryBillForm->Visible = false;
    }
  
    System::Void formStaff::btnDangXuat_Click(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        btnDangXuat->BackColor = Color::IndianRed;
            this->Hide();
            Login^ login = gcnew Login();
            login->ShowDialog();
            this->Close();

     
    }


    System::Void formStaff::btnLichSuDonHang_Click_1(System::Object^ sender, System::EventArgs^ e) {
        ResetMauButtonMenu();
        panelDanhsachban->Visible = false;
        panelMangVe->Visible = false;
        addHistoryBillForm->Visible = true;
        addHistoryBillForm->UpdateHistory();
        btnLichSuDonHang->BackColor = Color::IndianRed;
    }

    System::Void formStaff::btnChonBan_Click(System::Object^ sender, System::EventArgs^ e){
        ResetMauButtonMenu();
        panelDanhsachban->Visible = true;
        panelMangVe->Visible = true;
        addHistoryBillForm->Visible = false;
        btnChonBan->BackColor = Color::IndianRed;
    }

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

    System::Void formStaff::panelDanhsachban_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        BoGocControl(panelDanhsachban, 10);
    }
    System::Void formStaff::panelMangVe_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        BoGocControl(panelMangVe, 10);
    }


    System::Void formStaff::ResetMauButtonMenu() {
        Color mauMacDinh = Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(185)));
        btnChonBan->BackColor = mauMacDinh;
        btnLichSuDonHang->BackColor = mauMacDinh;
        btnDangXuat->BackColor = mauMacDinh;
    }
}
