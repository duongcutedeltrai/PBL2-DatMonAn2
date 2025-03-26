#pragma once
#include "ManagerTable.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

ref class CreateTable {
public:
	void TaoDayBan(int soBan, FlowLayoutPanel^ flpBan, List<ManagerTable^>^ danhSachBan);
	void TakeAway(int soBan, FlowLayoutPanel^ flpMangVe );


private:
	void btnBan_Click(Object^ sender, EventArgs^ e);
	void btnBanMangve_Click(Object^ sender, EventArgs^ e);
};
