#include "FormFood.h"
#include "FormBill.h"
#include "MonAn.h"
using namespace System;
using namespace System::Windows::Forms;

namespace PBL2DatMonAn {


    //click vao tung mon an
    System::Void FormFood::panel_Clicked(System::Object^ sender, System::EventArgs^ e) {
        Control^ clicked = dynamic_cast<Control^>(sender);
        if (clicked == nullptr || clicked->Tag == nullptr) return;

        MonAn^ mon = dynamic_cast<MonAn^>(clicked->Tag);
        if (mon == nullptr) return;

        for each(Control ^ ctrl in flowLayoutPanel1->Controls) {
            if (ctrl->Tag == mon) {
                // Nếu đã có thì tăng số lượng
                NumericUpDown^ numSoLuong = dynamic_cast<NumericUpDown^>(ctrl->Controls[3]);
                numSoLuong->Value++;
                return;
            }
        }

        // Nếu chưa có, thêm món mới vào
        Panel^ panelOrder = gcnew Panel();
        panelOrder->Tag = mon;
        panelOrder->BackColor = System::Drawing::Color::IndianRed;
        panelOrder->Location = System::Drawing::Point(50, 50);
        panelOrder->Size = System::Drawing::Size(242, 124);
        panelOrder->TabIndex = 3;

        // Giá món ăn
        Label^ lblGia = gcnew Label();
        lblGia->Text = mon->Gia;
        lblGia->AutoSize = true;
        lblGia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        lblGia->Location = System::Drawing::Point(154, 48);
        lblGia->Size = System::Drawing::Size(43, 18);
        lblGia->TabIndex = 2;

        // NumericUpDown số lượng
        NumericUpDown^ numSoLuong = gcnew NumericUpDown();
        numSoLuong->Minimum = 0;
        numSoLuong->Maximum = 99;
        numSoLuong->Value = 1;
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
        try { picBox->Image = Image::FromFile(mon->Anh); }
        catch (...) {}

        // Tên món ăn
        Label^ lblTen = gcnew Label();
        lblTen->Text = mon->TenMon;
        lblTen->AutoSize = true;
        lblTen->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        lblTen->TabIndex = 1;
        lblTen->Location = System::Drawing::Point(154, 25);
        lblTen->Size = System::Drawing::Size(92, 23);

        // Bo góc panelOrder sau khi đã thêm các control
        BoGocControl(panelOrder, 20);
        // Thêm vào panel và flow
        panelOrder->Controls->Add(picBox);
        panelOrder->Controls->Add(lblTen);
        panelOrder->Controls->Add(lblGia);
        panelOrder->Controls->Add(numSoLuong);
        flowLayoutPanel1->Controls->Add(panelOrder);

        // Thêm vào panelPay
        panelOrder->Location = Point(5, flowLayoutPanel1->Controls->Count * 20); // Căn chỉnh vị trí theo chiều dọc

        //cap nhat tong tien
        CapNhatTongTien();
    }

    //thanhtoan
    System::Void FormFood::btnThanhToan_Click(System::Object^ sender, System::EventArgs^ e) {
        // Lấy danh sách món đã chọn
        auto danhsachMonDaChon = gcnew System::Collections::Generic::List<MonAn^>();

        for each (Control ^ ctrl in flowLayoutPanel1->Controls) {
            Panel^ panelOrder = dynamic_cast<Panel^>(ctrl);
            if (panelOrder == nullptr || panelOrder->Tag == nullptr)
                continue;
            MonAn^ mon = dynamic_cast<MonAn^>(panelOrder->Tag);
            if (mon == nullptr)
                continue;

            int soLuong = 1;
            for each (Control ^ child in panelOrder->Controls) {
                NumericUpDown^ num = dynamic_cast<NumericUpDown^>(child);
                if (num != nullptr) {
                    soLuong = Decimal::ToInt32(num->Value);
                    break;
                }
            }

            // Tạo bản sao của món ăn với số lượng đã chọn
            MonAn^ monMoi = gcnew MonAn(mon->LoaiMon, mon->TenMon, mon->Gia, mon->Anh);
            monMoi->SoLuong = soLuong;
            danhsachMonDaChon->Add(monMoi);
        }

        // Gọi FormBill với danh sách món đã chọn
        FormBill^ formBill = gcnew FormBill(danhsachMonDaChon);
        formBill->ShowDialog();
    }

	//loc danh sach mon
    System::Void FormFood::LocDanhSachMon(String^ loaiMon) {
        FlpFood->Controls->Clear();
        for each(MonAn ^ mon in danhSachMon) {
            if (loaiMon == "Tất cả" || mon->LoaiMon == loaiMon) {
                Panel^ panel = gcnew Panel();
                panel->BorderStyle = BorderStyle::FixedSingle;
                panel->BackColor = System::Drawing::SystemColors::ActiveCaption;
                panel->Location = System::Drawing::Point(23, 23);
                panel->Size = System::Drawing::Size(188, 118);
                panel->TabIndex = 0;
                panel->Tag = mon;
                panel->Click += gcnew EventHandler(this, &FormFood::panel_Clicked);
                BoGocControl(panel, 15);

                // Ảnh món ăn
                PictureBox^ picBox = gcnew PictureBox();
                picBox->Location = System::Drawing::Point(20, 4);
                picBox->Size = System::Drawing::Size(138, 86);
                picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                picBox->TabIndex = 0;
                picBox->BackColor = System::Drawing::Color::Transparent;
                picBox->Parent = panel;
                try { picBox->Image = Image::FromFile(mon->Anh); }
                catch (...) {}

                Label^ lblTen = gcnew Label();
                lblTen->Text = mon->TenMon;
                lblTen->AutoSize = true;
                lblTen->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                lblTen->Location = System::Drawing::Point(3, 91);
                lblTen->Size = System::Drawing::Size(92, 23);
                lblTen->TabIndex = 1;

                //gia
                Label^ lblGia = gcnew Label();
                lblGia->Text = mon->Gia;
                lblGia->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                lblGia->Location = System::Drawing::Point(126, 93);
                lblGia->Size = System::Drawing::Size(32, 20);
                lblGia->TabIndex = 2;

                panel->Controls->Add(picBox);
                panel->Controls->Add(lblTen);
                panel->Controls->Add(lblGia);

                FlpFood->Controls->Add(panel);

                // Các control bên trong cũng cần gán Tag để bắt được khi click:
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
    void BoGocControl(Control^ control, int radius) {
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
                double gia = 0;
                int soLuong = 1;

                for each(Control ^ child in panelOrder->Controls) {
                    if (Label^ lblGia = dynamic_cast<Label^>(child)) {
                        if (lblGia->Text->Contains(mon->Gia)) {
                            // Nếu label là giá (khớp nội dung với mon->Gia)
                            try {
                                gia = Convert::ToDouble(mon->Gia->Replace("$", ""));
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
}