#include "FormFood.h"
#include "FormBill.h"
#include "MonAn.h"
using namespace System;
using namespace System::Windows::Forms;

namespace PBL2DatMonAn {
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

        // Kiểm tra banHienTai và DanhSachMon
        if (banHienTai == nullptr || banHienTai->DanhSachMon == nullptr) {
            MessageBox::Show(L"Dữ liệu bàn hiện tại không hợp lệ.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        // Tìm món trong banHienTai->DanhSachMon bằng ID
        int index = -1;
        for (int i = 0; i < banHienTai->DanhSachMon->Count; i++) {
            if (banHienTai->DanhSachMon[i]->ID == mon->ID) {
                index = i;
                break;
            }
        }

        if (index >= 0) {
            // Món đã có trong danh sách, tăng số lượng
            banHienTai->DanhSachMon[index]->SoLuong++;
            // Cập nhật NumericUpDown trên giao diện
            for each(Control ^ ctrl in flowLayoutPanel1->Controls) {
                MonAn^ monInPanel = dynamic_cast<MonAn^>(ctrl->Tag);
                if (monInPanel != nullptr && monInPanel->ID == mon->ID) {
                    for each(Control ^ child in ctrl->Controls) {
                        NumericUpDown^ numSoLuong = dynamic_cast<NumericUpDown^>(child);
                        if (numSoLuong != nullptr) {
                            numSoLuong->Value = banHienTai->DanhSachMon[index]->SoLuong;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        else {
            // Món chưa có, thêm mới vào danh sách
            MonAn^ monMoi = gcnew MonAn(mon->LoaiMon, mon->TenMon, mon->Gia, mon->Anh);
            monMoi->ID = mon->ID; // Gán ID để đồng bộ
            monMoi->SoLuong = 1;
            banHienTai->DanhSachMon->Add(monMoi);
            banHienTai->TrangThai = L"Có Khách"; // Cập nhật trạng thái bàn

            // Tạo panel mới để hiển thị món đã chọn
            Panel^ panelOrder = gcnew Panel();
            panelOrder->Tag = monMoi; // Gán Tag là monMoi để đồng bộ
            panelOrder->BackColor = System::Drawing::Color::IndianRed;
            panelOrder->Size = System::Drawing::Size(268, 124);
            panelOrder->TabIndex = 3;

            // Giá món ăn
            Label^ lblGia = gcnew Label();
            lblGia->Text = monMoi->Gia + " $";
            lblGia->AutoSize = true;
            lblGia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblGia->Location = System::Drawing::Point(154, 48);
            lblGia->TabIndex = 2;

            // NumericUpDown số lượng
            NumericUpDown^ numSoLuong = gcnew NumericUpDown();
            numSoLuong->Minimum = 0;
            numSoLuong->Maximum = 99;
            numSoLuong->Value = monMoi->SoLuong;
            numSoLuong->ValueChanged += gcnew System::EventHandler(this, &FormFood::numSoLuong_ValueChanged);
            numSoLuong->Location = System::Drawing::Point(158, 80);
            numSoLuong->Size = System::Drawing::Size(36, 22);
            numSoLuong->TabIndex = 2;

            // Ảnh món ăn
            PictureBox^ picBox = gcnew PictureBox();
            picBox->Location = System::Drawing::Point(18, 3);
            picBox->Size = System::Drawing::Size(130, 116);
            picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            picBox->TabIndex = 0;
            picBox->TabStop = false;
            try {
                picBox->Image = Image::FromFile(monMoi->Anh);
            }
            catch (...) {
                picBox->Image = nullptr;
            }

            // Tên món ăn
            Label^ lblTen = gcnew Label();
            lblTen->Text = monMoi->TenMon;
            lblTen->AutoSize = true;
            lblTen->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblTen->TabIndex = 1;
            lblTen->Location = System::Drawing::Point(154, 25);

            // Bo góc panelOrder
            BoGocControl(panelOrder, 20);
            panelOrder->Controls->Add(picBox);
            panelOrder->Controls->Add(lblTen);
            panelOrder->Controls->Add(lblGia);
            panelOrder->Controls->Add(numSoLuong);
            flowLayoutPanel1->Controls->Add(panelOrder);
        }

        // Cập nhật tổng tiền
        CapNhatTongTien();
    }

    //thanhtoan
    System::Void FormFood::btnThanhToan_Click(System::Object^ sender, System::EventArgs^ e) {
		if (banHienTai->DanhSachMon->Count == 0) {
			MessageBox::Show(L"Không có món nào trong danh sách!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		//goi form bill
		FormBill^ formBill = gcnew FormBill(banHienTai->DanhSachMon, banHienTai,nameStaff, danhSachBan, banFilePath);
        formBill->ShowDialog();
        HienThiMonDaDat();
		CapNhatTongTien();
    }


    //loc danh sach mon
    System::Void FormFood::LocDanhSachMon(String^ loaiMon) {
        FlpFood->Controls->Clear(); // Xóa các control hiện có trong FlpFood
        for each(MonAn ^ mon in danhSachMonAn) {
            if (loaiMon == "Tất cả" || mon -> LoaiMon == loaiMon) { // Lọc món ăn
                Button^ button = gcnew Button();
                button->BackColor = Color::White;
                button->Location = System::Drawing::Point(23, 23);
                button->UseVisualStyleBackColor = true;
                button->Size = System::Drawing::Size(264, 115);
                button->TabIndex = 0;
                button->Tag = mon; // Gán món ăn vào Tag để xử lý khi click
                button->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
                button->Cursor = Cursors::Hand;

                // Ảnh món ăn
                PictureBox^ picBox = gcnew PictureBox();
                picBox->Location = System::Drawing::Point(10, 13);
                picBox->Size = System::Drawing::Size(100, 87);
                picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                picBox->TabIndex = 0;
                picBox->BackColor = System::Drawing::Color::Transparent;
                picBox->Parent = button;
                try {
                    picBox->Image = Image::FromFile(mon->Anh);
                    BoGocControl(picBox, 5); // Bo góc cho ảnh
                }
                catch (...) {
                    picBox->Image = nullptr; // Xử lý nếu ảnh không tồn tại
                }

                // Tên món ăn
                Label^ lblTen = gcnew Label();
                lblTen->Text = mon->TenMon;
                lblTen->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                lblTen->AutoSize = true;
                lblTen->Location = System::Drawing::Point(120, 15);
                lblTen->Size = System::Drawing::Size(92, 23);
                lblTen->BackColor = System::Drawing::Color::Transparent;
                lblTen->TabIndex = 1;

                // Giá món ăn
                Label^ lblGia = gcnew Label();
                lblGia->AutoSize = true;
                lblGia->Text = mon->Gia + " $";
                lblGia->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                lblGia->Location = System::Drawing::Point(126, 80);
                lblGia->Size = System::Drawing::Size(32, 20);
                lblGia->BackColor = System::Drawing::Color::Transparent;
                lblGia->TabIndex = 2;

                //icon
                PictureBox^ picIcon = gcnew PictureBox();
                picIcon->Location = System::Drawing::Point(230, 80);
                picIcon->Size = System::Drawing::Size(20, 20);
                picIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                picIcon->TabIndex = 0;
                picIcon->BackColor = System::Drawing::Color::Transparent;
                picIcon->BringToFront();
                picIcon->Parent = button;
                picIcon->Image = Image::FromFile(".\\Image\\iconAdd.png"); // Đường dẫn đến icon

                // Thêm các control vào button
                button->Controls->Add(picBox);
                button->Controls->Add(lblTen);
                button->Controls->Add(lblGia);

                // Thêm button vào FlpFood
                FlpFood->Controls->Add(button);

                // Gán Tag và sự kiện Click cho các control bên trong
                picBox->Tag = mon;
                lblTen->Tag = mon;
                lblGia->Tag = mon;
                picBox->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
                lblTen->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
                lblGia->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
            }
        }
    }

    //bo goc
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

    //tinh tien
    System::Void FormFood::CapNhatTongTien() {
        double tongTien = 0;

        for each(Control ^ ctrl in flowLayoutPanel1->Controls) {
            Panel^ panelOrder = dynamic_cast<Panel^>(ctrl);
            if (panelOrder != nullptr && panelOrder->Tag != nullptr) {
                // Lấy món ăn từ tag
                MonAn^ mon = dynamic_cast<MonAn^>(panelOrder->Tag);
                if (mon == nullptr) continue;

                // Tìm Label giá và NumericUpDown trong Controls
                double gia = 0.00;
                int soLuong = 1;

                for each(Control ^ child in panelOrder->Controls) {
                    if (Label^ lblGia = dynamic_cast<Label^>(child)) {
                        if (lblGia->Text->Contains(mon->Gia)) {
                            // Nếu label là giá (khớp nội dung với mon->Gia)
                            try {
                                gia = Convert::ToDouble(mon->Gia->Replace("$",""));
                            }
                            catch (...) {}
                        }
                    }
                    else if (NumericUpDown^ num = dynamic_cast<NumericUpDown^>(child)) {
                        soLuong = Decimal::ToInt32(num->Value);
                    }
                }

                tongTien += gia * soLuong;
            }
        }

        txtMoney->Text = tongTien.ToString("F2") + " $";
    }

    //System::Void FormFood::HienThiMonDaDat() {
    //    flowLayoutPanel1->Controls->Clear();
    //    if (banHienTai->DanhSachMon->Count > 0) {
    //        for each (MonAn ^ mon in banHienTai->DanhSachMon) {
    //            Panel^ panelOrder = gcnew Panel();
    //            panelOrder->Tag = mon;
    //            panelOrder->BackColor = System::Drawing::Color::IndianRed;
    //            panelOrder->Size = System::Drawing::Size(268, 124);

    //            Label^ lblGia = gcnew Label();
    //            lblGia->Text = mon->Gia + "$";
    //            lblGia->AutoSize = true;
    //            lblGia->Font = gcnew Drawing::Font(L"Microsoft Sans Serif", 10.2F);
    //            lblGia->Location = System::Drawing::Point(154, 48);

    //            NumericUpDown^ numSoLuong = gcnew NumericUpDown();
    //            numSoLuong->Minimum = 0;
    //            numSoLuong->Maximum = 99;
    //            numSoLuong->Value = mon->SoLuong;
    //            numSoLuong->ValueChanged += gcnew System::EventHandler(this, &FormFood::numSoLuong_ValueChanged);
    //            numSoLuong->Location = System::Drawing::Point(158, 80);
    //            numSoLuong->Size = System::Drawing::Size(36, 22);

    //            PictureBox^ picBox = gcnew PictureBox();
    //            picBox->Location = System::Drawing::Point(18, 3);
    //            picBox->Size = System::Drawing::Size(130, 116);
    //            picBox->SizeMode = PictureBoxSizeMode::StretchImage;
    //            try {
    //                picBox->Image = Image::FromFile(mon->Anh);
    //            }
    //            catch (...) {
    //                picBox->Image = nullptr; // Xử lý nếu ảnh không tồn tại
    //            }

    //            Label^ lblTen = gcnew Label();
    //            lblTen->Text = mon->TenMon;
    //            lblTen->AutoSize = true;
    //            lblTen->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10.2F, FontStyle::Bold);
    //            lblTen->Location = System::Drawing::Point(154, 25);

    //            BoGocControl(panelOrder, 20);
    //            panelOrder->Controls->Add(picBox);
    //            panelOrder->Controls->Add(lblTen);
    //            panelOrder->Controls->Add(lblGia);
    //            panelOrder->Controls->Add(numSoLuong);
    //            flowLayoutPanel1->Controls->Add(panelOrder);
    //        }
    //        CapNhatTongTien();
    //    }
    //}

    System::Void FormFood::HienThiMonDaDat() {
        flowLayoutPanel1->Controls->Clear();
        if (banHienTai->DanhSachMon != nullptr && banHienTai->DanhSachMon->Count > 0) {
            for each(MonAn ^ mon in banHienTai->DanhSachMon) {
                // Tìm món ăn trong danhSachMonAn để lấy thông tin đầy đủ (nếu cần)
                MonAn^ monDayDu = nullptr;
                for each(MonAn ^ monAn in danhSachMonAn) {
                    if (monAn->ID == mon->ID) {
                        monDayDu = monAn;
                        break;
                    }
                }

                if (monDayDu == nullptr) {
                    // Nếu không tìm thấy món trong danhSachMonAn, bỏ qua hoặc xử lý lỗi
                    continue;
                }

                Panel^ panelOrder = gcnew Panel();
                panelOrder->Tag = mon;
                panelOrder->BackColor = System::Drawing::Color::IndianRed;
                panelOrder->Size = System::Drawing::Size(268, 124);

                Label^ lblGia = gcnew Label();
                lblGia->Text = monDayDu->Gia + "$";
                lblGia->AutoSize = true;
                lblGia->Font = gcnew Drawing::Font(L"Microsoft Sans Serif", 10.2F);
                lblGia->Location = System::Drawing::Point(154, 48);

                NumericUpDown^ numSoLuong = gcnew NumericUpDown();
                numSoLuong->Minimum = 0;
                numSoLuong->Maximum = 99;
                numSoLuong->Value = mon->SoLuong; // Sử dụng SoLuong từ DanhSachMon
                numSoLuong->ValueChanged += gcnew System::EventHandler(this, &FormFood::numSoLuong_ValueChanged);
                numSoLuong->Location = System::Drawing::Point(158, 80);
                numSoLuong->Size = System::Drawing::Size(36, 22);

                PictureBox^ picBox = gcnew PictureBox();
                picBox->Location = System::Drawing::Point(18, 3);
                picBox->Size = System::Drawing::Size(130, 116);
                picBox->SizeMode = PictureBoxSizeMode::StretchImage;
                try {
                    picBox->Image = Image::FromFile(monDayDu->Anh);
                }
                catch (...) {
                    picBox->Image = nullptr; // Xử lý nếu ảnh không tồn tại
                }

                Label^ lblTen = gcnew Label();
                lblTen->Text = monDayDu->TenMon;
                lblTen->AutoSize = true;
                lblTen->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10.2F, FontStyle::Bold);
                lblTen->Location = System::Drawing::Point(154, 25);

                BoGocControl(panelOrder, 20);
                panelOrder->Controls->Add(picBox);
                panelOrder->Controls->Add(lblTen);
                panelOrder->Controls->Add(lblGia);
                panelOrder->Controls->Add(numSoLuong);
                flowLayoutPanel1->Controls->Add(panelOrder);
            }
            CapNhatTongTien();
        }
    }
}