#include "Login.h"
#include <windows.h>
#pragma comment(lib, "Gdi32.lib")
#include <wingdi.h> /
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PBL2DatMonAn::Login form;
    Application::Run(% form);
}


extern "C" HRGN __stdcall CreateRoundRectRgn(
    int nLeftRect, int nTopRect,
    int nRightRect, int nBottomRect,
    int nWidthEllipse, int nHeightEllipse
);