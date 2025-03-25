#include "banManager.h"
#include "FormFood.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

void BanManager::TaoDayBan(int soBan, FlowLayoutPanel^ flpBan) {
    for (int i = 1; i <= soBan; i++) {
        Button^ btnBan = gcnew Button();
        btnBan->Text = "Bàn " + i;
        btnBan->Width = 100;
        btnBan->Height = 100;
        btnBan->BackColor = Color::LightGray;
        btnBan->FlatStyle = FlatStyle::Flat;
        btnBan->FlatAppearance->BorderSize = 1; // Không dùng viền mặc định
        btnBan->Margin = Padding(20);
        btnBan->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
        btnBan->ForeColor = Color::Black;
		btnBan->Cursor = Cursors::Hand;

        btnBan->Click += gcnew EventHandler(this, &BanManager::btnBan_Click);
        flpBan->Controls->Add(btnBan);

    }
}

void BanManager::TakeAway(int soBan, FlowLayoutPanel^ flpMangVe) {
    for (int i = 1; i <= soBan; i++) {
        Button^ btnBanMangve = gcnew Button();
        btnBanMangve->Text = L"Mang Về " + i;
        btnBanMangve->Width = 100;
        btnBanMangve->Height = 100;
        btnBanMangve->BackColor = Color::LightGray;
        btnBanMangve->FlatStyle = FlatStyle::Flat;
        btnBanMangve->FlatAppearance->BorderSize = 1; // Không dùng viền mặc định
        btnBanMangve->Margin = Padding(20);
        btnBanMangve->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
        btnBanMangve->ForeColor = Color::Black;
        btnBanMangve->Cursor = Cursors::Hand;

        btnBanMangve->Click += gcnew EventHandler(this, &BanManager::btnBanMangve_Click);

        flpMangVe->Controls->Add(btnBanMangve);

    }
}

void BanManager::btnBan_Click(Object^ sender, EventArgs^ e) {
    PBL2DatMonAn::FormFood^ food = gcnew PBL2DatMonAn::FormFood();
    food->ShowDialog();
}

void BanManager::btnBanMangve_Click(Object^ sender, EventArgs^ e) {
    PBL2DatMonAn::FormFood^ food = gcnew PBL2DatMonAn::FormFood();
    food->ShowDialog();
}



