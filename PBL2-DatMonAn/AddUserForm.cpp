#include "AddUserForm.h"

namespace PBL2DatMonAn {
	System::Void AddUserForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtAddAccount->Text == "" || txtAddPass->Text == "" || txtNameStaff->Text == "" || dateTimePicker1->Value == DateTime::Now) {
			MessageBox::Show(L"Vui lòng nhập đầy đủ thông tin", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		// Thêm tài khoản vào database
		String^ acc = txtAddAccount->Text;
		String^ pass = txtAddPass->Text;
		String^ name = txtNameStaff->Text;
		String^ sex = cbSex->Text;
		String^ birt = dateTimePicker1->Text;
		String^ pos = cbPosition->Text;
		String^ role = "Nhân viên";

		User^ account = gcnew User(name, acc, pass, birt, sex, pos, role);
		danhsachTaiKhoan->Add(account);
		//ghi file
		User::GhiDanhSachTaiKhoan(danhsachTaiKhoan, filePath);
		MessageBox::Show(L"Thêm tài khoản thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Thêm panel mới vào FlowLayoutPanel
		AddPanelUser(account, danhsachTaiKhoan->Count);
		txtAddAccount->Clear();
		txtAddPass->Clear();
		txtNameStaff->Clear();
		cbSex->SelectedIndex = -1;
		cbPosition->SelectedIndex = -1;
		dateTimePicker1->Value = DateTime::Now;
	}

	System::Void AddUserForm::AddPanelUser(User^ user, int stt) {
		Panel^ AddPanel = gcnew Panel();
		AddPanel->Location = System::Drawing::Point(6, 40);
		AddPanel->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
		AddPanel->Name = L"panelUser";
		AddPanel->Tag = user;
		AddPanel->Size = System::Drawing::Size(923, 34);
		AddPanel->TabIndex = 1;

		// Định nghĩa font chung cho các label
		commonFont = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Regular);

		//add stt
		Label^ lblSTT = gcnew Label();
		lblSTT->AutoSize = true;
		lblSTT->Location = System::Drawing::Point(3, 9);
		lblSTT->Font = commonFont;
		lblSTT->Name = L"lblSTT";
		lblSTT->Size = System::Drawing::Size(38, 19);
		lblSTT->TabIndex = 0;
		lblSTT->Text = stt.ToString();

		//add name
		Label^ lblAddNameStaff = gcnew Label();
		lblAddNameStaff->AutoSize = true;
		lblAddNameStaff->Font = commonFont;
		lblAddNameStaff->Location = System::Drawing::Point(50, 9);
		lblAddNameStaff->Text = user->Name;
		lblAddNameStaff->Name = L"lblAddNameStaff";
		lblAddNameStaff->Size = System::Drawing::Size(100, 19);
		lblAddNameStaff->TabIndex = 1;

		//add sex
		Label^ lblAddSex = gcnew Label();
		lblAddSex->AutoSize = true;
		lblAddSex->Font = commonFont;
		lblAddSex->Location = System::Drawing::Point(220, 9);
		lblAddSex->Text = user->Sex;
		lblAddSex->Name = L"lblAddSex";
		lblAddSex->Size = System::Drawing::Size(72, 19);
		lblAddSex->TabIndex = 7;

		//add birtday
		Label^ lblAddBirtday = gcnew Label();
		lblAddBirtday->AutoSize = true;
		lblAddBirtday->Font = commonFont;
		lblAddBirtday->Location = System::Drawing::Point(300, 9);
		lblAddBirtday->Text = user->Birtday;
		lblAddBirtday->Name = L"lblAddBirtday";
		lblAddBirtday->Size = System::Drawing::Size(82, 19);
		lblAddBirtday->TabIndex = 7;

		//add account
		Label^ lblAddAccount = gcnew Label();
		lblAddAccount->AutoSize = true;
		lblAddAccount->Font = commonFont;
		lblAddAccount->Location = System::Drawing::Point(450, 9);
		lblAddAccount->Text = user->Account;
		lblAddAccount->Name = L"lblAddAccount";
		lblAddAccount->Size = System::Drawing::Size(80, 19);
		lblAddAccount->TabIndex = 7;

		//add pass
		Label^ lblAddPass = gcnew Label();
		lblAddPass->AutoSize = true;
		lblAddPass->Font = commonFont;
		lblAddPass->Location = System::Drawing::Point(535, 9);
		lblAddPass->Text = user->Password;
		lblAddPass->Name = L"lblAddPass";
		lblAddPass->Size = System::Drawing::Size(75, 19);
		lblAddPass->TabIndex = 7;

		//add position	
		Label^ lblAddPossition = gcnew Label();
		lblAddPossition->AutoSize = true;
		lblAddPossition->Font = commonFont;
		lblAddPossition->Location = System::Drawing::Point(600, 9);
		lblAddPossition->Text = user->Position;
		lblAddPossition->Name = L"lblAddPossition";
		lblAddPossition->Size = System::Drawing::Size(44, 19);
		lblAddPossition->TabIndex = 7;

		//add icon 
		PictureBox^ pictureBox1 = gcnew PictureBox();
		pictureBox1->Location = System::Drawing::Point(670, 3);
		pictureBox1->Name = L"pictureBox1";
		pictureBox1->Size = System::Drawing::Size(25, 25);
		pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		pictureBox1->TabIndex = 0;
		pictureBox1->BackColor = System::Drawing::Color::Transparent;
		pictureBox1->Cursor = Cursors::Hand;
		pictureBox1->BringToFront();
		pictureBox1->Parent = AddPanel;
		pictureBox1->Image = Image::FromFile(".\\Image\\thungrac2.png");

		pictureBox1->Tag = user;
		pictureBox1->Click += gcnew System::EventHandler(this, &AddUserForm::picBox_Click);


		AddPanel->Controls->Add(lblSTT);
		AddPanel->Controls->Add(lblAddNameStaff);
		AddPanel->Controls->Add(lblAddSex);
		AddPanel->Controls->Add(lblAddBirtday);
		AddPanel->Controls->Add(lblAddAccount);
		AddPanel->Controls->Add(lblAddPass);
		AddPanel->Controls->Add(lblAddPossition);
		AddPanel->Controls->Add(pictureBox1);
		flowLayoutPanel1->Controls->Add(AddPanel);
	}

	System::Void AddUserForm::picBox_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = (PictureBox^)sender;
		User^ userToDele = (User^)pic->Tag;

		if (MessageBox::Show(L"Bạn có chắc chắn muốn xóa tài khoản này không?", "Thông báo", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			danhsachTaiKhoan->Remove(userToDele);
			Panel^ panelToRemove = safe_cast<Panel^>(pic->Parent);
			flowLayoutPanel1->Controls->Remove(panelToRemove);
			UpdateStt();
			User::GhiDanhSachTaiKhoan(danhsachTaiKhoan, filePath);
			MessageBox::Show(L"Xóa tài khoản thành công", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	System::Void AddUserForm::UpdateStt() {
		// Cập nhật lại số thứ tự cho các label
		int stt = 1;
		for each (Control ^ control in flowLayoutPanel1->Controls)
		{
			if (control->Name == L"panelUser")
			{
				Panel^ panel = safe_cast<Panel^>(control);
				Label^ lblSTT = safe_cast<Label^>(panel->Controls["lblSTT"]);
				if (lblSTT != nullptr)
				{
					lblSTT->Text = stt.ToString();
					stt++;
				}
			}
		}
	}
}

