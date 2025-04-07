#pragma once
#include "ManagerTable.h"
//#include "FormFood.h"
//#include "AddHistoryBillForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
    ref class CreateTable {
    public:
        CreateTable(String^ nameStaff, String^ banFilePath) {
            this->nameStaff = nameStaff;
            this->banFilePath = banFilePath;
        }

        /*void SetHistoryForm(AddHistoryBillForm^ historyForm) {
            this->historyForm = historyForm;
        }*/

        void TaoDayBan(int soBan, FlowLayoutPanel^ flpBan, List<ManagerTable^>^ danhSachBan);
        void TakeAway(int soBan, FlowLayoutPanel^ flpMangVe);

    private:
        String^ nameStaff;
        String^ banFilePath;
        //AddHistoryBillForm^ historyForm;

        void btnBan_Click(Object^ sender, EventArgs^ e);
        void btnBanMangve_Click(Object^ sender, EventArgs^ e);
    };


