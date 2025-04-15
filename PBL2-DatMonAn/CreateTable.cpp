#include "CreateTable.h"
#include "ManagerTable.h"
#include "FormFood.h"
#include "AddHistoryBillForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

CreateTable::CreateTable(String^ nameStaff, String^ banFilePath) {
    this->nameStaff = nameStaff;
    this->banFilePath = banFilePath;
}

void CreateTable::SetHistoryForm(AddHistoryBillForm^ historyForm) {
    addHistoryBillForm = historyForm;
}
void CreateTable::TaoDayBan(int soBan, FlowLayoutPanel^ flpBan, List<ManagerTable^>^ danhSachBan) {
        for (int i = 1; i <= soBan; i++) {
            Button^ btnBan = gcnew Button();
            btnBan->Text = danhSachBan[i - 1]->SoBan;
            btnBan->Tag = gcnew cli::array<Object^>{ danhSachBan[i - 1], danhSachBan };
            btnBan->Width = 100;
            btnBan->Height = 100;
            btnBan->BackColor = (danhSachBan[i - 1]->TrangThai == L"Trống") ? Color::White : Color::Green;
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
        cli::array<Object^>^ tags = safe_cast<cli::array<Object^>^>(btn->Tag);
        ManagerTable^ ban = safe_cast<ManagerTable^>(tags[0]);
        List<ManagerTable^>^ danhSachBan = safe_cast<List<ManagerTable^>^>(tags[1]);

        PBL2DatMonAn::FormFood^ food = gcnew PBL2DatMonAn::FormFood(ban, nameStaff, danhSachBan, banFilePath, addHistoryBillForm);
        food->ShowDialog();

		for each(Control ^ control in btn->Parent->Controls) {
			Button^ btnBan = dynamic_cast<Button^>(control);
            if (btnBan != nullptr) {
                if (ban->TrangThai == L"Trống") {
                    btn->BackColor = Color::White;
                }
                else if (ban->TrangThai == L"Có Khách" || ban->TrangThai == L"Chưa Thanh Toán") {
                    btn->BackColor = Color::Green;
                }
                else if (ban->TrangThai == L"Đang Đặt") {
					btn->BackColor = Color::Orange;
                }
                else if (ban->TrangThai == L"Đã Thanh Toán") {
                    btn->BackColor = Color::White;
                }
            }
		}

        if (danhSachBan != nullptr) {
            ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        }
    }

    void CreateTable::btnBanMangve_Click(Object^ sender, EventArgs^ e) {
        Button^ btn = safe_cast<Button^>(sender);
        ManagerTable^ banMangVe = gcnew ManagerTable(btn->Text);
        PBL2DatMonAn::FormFood^ food = gcnew PBL2DatMonAn::FormFood(banMangVe, nameStaff, nullptr, banFilePath, addHistoryBillForm);
        food->ShowDialog();
    }
  