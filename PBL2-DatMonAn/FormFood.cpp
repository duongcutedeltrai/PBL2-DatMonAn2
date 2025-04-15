#include "FormFood.h"
#include "FormBill.h"
#include "MonAn.h"
using namespace System;
using namespace System::Windows::Forms;

namespace PBL2DatMonAn {
    System::Void FormFood::FormFood_Load(System::Object^ sender, System::EventArgs^ e) {
        BoGocControl(FlpFood, 5);
        BoGocControl(pnListFood, 20);
        BoGocControl(pnNav, 20);

        danhSachMonAn = MonAn::DocDanhSachMonAn(FoodfilePath);
        if (danhSachMonAn == nullptr || danhSachMonAn->Count == 0) {
            MessageBox::Show(L"Không có dữ liệu trong file");
        }
        else {
            HienThiDanhSachMon();
            HienThiMonDaDat();
        }
    }

    System::Void FormFood::HienThiDanhSachMon() {
        FlpFood->Controls->Clear();
        for each (MonAn ^ mon in danhSachMonAn)
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
                BoGocControl(picBox, 5);
            }
            catch (...) {
                picBox->Image = nullptr; // Xử lý nếu ảnh không tồn tại
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

            //gia
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



            button->Controls->Add(picBox);
            button->Controls->Add(lblTen);
            button->Controls->Add(lblGia);

            FlpFood->Controls->Add(button);
            // Các control bên trong cũng cần gán Tag để bắt được khi click:
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
            monMoi->ID = mon->ID; // Gán ID để đồng bộ
            monMoi->SoLuong = 1;
            banHienTai->DanhSachMon->Add(monMoi);
            banHienTai->TrangThai = L"Có Khách"; // Cập nhật trạng thái bàn
        }

        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        HienThiMonDaDat(); // Cập nhật giao diện
        CapNhatTongTien();
    }

    System::Void FormFood::HienThiMonDaDat() {
        flowLayoutPanel1->Controls->Clear();
        if (banHienTai->DanhSachMon != nullptr && banHienTai->DanhSachMon->Count > 0) {
            for each (MonAn ^ mon in banHienTai->DanhSachMon) {
                Panel^ panelOrder = gcnew Panel();
                panelOrder->Tag = mon;
                panelOrder->BackColor = System::Drawing::Color::WhiteSmoke;
                panelOrder->Size = System::Drawing::Size(268, 124);

                Label^ lblGia = gcnew Label();
                lblGia->Text = mon->Gia + "$";
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
                    picBox->Image = nullptr; // Xử lý nếu ảnh không tồn tại
                }

                // Nút cộng
                PictureBox^ picIconAdd = gcnew PictureBox();
                picIconAdd->Location = System::Drawing::Point(154, 80);
                picIconAdd->Size = System::Drawing::Size(20, 20);
                picIconAdd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                picIconAdd->BackColor = System::Drawing::Color::Transparent;
				picIconAdd->Cursor = System::Windows::Forms::Cursors::Hand;
                picIconAdd->BringToFront();
                picIconAdd->Parent = panelOrder;
                picIconAdd->Image = Image::FromFile(".\\Image\\iconCong.jpg");
                picIconAdd->Tag = mon; // Gán Tag để biết món nào được nhấn
                picIconAdd->Click += gcnew EventHandler(this, &FormFood::btnAdd_Click); // Thêm sự kiện Click

                // Nút trừ
                PictureBox^ picIconSubTract = gcnew PictureBox();
                picIconSubTract->Location = System::Drawing::Point(230, 80);
                picIconSubTract->Size = System::Drawing::Size(20, 20);
                picIconSubTract->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                picIconSubTract->BackColor = System::Drawing::Color::Transparent;
				picIconSubTract->Cursor = System::Windows::Forms::Cursors::Hand;
                picIconSubTract->BringToFront();
                picIconSubTract->Parent = panelOrder;
                picIconSubTract->Image = Image::FromFile(".\\Image\\iconSubTract (1).png");
                picIconSubTract->Tag = mon; // Gán Tag để biết món nào được nhấn
                picIconSubTract->Click += gcnew EventHandler(this, &FormFood::btnSubtract_Click); // Thêm sự kiện Click

                Label^ lblTen = gcnew Label();
                lblTen->Text = mon->TenMon;
                lblTen->AutoSize = true;
                lblTen->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10.2F, FontStyle::Bold);
                lblTen->Location = System::Drawing::Point(154, 25);

                // Hiển thị số lượng
                Label^ lblSoLuong = gcnew Label();
                lblSoLuong->Text = mon->SoLuong.ToString();
                lblSoLuong->AutoSize = true;
                lblSoLuong->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10.2F);
                lblSoLuong->Location = System::Drawing::Point(190, 80); // Đặt giữa nút cộng và trừ
                lblSoLuong->Name = "lblSoLuong"; // Đặt tên để dễ tìm sau này

                BoGocControl(panelOrder, 20);
                panelOrder->Controls->Add(picBox);
                panelOrder->Controls->Add(lblTen);
                panelOrder->Controls->Add(lblGia);
                panelOrder->Controls->Add(picIconAdd);
                panelOrder->Controls->Add(picIconSubTract);
                panelOrder->Controls->Add(lblSoLuong); // Thêm label số lượng
                flowLayoutPanel1->Controls->Add(panelOrder);
            }
            danhSachMonAn = MonAn::DocDanhSachMonAn(FoodfilePath);
            ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
            CapNhatTongTien();
        }
    }

    System::Void FormFood::btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
        PictureBox^ picIconAdd = dynamic_cast<PictureBox^>(sender);
        if (picIconAdd == nullptr || picIconAdd->Tag == nullptr) return;

        MonAn^ mon = dynamic_cast<MonAn^>(picIconAdd->Tag);
        if (mon == nullptr) return;

        // Tăng số lượng món
        mon->SoLuong++;

        // Tìm panel chứa món và cập nhật label số lượng
        Panel^ panelOrder = dynamic_cast<Panel^>(picIconAdd->Parent);
        if (panelOrder != nullptr) {
            for each (Control ^ ctrl in panelOrder->Controls) {
                if (Label^ lblSoLuong = dynamic_cast<Label^>(ctrl)) {
                    if (lblSoLuong->Name == "lblSoLuong") {
                        lblSoLuong->Text = mon->SoLuong.ToString();
                        break;
                    }
                }
            }
        }

        // Ghi lại thay đổi vào file
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        CapNhatTongTien();
    }

    System::Void FormFood::btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
        PictureBox^ picIconSubTract = dynamic_cast<PictureBox^>(sender);
        if (picIconSubTract == nullptr || picIconSubTract->Tag == nullptr) return;

        MonAn^ mon = dynamic_cast<MonAn^>(picIconSubTract->Tag);
        if (mon == nullptr) return;

        // Giảm số lượng món
        mon->SoLuong--;

        if (mon->SoLuong <= 0) {
            // Xóa món khỏi danh sách nếu số lượng về 0
            banHienTai->DanhSachMon->Remove(mon);
            if (banHienTai->DanhSachMon->Count == 0) {
                banHienTai->TrangThai = L"Trống";
            }
            // Cập nhật giao diện
            HienThiMonDaDat();
        }
        else {
            // Cập nhật label số lượng
            Panel^ panelOrder = dynamic_cast<Panel^>(picIconSubTract->Parent);
            if (panelOrder != nullptr) {
                for each (Control ^ ctrl in panelOrder->Controls) {
                    if (Label^ lblSoLuong = dynamic_cast<Label^>(ctrl)) {
                        if (lblSoLuong->Name == "lblSoLuong") {
                            lblSoLuong->Text = mon->SoLuong.ToString();
                            break;
                        }
                    }
                }
            }
        }

        // Ghi lại thay đổi vào file
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        CapNhatTongTien();
    }

    System::Void FormFood::pictureBox__clicked(System::Object^ sender, System::EventArgs^ e) {
        // Nếu bấm vào ảnh, gọi sự kiện Click của panel chứa nó
        PictureBox^ picBox = dynamic_cast<PictureBox^>(sender);
        if (picBox != nullptr && picBox->Parent != nullptr) {
            panel_Clicked(picBox->Parent, e); // Gọi hàm panel__clicked
        }
    }

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

    System::Void FormFood::btnChangerTable_Click(System::Object^ sender, System::EventArgs^ e) {
        //ktra ban
        if (cbChangerTable->SelectedIndex == -1) {
            MessageBox::Show("Vui lòng chọn bàn để chuyển");
            return;
        }

        //lay so ban dc chon tu cbb
        String^ soBanMoi = cbChangerTable->SelectedItem->ToString();

        if (soBanMoi == banHienTai->SoBan) {
            MessageBox::Show(L"Bàn được chọn là bàn trung với bàn hiện tại", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        //tim ban moi
        ManagerTable^ banMoi = nullptr;
        for each (ManagerTable ^ ban in danhSachBan) {
            if (ban->SoBan == soBanMoi) {
                banMoi = ban;
                break;
            }
        }

        if (banMoi == nullptr) {
            MessageBox::Show(L"Bàn được chọn không tồn tại", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        //ktra ban trang thai ban moi
        if (banMoi->TrangThai != L"Trống") {
            MessageBox::Show(L"Bàn được chọn đã có người ngồi", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        //kiem tra ban hien tai
        if (banHienTai->DanhSachMon == nullptr || banHienTai->DanhSachMon->Count == 0) {
            MessageBox::Show(L"Bàn hiện tại không có món nào để chuyển", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        //chuyen danh sach mon
        banMoi->DanhSachMon = gcnew List<MonAn^>();
        for each (MonAn ^ mon in banHienTai->DanhSachMon) {
            MonAn^ monMoi = gcnew MonAn(mon->LoaiMon, mon->TenMon, mon->Gia, mon->Anh);
            monMoi->ID = mon->ID;
            monMoi->SoLuong = mon->SoLuong;
            banMoi->DanhSachMon->Add(monMoi);
        }

        //cap nhat trang thai ban moi
        banMoi->TrangThai = L"Có Khách";
        banHienTai->TrangThai = L"Trống";
        banHienTai->DanhSachMon->Clear();

        //thay doi file
        if (danhSachBan != nullptr) {
            //ghi file
            ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        }

        //cap nhat banhientai thanh ban moi
        banHienTai = banMoi;

        //cap nhat giao dien;
        HienThiMonDaDat();
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        CapNhatTongTien();

        //thong bao thanh cong
        MessageBox::Show(L"Chuyển sang" + soBanMoi + L" thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

    //thanhtoan
    System::Void FormFood::btnThanhToan_Click(System::Object^ sender, System::EventArgs^ e) {
		if (banHienTai->DanhSachMon->Count == 0) {
			MessageBox::Show(L"Không có món nào trong danh sách!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		//goi form bill
		FormBill^ formBill = gcnew FormBill(banHienTai->DanhSachMon, banHienTai,nameStaff, danhSachBan, banFilePath, addHistoryBillForm);
        formBill->ShowDialog();
        HienThiMonDaDat();
		CapNhatTongTien();
    }

    System::Void FormFood::btnTrangChu_Click(System::Object^ sender, System::EventArgs^ e) {
        ManagerTable::GhiDanhSachBan(danhSachBan, banFilePath);
        formStaff^ trangChu = gcnew formStaff(nameStaff);
        trangChu->Show();
        this->Close();
    }


    //loc danh sach mon

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
        double tongTien = 0.0;

        if (banHienTai != nullptr && banHienTai->DanhSachMon != nullptr) {
            for each (MonAn ^ mon in banHienTai->DanhSachMon) {
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

   
}