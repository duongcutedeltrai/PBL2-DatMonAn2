#include "User.h"
#include <fstream>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>


using namespace msclr::interop;
using namespace std;

//doc file

User::User() {
	ID = "";
	//Name = "";
	Password = "";
	Role = "";
}

void User::GhiFile(System::String^ path) {
	ofstream file(marshal_as<string>(path), ios::app);
	if (!file.is_open()) {
		return;
	}

	//chuyen doi string^ sang string
	System::String^ idStr = this->ID;
	/*const String^ nameStr = this->Name;*/
	System::String^ passStr = this->Password;
	System::String^ roleStr = this->Role;

	string id = marshal_as<string>(idStr);
	//string name = marshal_as<string>(nameStr);
	string pass = marshal_as<string>(passStr);
	string role = marshal_as<string>(roleStr);

	file << id << "||" << pass << "||" << role << endl;

	file.close();
}

User^ User::DocFile(System::String^ path) {
	ifstream file(marshal_as<string>(path));
	if (!file.is_open()) {
		return nullptr;
	}
	//doc thong tin tu file txt
	string id, pass, role;
	getline(file, id);
	//getline(file, name);
	getline(file, pass);
	getline(file, role);
	file.close();
	//chuyen doi string sang string^
	System::String^ ID = gcnew System::String(id.c_str());
	//String^ Name = gcnew String(name.c_str());
	System::String^ Password = gcnew System::String(pass.c_str());
	System::String^ Role = gcnew System::String(role.c_str());

	return gcnew User(ID, Password, Role);
}
