#pragma once

namespace PBL2DatMonAn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for test
	/// </summary>
	public ref class test : public System::Windows::Forms::Form
	{
	public:
		test(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRound;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnRound = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnRound
			// 
			this->btnRound->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRound->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRound->Location = System::Drawing::Point(238, 127);
			this->btnRound->Name = L"btnRound";
			this->btnRound->Size = System::Drawing::Size(203, 182);
			this->btnRound->TabIndex = 0;
			this->btnRound->Text = L"button1";
			this->btnRound->UseVisualStyleBackColor = true;
			this->btnRound->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &test::btnRound_Paint);
			// 
			// test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 508);
			this->Controls->Add(this->btnRound);
			this->Name = L"test";
			this->Text = L"test";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnRound_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
		path->AddEllipse(0, 0, btn->Width, btn->Height);
		btn->Region = gcnew System::Drawing::Region(path);

		// Vẽ viền
		System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black, 2);
		e->Graphics->DrawEllipse(pen, 1, 1, btn->Width - 2, btn->Height - 2);
	}
	};
}
