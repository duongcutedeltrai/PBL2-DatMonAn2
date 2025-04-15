#pragma once
#include "PayMent.h"
#include "MonAn.h"
namespace PBL2DatMonAn {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class AddHistoryBillForm : public System::Windows::Forms::UserControl
    {
    public:
        AddHistoryBillForm(void)
        {
            InitializeComponent();
            billFilePath = "bill.txt";
            lastBillDate = DateTime::MinValue;

            checkDateTimer = gcnew System::Windows::Forms::Timer();
            checkDateTimer->Interval = 60000; // 60 giây
            checkDateTimer->Tick += gcnew System::EventHandler(this, &AddHistoryBillForm::CheckDateTimer_Tick);
            checkDateTimer->Start();
            UpdateHistory();
        }

        

    protected:
        ~AddHistoryBillForm()
        {
            if (components)
            {
                delete components;
            }
            if (checkDateTimer) {
                checkDateTimer->Stop();
                delete checkDateTimer;
            }
        }

    private:
        System::String^ billFilePath;
        System::Drawing::Font^ commonFont;
        System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ lblNav1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ lblNav4;
        System::Windows::Forms::Label^ lblNav3;
        System::Windows::Forms::Label^ lblNav2;
        System::Windows::Forms::Label^ lblNav6;
		DateTime lastBillDate;
        System::Windows::Forms::Timer^ checkDateTimer; 
    private: System::Windows::Forms::Label^ lblTIenMatTotal;
    private: System::Windows::Forms::Label^ lblChuyenKoanTotal;
    private: System::Windows::Forms::Label^ lblTotal;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lblNav6 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->lblNav4 = (gcnew System::Windows::Forms::Label());
            this->lblNav3 = (gcnew System::Windows::Forms::Label());
            this->lblNav2 = (gcnew System::Windows::Forms::Label());
            this->lblNav1 = (gcnew System::Windows::Forms::Label());
            this->lblTIenMatTotal = (gcnew System::Windows::Forms::Label());
            this->lblChuyenKoanTotal = (gcnew System::Windows::Forms::Label());
            this->lblTotal = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->flowLayoutPanel1->Controls->Add(this->panel1);
            this->flowLayoutPanel1->Location = System::Drawing::Point(11, 43);
            this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(1128, 515);
            this->flowLayoutPanel1->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
                static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->panel1->Controls->Add(this->lblNav6);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->lblNav4);
            this->panel1->Controls->Add(this->lblNav3);
            this->panel1->Controls->Add(this->lblNav2);
            this->panel1->Controls->Add(this->lblNav1);
            this->panel1->Location = System::Drawing::Point(3, 0);
            this->panel1->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1123, 38);
            this->panel1->TabIndex = 0;
            // 
            // lblNav6
            // 
            this->lblNav6->AutoSize = true;
            this->lblNav6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblNav6->Location = System::Drawing::Point(945, 7);
            this->lblNav6->Name = L"lblNav6";
            this->lblNav6->Size = System::Drawing::Size(153, 24);
            this->lblNav6->TabIndex = 5;
            this->lblNav6->Text = L"Giờ thanh toán";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->label1->Location = System::Drawing::Point(639, 7);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(245, 24);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Phương thức thanh toán";
            // 
            // lblNav4
            // 
            this->lblNav4->AutoSize = true;
            this->lblNav4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblNav4->Location = System::Drawing::Point(437, 7);
            this->lblNav4->Name = L"lblNav4";
            this->lblNav4->Size = System::Drawing::Size(100, 24);
            this->lblNav4->TabIndex = 3;
            this->lblNav4->Text = L"Tổng tiền";
            // 
            // lblNav3
            // 
            this->lblNav3->AutoSize = true;
            this->lblNav3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblNav3->Location = System::Drawing::Point(317, 7);
            this->lblNav3->Name = L"lblNav3";
            this->lblNav3->Size = System::Drawing::Size(47, 24);
            this->lblNav3->TabIndex = 2;
            this->lblNav3->Text = L"Bàn";
            // 
            // lblNav2
            // 
            this->lblNav2->AutoSize = true;
            this->lblNav2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblNav2->Location = System::Drawing::Point(125, 7);
            this->lblNav2->Name = L"lblNav2";
            this->lblNav2->Size = System::Drawing::Size(146, 24);
            this->lblNav2->TabIndex = 1;
            this->lblNav2->Text = L"Tên Nhân viên";
            // 
            // lblNav1
            // 
            this->lblNav1->AutoSize = true;
            this->lblNav1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNav1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(18)));
            this->lblNav1->Location = System::Drawing::Point(19, 7);
            this->lblNav1->Name = L"lblNav1";
            this->lblNav1->Size = System::Drawing::Size(49, 24);
            this->lblNav1->TabIndex = 0;
            this->lblNav1->Text = L"STT";
            this->lblNav1->Click += gcnew System::EventHandler(this, &AddHistoryBillForm::lblNav1_Click);
            // 
            // lblTIenMatTotal
            // 
            this->lblTIenMatTotal->AutoSize = true;
            this->lblTIenMatTotal->Location = System::Drawing::Point(452, 10);
            this->lblTIenMatTotal->Name = L"lblTIenMatTotal";
            this->lblTIenMatTotal->Size = System::Drawing::Size(62, 16);
            this->lblTIenMatTotal->TabIndex = 1;
            this->lblTIenMatTotal->Text = L"Tiền mặt:";
            // 
            // lblChuyenKoanTotal
            // 
            this->lblChuyenKoanTotal->AutoSize = true;
            this->lblChuyenKoanTotal->Location = System::Drawing::Point(725, 10);
            this->lblChuyenKoanTotal->Name = L"lblChuyenKoanTotal";
            this->lblChuyenKoanTotal->Size = System::Drawing::Size(95, 16);
            this->lblChuyenKoanTotal->TabIndex = 2;
            this->lblChuyenKoanTotal->Text = L"Chuyển khoản:";
            // 
            // lblTotal
            // 
            this->lblTotal->AutoSize = true;
            this->lblTotal->Location = System::Drawing::Point(168, 10);
            this->lblTotal->Name = L"lblTotal";
            this->lblTotal->Size = System::Drawing::Size(66, 16);
            this->lblTotal->TabIndex = 3;
            this->lblTotal->Text = L"Tổng tiền:";
            // 
            // AddHistoryBillForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->lblTotal);
            this->Controls->Add(this->lblChuyenKoanTotal);
            this->Controls->Add(this->lblTIenMatTotal);
            this->Controls->Add(this->flowLayoutPanel1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"AddHistoryBillForm";
            this->Size = System::Drawing::Size(1155, 561);
            this->Load += gcnew System::EventHandler(this, &AddHistoryBillForm::AddHistoryBillForm_Load);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private:
    System::Void AddHistoryBillForm_Load(System::Object^ sender, System::EventArgs^ e) {
        System::Diagnostics::Debug::WriteLine("AddHistoryBillForm loaded.");
        UpdateHistory(); // Gọi UpdateHistory khi form được tải
    }

  public:  System::Void UpdateHistory() {
        List<PayMent^>^ danhSachHoaDon = PayMent::DocDanhSachHoaDon(billFilePath);
        DateTime currentDate = DateTime::Now.Date;

        if (danhSachHoaDon->Count > 0) {
            lastBillDate = danhSachHoaDon[danhSachHoaDon->Count - 1]->ThoiGianThanhToan.Date;
        }
        else {
            lastBillDate = DateTime::MinValue;
        }

        // Xóa tất cả btnBill trong flowLayoutPanel1 (trừ panel1)
        for (int i = flowLayoutPanel1->Controls->Count - 1; i >= 0; i--) {
            if (flowLayoutPanel1->Controls[i] != panel1) {
                flowLayoutPanel1->Controls->RemoveAt(i);
            }
        }



        // Nếu sang ngày mới, không hiển thị hóa đơn
        if (lastBillDate != DateTime::MinValue && currentDate > lastBillDate) {
			lblTotal->Text = "Tổng tiền: 0$";
			lblTIenMatTotal->Text = "Tiền mặt: 0$";
			lblChuyenKoanTotal->Text = "Chuyển khoản: 0$";
            return;
        }

		double total = 0.0;
		double chuyenKhoanTotal = 0.0;
		double tienMatTotal = 0.0;

        // Hiển thị chỉ các hóa đơn của ngày hiện tại
        int stt = 1;
        for each(PayMent ^ bill in danhSachHoaDon) {
            if (bill->ThoiGianThanhToan.Date == currentDate) { // Chỉ hiển thị hóa đơn của ngày hiện tại
                total += bill->TongTien;
				if (bill->PhuongThucThanhToan == L"Chuyển khoản") {
					chuyenKhoanTotal += bill->TongTien;
				}
				else if (bill->PhuongThucThanhToan == L"Tiền mặt") {
					tienMatTotal += bill->TongTien;
				}

				AddPanelDonHang(bill, stt++);
            }
        }

		lblTotal->Text = L"Tổng tiền: " + total.ToString("F2") + "$";
		lblTIenMatTotal->Text = L"Tiền mặt: " + tienMatTotal.ToString("F2") + "$";
		lblChuyenKoanTotal->Text = L"Chuyển khoản: " + chuyenKhoanTotal.ToString("F2") + "$";
    }
    private:
        void AddPanelDonHang(PayMent^ bill, int stt) {
            Button^ btnBill = gcnew Button();
            btnBill->Size = System::Drawing::Size(1123, 30);
            btnBill->BackColor = Color::White;
            btnBill->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
            btnBill->UseVisualStyleBackColor = true;
            btnBill->Tag = bill;
            btnBill->TabIndex = 0;
            btnBill->Cursor = Cursors::Hand;
			btnBill->Click += gcnew System::EventHandler(this, &AddHistoryBillForm::btnBill_Click);

            commonFont = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Regular);

            Label^ lblSTT = gcnew Label();
            lblSTT->AutoSize = true;
            lblSTT->Location = System::Drawing::Point(25, 8);
            lblSTT->Font = commonFont;
            lblSTT->Name = L"lblSTT";
            lblSTT->Size = System::Drawing::Size(38, 19);
            lblSTT->TabIndex = 0;
            lblSTT->Text = stt.ToString();

            Label^ lblAddNameStaff = gcnew Label();
            lblAddNameStaff->AutoSize = true;
            lblAddNameStaff->Font = commonFont;
            lblAddNameStaff->Location = System::Drawing::Point(126, 8);
            lblAddNameStaff->Text = bill->TenNhanVien;
            lblAddNameStaff->Name = L"lblAddNameStaff";
            lblAddNameStaff->Size = System::Drawing::Size(113, 19);
            lblAddNameStaff->TabIndex = 1;

            Label^ lblAddSoBan = gcnew Label();
            lblAddSoBan->AutoSize = true;
            lblAddSoBan->Font = commonFont;
            lblAddSoBan->Location = System::Drawing::Point(317, 8);
            lblAddSoBan->Text = bill->SoBan;
            lblAddSoBan->Name = L"lblAddSoBan";
            lblAddSoBan->Size = System::Drawing::Size(38, 19);
            lblAddSoBan->TabIndex = 2;

            Label^ lblAddTongTien = gcnew Label();
            lblAddTongTien->AutoSize = true;
            lblAddTongTien->Font = commonFont;
            lblAddTongTien->Location = System::Drawing::Point(437, 8);
            lblAddTongTien->Text = bill->TongTien.ToString("F2") + "$";
            lblAddTongTien->Name = L"lblAddTongTien";
            lblAddTongTien->Size = System::Drawing::Size(76, 19);
            lblAddTongTien->TabIndex = 3;

            Label^ lblAddPhuongThuc = gcnew Label();
            lblAddPhuongThuc->AutoSize = true;
            lblAddPhuongThuc->Font = commonFont;
            lblAddPhuongThuc->Location = System::Drawing::Point(530, 8);
            lblAddPhuongThuc->Text = bill->PhuongThucThanhToan;
            lblAddPhuongThuc->Name = L"lblAddPhuongThuc";
            lblAddPhuongThuc->Size = System::Drawing::Size(188, 19);    
            lblAddPhuongThuc->TabIndex = 4;

            Label^ lblAddThoiGian = gcnew Label();
            lblAddThoiGian->AutoSize = true;
            lblAddThoiGian->Font = commonFont;
            lblAddThoiGian->Location = System::Drawing::Point(700, 8);
            lblAddThoiGian->Text = bill->ThoiGianThanhToan.ToString("yyyy-MM-dd HH:mm:ss");
            lblAddThoiGian->Name = L"lblAddThoiGian";
            lblAddThoiGian->Size = System::Drawing::Size(117, 19);
            lblAddThoiGian->TabIndex = 5;

            btnBill->Controls->Add(lblSTT);
            btnBill->Controls->Add(lblAddNameStaff);
            btnBill->Controls->Add(lblAddSoBan);
            btnBill->Controls->Add(lblAddTongTien);
            btnBill->Controls->Add(lblAddPhuongThuc);
            btnBill->Controls->Add(lblAddThoiGian);

            flowLayoutPanel1->Controls->Add(btnBill);
        }

    // mở form khi click vào btnBill
        private:
            System::Void btnBill_Click(System::Object^ sender, System::EventArgs^ e) {
                Button^ clickedButton = safe_cast<Button^>(sender);
                PayMent^ bill = safe_cast<PayMent^>(clickedButton->Tag);

                if (bill == nullptr || bill->DanhSachMon == nullptr || bill->DanhSachMon->Count == 0) {
                    MessageBox::Show(L"Hóa đơn này không có món ăn nào.", "Thông tin", MessageBoxButtons::OK, MessageBoxIcon::Hand);
                    return;
                }

                // Tạo chuỗi hiển thị danh sách món ăn
                String^ danhSachMonAnStr = L"Danh sách món ăn:\n\n";
                for each(MonAn ^ mon in bill->DanhSachMon) {
                    danhSachMonAnStr += String::Format(L"Loại món: {0}, Tên món: {1}, Giá: {2}, Số lượng : {3}\n",
                        mon->LoaiMon, mon->TenMon, mon->Gia + "$", mon->SoLuong);
                }

                MessageBox::Show(danhSachMonAnStr, L"Chi tiết hóa đơn", MessageBoxButtons::OK, MessageBoxIcon::None);
            } 


private:
    System::Void CheckDateTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
        System::Diagnostics::Debug::WriteLine("Timer ticked, checking for new day...");
        UpdateHistory(); // Gọi UpdateHistory định kỳ để kiểm tra ngày mới
    }
    private: System::Void lblNav1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}