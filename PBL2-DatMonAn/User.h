#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <msclr/marshal.h> 
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Collections::Generic;
using namespace msclr::interop;
using namespace std;
using namespace System::Windows::Forms;
ref class User {
	//tao class User

	
public:
	String^ ID;
	String^ Name;
	String^ Account;
	String^ Password;
	String^ Birtday;
	String^ Sex;
	String^ Position;
	String^ Role;
	User(String^ name, String^ acc, String^ pass, String^ birt, String^ sex, String^ pos, String^ role) {
		DateTime now = DateTime::Now;
		ID = now.ToString("yyyyMMddHHmmss");
		Name = name;
		Account = acc;
		Password = pass;	
		Birtday = birt;
		Sex = sex;
		Position = pos;
		Role = role;
	}

	//ghi danh sach tai khoan
	static void GhiDanhSachTaiKhoan(List<User^>^ dsTaiKhoan, String^ filePath) {
		try {
			// Tạo StreamWriter với mã hóa UTF-8 và ghi nối tiếp (append)
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, false, System::Text::Encoding::UTF8);
			for each (User ^ account in dsTaiKhoan) {
				String^ dong = account->ID + "||" + account->Name + "||" + account->Account + "||" + account->Password + "||" + account->Birtday + "||" + account->Sex +"||" + account->Position + "||"+ account->Role;
				writer->WriteLine(dong); // Ghi từng dòng vào file
			}
			writer->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Lỗi khi ghi file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//doc danh sach tai khoan
	static List<User^>^ DocDanhSachTaiKhoan(String^ filePath) {
		List<User^>^ dsTaiKhoan = gcnew List<User^>();
		try {
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath, System::Text::Encoding::UTF8);
			String^ dong;
			while ((dong = reader->ReadLine()) != nullptr) {
				if (String::IsNullOrWhiteSpace(dong)) continue; // Bỏ qua dòng trống
				cli::array<String^>^ phan = dong->Split(gcnew cli::array<String^>{ "||" }, StringSplitOptions::RemoveEmptyEntries);
				if (phan->Length >= 8) {
					String^ idStr = phan[0];
					String^ nameStr = phan[1];
					String^ accStr = phan[2];
					String^ passStr = phan[3];
					String^ dayStr = phan[4];
					String^ sexStr = phan[5];
					String^ posStr = phan[6];
					String^ roleStr = phan[7];
					User^ account = gcnew User(nameStr, accStr, passStr, dayStr, sexStr, posStr, roleStr);
					account->ID = idStr; // Gán ID
					dsTaiKhoan->Add(account);
				}
			}
			reader->Close(); // Đóng file sau khi đọc xong
		}
		catch (Exception^ ex) {
			MessageBox::Show("Lỗi khi đọc file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		return dsTaiKhoan;
	}
};
