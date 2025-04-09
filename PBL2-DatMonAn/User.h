#pragma once
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace msclr::interop;

namespace PBL2DatMonAn {
    ref class User {
    public:
        // Properties
        String^ ID;
        String^ Name;
        String^ Account;
        String^ Password;
        String^ Birtday;
        String^ Sex;
        String^ Position;
        String^ Role;

        // Constructor
        User(String^ name, String^ acc, String^ pass, String^ birt, String^ sex, String^ pos, String^ role);

        // Static Methods
        static void GhiDanhSachTaiKhoan(List<User^>^ dsTaiKhoan, String^ filePath);
        static List<User^>^ DocDanhSachTaiKhoan(String^ filePath);
    };
}