#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class BanManager {
public:
	void TaoDayBan(int soBan, FlowLayoutPanel^ flpBan);
	void TakeAway(int soBan, FlowLayoutPanel^ flpMangVe);

private:
	void btnBan_Click(Object^ sender, EventArgs^ e);
	void btnBanMangve_Click(Object^ sender, EventArgs^ e);
};
