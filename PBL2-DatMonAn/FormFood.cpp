#include "FormFood.h"
#include "FormBill.h"
#include "MonAn.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

namespace PBL2DatMonAn {
    System::Void FormFood::FormFood_Load(System::Object^ sender, System::EventArgs^ e) {
        BoGocControl(FlpFood, 5);
        BoGocControl(pnListFood, 20);
        BoGocControl(pnNav, 20);

        danhSachMonAn = MonAn::DocDanhSachMonAn(FoodfilePath);
        HienThiDanhSachMon();
        DocDanhSachMonTuFile();
        if (banHienTai != nullptr && banHienTai->DanhSachMon != nullptr) {
            HienThiMonDaDat();
            CapNhatTongTien();
        }
    }

    System::Void FormFood::HienThiDanhSachMon() {
        FlpFood->Controls->Clear();
        for each(MonAn ^ mon in danhSachMonAn)
        {
            Button^ button = gcnew Button();
            button->BackColor = Color::White;
            button->Location = System::Drawing::Point(23, 23);
            button->UseVisualStyleBackColor = true;
            button->Size = System::Drawing::Size(264, 115);
            button->TabIndex = 0;
            button->Tag = mon;
            button->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
            button->Cursor = Cursors::Hand;

            PictureBox^ picBox = gcnew PictureBox();
            picBox->Location = System::Drawing::Point(10, 13);
            picBox->Size = System::Drawing::Size(100, 87);
            picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            picBox->TabIndex = 0;
            picBox->BackColor = System::Drawing::Color::Transparent;
            picBox->Parent = button;
            try {
                picBox->Image = Image::FromFile(mon->Anh);
                BoGocControl(picBox, 5);
            }
            catch (...) {
                picBox->Image = nullptr;
            }

            Label^ lblTen = gcnew Label();
            lblTen->Text = mon->TenMon;
            lblTen->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblTen->AutoSize = true;
            lblTen->Location = System::Drawing::Point(120, 15);
            lblTen->Size = System::Drawing::Size(92, 23);
            lblTen->BackColor = System::Drawing::Color::Transparent;
            lblTen->TabIndex = 1;

            Label^ lblGia = gcnew Label();
            lblGia->AutoSize = true;
            lblGia->Text = mon->Gia + " $";
            lblGia->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblGia->Location = System::Drawing::Point(126, 80);
            lblGia->Size = System::Drawing::Size(32, 20);
            lblGia->BackColor = System::Drawing::Color::Transparent;
            lblGia->TabIndex = 2;

            PictureBox^ picIcon = gcnew PictureBox();
            picIcon->Location = System::Drawing::Point(230, 80);
            picIcon->Size = System::Drawing::Size(20, 20);
            picIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            picIcon->TabIndex = 0;
            picIcon->BackColor = System::Drawing::Color::Transparent;
            picIcon->BringToFront();
            picIcon->Parent = button;
            picIcon->Image = Image::FromFile(".\\Image\\iconAdd.png");

            button->Controls->Add(picBox);
            button->Controls->Add(lblTen);
            button->Controls->Add(lblGia);

            FlpFood->Controls->Add(button);
            picBox->Tag = mon;
            lblTen->Tag = mon;
            lblGia->Tag = mon;
            picBox->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
            lblTen->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
            lblGia->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
        }
    }

    System::Void FormFood::panel_Clicked(System::Object^ sender, System::EventArgs^ e) {
        Control^ clicked = dynamic_cast<Control^>(sender);
        if (clicked == nullptr || clicked->Tag == nullptr) {
            MessageBox::Show(L"Không thể xác định món ăn.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        MonAn^ mon = dynamic_cast<MonAn^>(clicked->Tag);
        if (mon == nullptr) {
            MessageBox::Show(L"Dữ liệu món ăn không hợp lệ.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        if (banHienTai == nullptr || banHienTai->DanhSachMon == nullptr) {
            MessageBox::Show(L"Dữ liệu bàn hiện tại không hợp lệ.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        int index = -1;
        for (int i = 0; i < banHienTai->DanhSachMon->Count; i++) {
            if (banHienTai->DanhSachMon[i]->ID == mon->ID) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            banHienTai->DanhSachMon[index]->SoLuong++;
        }
        else {
            MonAn^ monMoi = gcnew MonAn(mon->LoaiMon, mon->TenMon, mon->Gia, mon->Anh);
            monMoi->ID = mon->ID;
            monMoi->SoLuong = 1;
            banHienTai->DanhSachMon->Add(monMoi);
            banHienTai->TrangThai = L"Có Khách";
        }

        LuuDanhSachMonVaoFile("tamthoi.txt");
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        HienThiMonDaDat();
        CapNhatTongTien();
    }

    System::Void FormFood::HienThiMonDaDat() {
        flowLayoutPanel1->Controls->Clear();
        if (banHienTai == nullptr || banHienTai->DanhSachMon == nullptr || banHienTai->DanhSachMon->Count == 0) {
            Console::WriteLine("Bàn hiện tại (" + (banHienTai != nullptr ? banHienTai->SoBan : "null") + ") không có món");
            CapNhatTongTien();
            return;
        }

        Console::WriteLine("Hiển thị món cho bàn: " + banHienTai->SoBan + ", số món: " + banHienTai->DanhSachMon->Count);
        for each(MonAn ^ mon in banHienTai->DanhSachMon) {
            Panel^ panelOrder = gcnew Panel();
            panelOrder->Tag = mon;
            panelOrder->BackColor = System::Drawing::Color::WhiteSmoke;
            panelOrder->Size = System::Drawing::Size(268, 124);

            Label^ lblGia = gcnew Label();
            lblGia->Text = mon->Gia;
            lblGia->AutoSize = true;
            lblGia->Font = gcnew Drawing::Font(L"Microsoft Sans Serif", 10.2F);
            lblGia->Location = System::Drawing::Point(154, 48);

            PictureBox^ picBox = gcnew PictureBox();
            picBox->Location = System::Drawing::Point(18, 3);
            picBox->Size = System::Drawing::Size(130, 116);
            picBox->SizeMode = PictureBoxSizeMode::StretchImage;
            try {
                picBox->Image = Image::FromFile(mon->Anh);
            }
            catch (...) {
                picBox->Image = nullptr;
            }

            PictureBox^ picIconAdd = gcnew PictureBox();
            picIconAdd->Location = System::Drawing::Point(154, 80);
            picIconAdd->Size = System::Drawing::Size(20, 20);
            picIconAdd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            picIconAdd->BackColor = System::Drawing::Color::Transparent;
            picIconAdd->Cursor = System::Windows::Forms::Cursors::Hand;
            picIconAdd->BringToFront();
            picIconAdd->Parent = panelOrder;
            picIconAdd->Image = Image::FromFile(".\\Image\\iconCong.jpg");
            picIconAdd->Tag = mon;
            picIconAdd->Click += gcnew EventHandler(this, &FormFood::btnAdd_Click);

            PictureBox^ picIconSubTract = gcnew PictureBox();
            picIconSubTract->Location = System::Drawing::Point(230, 80);
            picIconSubTract->Size = System::Drawing::Size(20, 20);
            picIconSubTract->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            picIconSubTract->BackColor = System::Drawing::Color::Transparent;
            picIconSubTract->Cursor = System::Windows::Forms::Cursors::Hand;
            picIconSubTract->BringToFront();
            picIconSubTract->Parent = panelOrder;
            picIconSubTract->Image = Image::FromFile(".\\Image\\iconSubTract (1).png");
            picIconSubTract->Tag = mon;
            picIconSubTract->Click += gcnew EventHandler(this, &FormFood::btnSubtract_Click);

            Label^ lblTen = gcnew Label();
            lblTen->Text = mon->TenMon;
            lblTen->AutoSize = true;
            lblTen->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10.2F, FontStyle::Bold);
            lblTen->Location = System::Drawing::Point(154, 25);

            Label^ lblSoLuong = gcnew Label();
            lblSoLuong->Text = mon->SoLuong.ToString();
            lblSoLuong->AutoSize = true;
            lblSoLuong->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10.2F);
            lblSoLuong->Location = System::Drawing::Point(190, 80);
            lblSoLuong->Name = "lblSoLuong";

            BoGocControl(panelOrder, 20);
            panelOrder->Controls->Add(picBox);
            panelOrder->Controls->Add(lblTen);
            panelOrder->Controls->Add(lblGia);
            panelOrder->Controls->Add(picIconAdd);
            panelOrder->Controls->Add(picIconSubTract);
            panelOrder->Controls->Add(lblSoLuong);
            flowLayoutPanel1->Controls->Add(panelOrder);
        }

        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        CapNhatTongTien();
    }

    System::Void FormFood::btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
        PictureBox^ picIconAdd = dynamic_cast<PictureBox^>(sender);
        if (picIconAdd == nullptr || picIconAdd->Tag == nullptr) return;

        MonAn^ mon = dynamic_cast<MonAn^>(picIconAdd->Tag);
        if (mon == nullptr) return;

        mon->SoLuong++;

        Panel^ panelOrder = dynamic_cast<Panel^>(picIconAdd->Parent);
        if (panelOrder != nullptr) {
            for each(Control ^ ctrl in panelOrder->Controls) {
                if (Label^ lblSoLuong = dynamic_cast<Label^>(ctrl)) {
                    if (lblSoLuong->Name == "lblSoLuong") {
                        lblSoLuong->Text = mon->SoLuong.ToString();
                        break;
                    }
                }
            }
        }

        LuuDanhSachMonVaoFile("tamthoi.txt");
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        CapNhatTongTien();
    }

    System::Void FormFood::btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
        PictureBox^ picIconSubTract = dynamic_cast<PictureBox^>(sender);
        if (picIconSubTract == nullptr || picIconSubTract->Tag == nullptr) return;

        MonAn^ mon = dynamic_cast<MonAn^>(picIconSubTract->Tag);
        if (mon == nullptr) return;

        mon->SoLuong--;

        if (mon->SoLuong <= 0) {
            banHienTai->DanhSachMon->Remove(mon);
            if (banHienTai->DanhSachMon->Count == 0) {
                banHienTai->TrangThai = L"Trống";
            }
            LuuDanhSachMonVaoFile("tamthoi.txt");
        }
        else {
            Panel^ panelOrder = dynamic_cast<Panel^>(picIconSubTract->Parent);
            if (panelOrder != nullptr) {
                for each(Control ^ ctrl in panelOrder->Controls) {
                    if (Label^ lblSoLuong = dynamic_cast<Label^>(ctrl)) {
                        if (lblSoLuong->Name == "lblSoLuong") {
                            lblSoLuong->Text = mon->SoLuong.ToString();
                            break;
                        }
                    }
                }
            }
            LuuDanhSachMonVaoFile("tamthoi.txt");
        }

        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        HienThiMonDaDat();
        CapNhatTongTien();
    }

    System::Void FormFood::pictureBox__clicked(System::Object^ sender, System::EventArgs^ e) {
        PictureBox^ picBox = dynamic_cast<PictureBox^>(sender);
        if (picBox != nullptr && picBox->Parent != nullptr) {
            panel_Clicked(picBox->Parent, e);
        }
    }

    System::Void FormFood::LocDanhSachMon(String^ loaiMon) {
        FlpFood->Controls->Clear();
        for each(MonAn ^ mon in danhSachMonAn) {
            if (loaiMon == "Tất cả" || mon->LoaiMon == loaiMon) {
                Button^ button = gcnew Button();
                button->BackColor = Color::White;
                button->Location = System::Drawing::Point(23, 23);
                button->UseVisualStyleBackColor = true;
                button->Size = System::Drawing::Size(264, 115);
                button->TabIndex = 0;
                button->Tag = mon;
                button->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
                button->Cursor = Cursors::Hand;

                PictureBox^ picBox = gcnew PictureBox();
                picBox->Location = System::Drawing::Point(10, 13);
                picBox->Size = System::Drawing::Size(100, 87);
                picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                picBox->TabIndex = 0;
                picBox->BackColor = System::Drawing::Color::Transparent;
                picBox->Parent = button;
                try {
                    picBox->Image = Image::FromFile(mon->Anh);
                    BoGocControl(picBox, 5);
                }
                catch (...) {
                    picBox->Image = nullptr;
                }

                Label^ lblTen = gcnew Label();
                lblTen->Text = mon->TenMon;
                lblTen->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                lblTen->AutoSize = true;
                lblTen->Location = System::Drawing::Point(120, 15);
                lblTen->Size = System::Drawing::Size(92, 23);
                lblTen->BackColor = System::Drawing::Color::Transparent;
                lblTen->TabIndex = 1;

                Label^ lblGia = gcnew Label();
                lblGia->AutoSize = true;
                lblGia->Text = mon->Gia + " $";
                lblGia->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                lblGia->Location = System::Drawing::Point(126, 80);
                lblGia->Size = System::Drawing::Size(32, 20);
                lblGia->BackColor = System::Drawing::Color::Transparent;
                lblGia->TabIndex = 2;

                PictureBox^ picIcon = gcnew PictureBox();
                picIcon->Location = System::Drawing::Point(230, 80);
                picIcon->Size = System::Drawing::Size(20, 20);
                picIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                picIcon->TabIndex = 0;
                picIcon->BackColor = System::Drawing::Color::Transparent;
                picIcon->BringToFront();
                picIcon->Parent = button;
                picIcon->Image = Image::FromFile(".\\Image\\iconAdd.png");

                button->Controls->Add(picBox);
                button->Controls->Add(lblTen);
                button->Controls->Add(lblGia);

                FlpFood->Controls->Add(button);

                picBox->Tag = mon;
                lblTen->Tag = mon;
                lblGia->Tag = mon;
                picBox->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
                lblTen->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
                lblGia->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
            }
        }
    }

    System::Void FormFood::btnChangerTable_Click(System::Object^ sender, System::EventArgs^ e) {
        if (cbChangerTable->SelectedIndex == -1) {
            MessageBox::Show("Vui lòng chọn bàn để chuyển");
            return;
        }

        String^ soBanMoi = cbChangerTable->SelectedItem->ToString();

        if (soBanMoi == banHienTai->SoBan) {
            MessageBox::Show(L"Bàn được chọn là bàn trung với bàn hiện tại", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        ManagerTable^ banMoi = nullptr;
        for each(ManagerTable ^ ban in danhSachBan) {
            if (ban->SoBan == soBanMoi) {
                banMoi = ban;
                break;
            }
        }

        if (banMoi == nullptr) {
            MessageBox::Show(L"Bàn được chọn không tồn tại", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        if (banMoi->TrangThai != L"Trống") {
            MessageBox::Show(L"Bàn được chọn đã có người ngồi", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        if (banHienTai->DanhSachMon == nullptr || banHienTai->DanhSachMon->Count == 0) {
            MessageBox::Show(L"Bàn hiện tại không có món nào để chuyển", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        banMoi->DanhSachMon = gcnew List<MonAn^>();
        for each(MonAn ^ mon in banHienTai->DanhSachMon) {
            MonAn^ monMoi = gcnew MonAn(mon->LoaiMon, mon->TenMon, mon->Gia, mon->Anh);
            monMoi->ID = mon->ID;
            monMoi->SoLuong = mon->SoLuong;
            banMoi->DanhSachMon->Add(monMoi);
        }

        banMoi->TrangThai = L"Có Khách";
        banHienTai->TrangThai = L"Trống";
        banHienTai->DanhSachMon->Clear();

        LuuDanhSachMonVaoFile("tamthoi.txt");
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);

        banHienTai = banMoi;

        HienThiMonDaDat();
        CapNhatTongTien();

        MessageBox::Show(L"Chuyển sang" + soBanMoi + L" thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

    System::Void FormFood::btnThanhToan_Click(System::Object^ sender, System::EventArgs^ e) {
        if (banHienTai->DanhSachMon->Count == 0) {
            MessageBox::Show(L"Không có món nào trong danh sách!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        FormBill^ formBill = gcnew FormBill(banHienTai->DanhSachMon, banHienTai, nameStaff, danhSachBan, banFilePath, addHistoryBillForm);
        if (formBill->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            banHienTai->DanhSachMon->Clear();
            banHienTai->TrangThai = L"Trống";
            LuuDanhSachMonVaoFile("tamthoi.txt");
            ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
            HienThiMonDaDat();
            CapNhatTongTien();
        }
    }

    System::Void FormFood::btnTrangChu_Click(System::Object^ sender, System::EventArgs^ e) {
        formStaff^ trangChu = gcnew formStaff(nameStaff);
        trangChu->Show();
        this->Close();
        LuuDanhSachMonVaoFile("tamthoi.txt");
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
    }

    System::Void FormFood::BoGocControl(Control^ control, int radius) {
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

    System::Void FormFood::CapNhatTongTien() {
        double tongTien = 0.0;

        if (banHienTai != nullptr && banHienTai->DanhSachMon != nullptr) {
            for each(MonAn ^ mon in banHienTai->DanhSachMon) {
                double gia = 0.0;
                try {
                    gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
                }
                catch (...) {
                    continue;
                }
                tongTien += gia * mon->SoLuong;
            }
        }

        txtMoney->Text = tongTien.ToString("F2") + " $";
    }

        void FormFood::LuuDanhSachMonVaoFile(String^ VirttualOrderFilePath) {
            try {
                if (danhSachBan == nullptr || danhSachBan->Count == 0) {
                    if (File::Exists(VirttualOrderFilePath)) {
                        File::Delete(VirttualOrderFilePath);
                    }
                    Console::WriteLine("Không có bàn nào để lưu");
                    return;
                }

                StreamWriter^ writer = nullptr;
                try {
                    writer = gcnew StreamWriter(VirttualOrderFilePath, false, System::Text::Encoding::UTF8);
                    int tablesSaved = 0;

                    for each (ManagerTable ^ ban in danhSachBan) {
                        if (ban == nullptr || ban->DanhSachMon == nullptr || ban->DanhSachMon->Count == 0) {
                            continue;
                        }

                        String^ danhSachMonAnStr = "";
                        double tongTien = 0.0;
                        for each (MonAn ^ monAn in ban->DanhSachMon) {
                            if (monAn == nullptr) {
                                Console::WriteLine("Món ăn là null, bỏ qua...");
                                continue;
                            }

                            // Validate all properties
                            if (String::IsNullOrEmpty(monAn->LoaiMon) || String::IsNullOrEmpty(monAn->TenMon) ||
                                String::IsNullOrEmpty(monAn->Gia) || String::IsNullOrEmpty(monAn->Anh)) {
                                MessageBox::Show("Thông tin món ăn không đầy đủ: " + (monAn->TenMon ? monAn->TenMon : "Không có tên"),
                                    "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                                continue;
                            }

                            String^ giaMonAnStr = monAn->Gia;
                            if (String::IsNullOrEmpty(giaMonAnStr)) {
                                MessageBox::Show("Giá món ăn không hợp lệ: " + monAn->TenMon, "Lỗi",
                                    MessageBoxButtons::OK, MessageBoxIcon::Error);
                                continue;
                            }

                            giaMonAnStr = giaMonAnStr->Replace("$", "")->Replace(",", "")->Trim();
                            double giaMonAn;
                            if (!Double::TryParse(giaMonAnStr, giaMonAn)) {
                                MessageBox::Show("Giá món ăn không hợp lệ: " + monAn->TenMon, "Lỗi",
                                    MessageBoxButtons::OK, MessageBoxIcon::Error);
                                continue;
                            }

                            int soLuong = monAn->SoLuong;
                            // Đảm bảo tất cả các giá trị đều hợp lệ trước khi gọi String::Format
                            try {
                                String^ imageName = Path::GetFileName(monAn->Anh);
                                danhSachMonAnStr += String::Format("{0}:{1}:{2}:{3}:{4};",
                                    monAn->LoaiMon, monAn->TenMon, giaMonAnStr, soLuong, imageName);
                            }
                            catch (Exception^ ex) {
                                MessageBox::Show("Lỗi khi định dạng món ăn: " + monAn->TenMon + ", lỗi: " + ex->Message,
                                    "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                                continue;
                            }
                            tongTien += giaMonAn * soLuong;
                        }

                        if (!String::IsNullOrEmpty(danhSachMonAnStr)) {
                            danhSachMonAnStr = danhSachMonAnStr->Substring(0, danhSachMonAnStr->Length - 1);

                            String^ soBan = ban->SoBan;
                            String^ idBan = ban->ID;
                            DateTime now = DateTime::Now;
                            String^ thoiGian = now.ToString("yyyy-MM-dd HH:mm:ss");

                            // Validate arguments for the second String::Format
                            if (String::IsNullOrEmpty(idBan) || String::IsNullOrEmpty(soBan) || 
                                String::IsNullOrEmpty(thoiGian) || String::IsNullOrEmpty(danhSachMonAnStr)) {
                                MessageBox::Show("Thông tin bàn không đầy đủ: " + (soBan ? soBan : "Không có số bàn"),
                                    "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                                continue;
                            }

                            String^ line;
                            try {
                                line = String::Format("{0}|{1}|{2}|{3}|{4}",
                                    idBan, soBan, thoiGian, tongTien.ToString("F2"), danhSachMonAnStr);
                            }
                            catch (Exception^ ex) {
                                MessageBox::Show("Lỗi khi định dạng dòng cho bàn: " + soBan + ", lỗi: " + ex->Message,
                                    "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
                                continue;
                            }

                            writer->WriteLine(line);
                            tablesSaved++;
                            Console::WriteLine("Ghi bàn: " + soBan + " với " + ban->DanhSachMon->Count + " món");
                        }
                    }

                    if (tablesSaved == 0 && File::Exists(VirttualOrderFilePath)) {
                        writer->Close();
                        writer = nullptr;
                        File::Delete(VirttualOrderFilePath);
                        Console::WriteLine("Xóa file tamthoi.txt vì không có bàn nào được lưu");
                    }
                }
                finally {
                    if (writer != nullptr) {
                        writer->Close();
                    }
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Lỗi khi ghi file: " + ex->Message, "Lỗi",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void FormFood::DocDanhSachMonTuFile() {
            for each (ManagerTable ^ ban in danhSachBan) {
                if (ban != nullptr) {
                    if (ban->DanhSachMon == nullptr) {
                        ban->DanhSachMon = gcnew List<MonAn^>();
                    }
                    else {
                        ban->DanhSachMon->Clear();
                    }
                    ban->TrangThai = L"Trống";
                }
            }

            if (!File::Exists("tamthoi.txt")) {
                if (banHienTai != nullptr) {
                    HienThiMonDaDat();
                    CapNhatTongTien();
                }
                Console::WriteLine("Không tìm thấy file tamthoi.txt");
                return;
            }

            try {
                StreamReader^ reader = nullptr;
                try {
                    reader = gcnew StreamReader("tamthoi.txt", System::Text::Encoding::UTF8);
                    String^ line;

                    while ((line = reader->ReadLine()) != nullptr) {
                        if (String::IsNullOrEmpty(line)) continue;

                        array<String^>^ parts = line->Split('|');
                        if (parts->Length < 5) {
                            Console::WriteLine("Dòng không hợp lệ: " + line);
                            continue;
                        }

                        String^ idBan = parts[0];
                        String^ soBan = parts[1];
                        String^ thoiGian = parts[2];
                        String^ tongTien = parts[3];
                        String^ danhSachMonStr = parts[4];

                        ManagerTable^ targetTable = nullptr;
                        for each (ManagerTable ^ ban in danhSachBan) {
                            if (ban->ID == idBan && ban->SoBan == soBan) { // So sánh cả ID và số bàn
                                targetTable = ban;
                                break;
                            }
                        }

                        if (targetTable == nullptr) {
                            Console::WriteLine("Không tìm thấy bàn với ID: " + idBan + " và số bàn: " + soBan);
                            continue;
                        }

                        if (targetTable->DanhSachMon == nullptr) {
                            targetTable->DanhSachMon = gcnew List<MonAn^>();
                        }

                        array<String^>^ monAnParts = danhSachMonStr->Split(';');
                        for each (String ^ monAnStr in monAnParts) {
                            if (String::IsNullOrEmpty(monAnStr)) continue;

                            array<String^>^ monAnDetails = monAnStr->Split(':');
                            if (monAnDetails->Length < 5) {
                                Console::WriteLine("Món ăn không hợp lệ: " + monAnStr);
                                continue;
                            }

                            String^ loaiMon = monAnDetails[0];
                            String^ tenMon = monAnDetails[1];
                            String^ giaMon = monAnDetails[2];

                            int soLuong;
                            if (!Int32::TryParse(monAnDetails[3], soLuong)) {
                                Console::WriteLine("Số lượng không hợp lệ cho món: " + tenMon);
                                continue;
                            }

                            String^ imageName = monAnDetails[4];
                            String^ imagePath = Path::Combine(".\\Image\\", imageName);

                            MonAn^ monAnGoc = nullptr;
                            for each (MonAn ^ mon in danhSachMonAn) {
                                if (mon->TenMon == tenMon && mon->Gia == (giaMon + "$")) {
                                    monAnGoc = mon;
                                    break;
                                }
                            }

                            MonAn^ mon;
                            if (monAnGoc != nullptr) {
                                mon = gcnew MonAn(monAnGoc->LoaiMon, monAnGoc->TenMon, monAnGoc->Gia, imagePath);
                                mon->ID = monAnGoc->ID;
                            }
                            else {
                                mon = gcnew MonAn(loaiMon, tenMon, giaMon + "$", imagePath);
                            }
                            mon->SoLuong = soLuong;
                            targetTable->DanhSachMon->Add(mon);
                        }

                        if (targetTable->DanhSachMon->Count > 0) {
                            targetTable->TrangThai = L"Có Khách";
                            Console::WriteLine("Đọc bàn: " + soBan + " với " + targetTable->DanhSachMon->Count + " món");
                        }
                    }

                    if (banHienTai != nullptr) {
                        HienThiMonDaDat();
                        CapNhatTongTien();
                        Console::WriteLine("Khôi phục giao diện cho bàn: " + banHienTai->SoBan);
                    }
                }
                finally {
                    if (reader != nullptr) {
                        reader->Close();
                    }
                }

                if (danhSachBan != nullptr) {
                    ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Lỗi khi đọc file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

    void FormFood::XoaDanhSachMonTam() {
        try {
            if (banHienTai != nullptr) {
                if (banHienTai->DanhSachMon == nullptr) {
                    banHienTai->DanhSachMon = gcnew List<MonAn^>();
                }
                else {
                    banHienTai->DanhSachMon->Clear();
                }
                banHienTai->TrangThai = L"Trống";
            }

            LuuDanhSachMonVaoFile("tamthoi.txt");
            ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);

            HienThiMonDaDat();
            CapNhatTongTien();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Lỗi khi xóa danh sách món tạm: " + ex->Message, "Lỗi",
                MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
   


}