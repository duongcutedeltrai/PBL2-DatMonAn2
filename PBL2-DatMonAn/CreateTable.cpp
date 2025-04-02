#include "CreateTable.h"
#include "ManagerTable.h"
#include "FormFood.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

void CreateTable::TaoDayBan(int soBan, FlowLayoutPanel^ flpBan, List<ManagerTable^>^ danhSachBan) {
    for (int i = 1; i <= soBan; i++) {
        Button^ btnBan = gcnew Button();
		btnBan->Text = danhSachBan[i-1]->SoBan;
		btnBan->Tag = danhSachBan[i-1];
        btnBan->Width = 100;
        btnBan->Height = 100;
        btnBan->BackColor = Color::White;
        btnBan->FlatStyle = FlatStyle::Standard;
        btnBan->Margin = Padding(20);
        btnBan->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
        btnBan->ForeColor = Color::Black;
		btnBan->Cursor = Cursors::Hand;

        btnBan->Click += gcnew EventHandler(this, &CreateTable::btnBan_Click);
        flpBan->Controls->Add(btnBan);

    }
}

void CreateTable::TakeAway(int soBan, FlowLayoutPanel^ flpMangVe) {
    for (int i = 1; i <= soBan; i++) {
        Button^ btnBanMangve = gcnew Button();
        btnBanMangve->Text = L"Mang Về " + i;
        btnBanMangve->Width = 100;
        btnBanMangve->Height = 100;
        btnBanMangve->BackColor = Color::White;
        btnBanMangve->FlatStyle = FlatStyle::Standard;
        btnBanMangve->Margin = Padding(20);
        btnBanMangve->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
        btnBanMangve->ForeColor = Color::Black;
        btnBanMangve->Cursor = Cursors::Hand;
        btnBanMangve->Click += gcnew EventHandler(this, &CreateTable::btnBanMangve_Click);

        flpMangVe->Controls->Add(btnBanMangve);

    }
}

void CreateTable::btnBan_Click(Object^ sender, EventArgs^ e) {
    Button^ btn = safe_cast<Button^>(sender);
    ManagerTable^ ban = safe_cast<ManagerTable^>(btn->Tag);
    PBL2DatMonAn::FormFood^ food = gcnew PBL2DatMonAn::FormFood(ban, nameStaff);
    food->ShowDialog();

    //cap nhat lai trang thai cua ban
    if (ban->TrangThai == "Trống") {
        btn->BackColor = Color::White;
    }
    else if (ban->TrangThai == "Có Khách" || ban->TrangThai == "Chưa Thanh Toán") {
        btn->BackColor = Color::Green;
    }
    else if (ban->TrangThai == "Đã Thanh Toán") {
        btn->BackColor = Color::White;
    }
}

void CreateTable::btnBanMangve_Click(Object^ sender, EventArgs^ e) {
    ManagerTable^ banMangVe = gcnew ManagerTable("Mang Về");
    PBL2DatMonAn::FormFood^ food = gcnew PBL2DatMonAn::FormFood(banMangVe, nameStaff);
    food->ShowDialog();
}



