#include "User.h"

namespace PBL2DatMonAn {
    // Constructor
    User::User(String^ name, String^ acc, String^ pass, String^ birt, String^ sex, String^ pos, String^ role) {
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

    // Ghi danh sách tài khoản vào file
    void User::GhiDanhSachTaiKhoan(List<User^>^ dsTaiKhoan, String^ filePath) {
        try {
            System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, false, System::Text::Encoding::UTF8);
            for each (User ^ account in dsTaiKhoan) {
                String^ dong = String::Format("{0}||{1}||{2}||{3}||{4}||{5}||{6}||{7}",
                    account->ID, account->Name, account->Account, account->Password,
                    account->Birtday, account->Sex, account->Position, account->Role);
                writer->WriteLine(dong);
            }
            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Lỗi khi ghi file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    // Đọc danh sách tài khoản từ file
    List<User^>^ User::DocDanhSachTaiKhoan(String^ filePath) {
        List<User^>^ dsTaiKhoan = gcnew List<User^>();
        try {
            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath, System::Text::Encoding::UTF8);
            String^ dong;
            while ((dong = reader->ReadLine()) != nullptr) {
                if (String::IsNullOrWhiteSpace(dong)) continue; // Bỏ qua dòng trống
                cli::array<String^>^ phan = dong->Split(gcnew cli::array<String^>{ "||" }, StringSplitOptions::RemoveEmptyEntries);
                if (phan->Length >= 8) { // Đảm bảo đủ 8 trường
                    String^ idStr = phan[0];
                    String^ nameStr = phan[1];
                    String^ accStr = phan[2];
                    String^ passStr = phan[3];
                    String^ dayStr = phan[4];
                    String^ sexStr = phan[5];
                    String^ posStr = phan[6];
                    String^ roleStr = phan[7];
                    User^ account = gcnew User(nameStr, accStr, passStr, dayStr, sexStr, posStr, roleStr);
                    account->ID = idStr; // Gán ID từ file
                    dsTaiKhoan->Add(account);
                }
            }
            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Lỗi khi đọc file: " + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        return dsTaiKhoan;
    }
}