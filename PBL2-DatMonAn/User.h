#pragma once
#include <string>

ref class User
{
	//tao class User
public:
	System::String^ ID;
	/*String^ Name;*/
	System::String^ Password;
	System::String^ Role;

	User();

	User(System::String^ id, System::String^ pass,System::String^ role) {
		ID = id;
		Password = pass;
		Role = role;
	}

	void GhiFile(System::String^ path);
	static User^ DocFile(System::String^ path);
};
