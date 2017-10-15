#pragma once

namespace ShowPicture {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ShowPicture
	/// </summary>
	public ref class ShowPicture : public System::Windows::Forms::Form
	{
	public:
		ShowPicture(void)
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
		~ShowPicture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnSHOW;
	protected: 
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::PictureBox^  picRainbow;
	private: System::Windows::Forms::Label^  lblMagic;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ShowPicture::typeid));
			this->btnSHOW = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->picRainbow = (gcnew System::Windows::Forms::PictureBox());
			this->lblMagic = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picRainbow))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSHOW
			// 
			this->btnSHOW->Location = System::Drawing::Point(35, 234);
			this->btnSHOW->Name = L"btnSHOW";
			this->btnSHOW->Size = System::Drawing::Size(115, 22);
			this->btnSHOW->TabIndex = 0;
			this->btnSHOW->Text = L"SHOW";
			this->btnSHOW->UseVisualStyleBackColor = true;
			this->btnSHOW->Click += gcnew System::EventHandler(this, &ShowPicture::btnSHOW_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(288, 234);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(123, 21);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// picRainbow
			// 
			this->picRainbow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picRainbow->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picRainbow.Image")));
			this->picRainbow->Location = System::Drawing::Point(35, 60);
			this->picRainbow->Name = L"picRainbow";
			this->picRainbow->Size = System::Drawing::Size(376, 168);
			this->picRainbow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picRainbow->TabIndex = 2;
			this->picRainbow->TabStop = false;
			this->picRainbow->Visible = false;
			this->picRainbow->Click += gcnew System::EventHandler(this, &ShowPicture::picRainbow_Click);
			// 
			// lblMagic
			// 
			this->lblMagic->AutoSize = true;
			this->lblMagic->Font = (gcnew System::Drawing::Font(L"Snap ITC", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMagic->Location = System::Drawing::Point(15, 9);
			this->lblMagic->Name = L"lblMagic";
			this->lblMagic->Size = System::Drawing::Size(416, 25);
			this->lblMagic->TabIndex = 3;
			this->lblMagic->Text = L"Click the button for some MAGIC!!!";
			// 
			// ShowPicture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 304);
			this->Controls->Add(this->lblMagic);
			this->Controls->Add(this->picRainbow);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSHOW);
			this->Name = L"ShowPicture";
			this->Text = L"ShowPicture";
			this->Load += gcnew System::EventHandler(this, &ShowPicture::ShowPicture_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picRainbow))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void picRainbow_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btnSHOW_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void ShowPicture_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
