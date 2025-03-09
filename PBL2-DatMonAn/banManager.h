#pragma once

using namespace System::Windows::Forms;

ref class BanManager {
public:
    static void TaoDayBan(int soBan, FlowLayoutPanel^ flpBan);
	static void TakeAway(int soBan, FlowLayoutPanel^ flpMangVe);
};

