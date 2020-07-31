#pragma once

namespace AlgoCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for FormComoUsar
	/// </summary>
	public ref class FormComoUsar : public System::Windows::Forms::Form
	{
	public:
		FormComoUsar(void)
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
		~FormComoUsar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnDocument;
	private: System::Windows::Forms::Label^  lblExample;
	private: System::Windows::Forms::PictureBox^  pbHelp;
	private: System::Windows::Forms::PictureBox^  pbExample;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormComoUsar::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnDocument = (gcnew System::Windows::Forms::Button());
			this->lblExample = (gcnew System::Windows::Forms::Label());
			this->pbHelp = (gcnew System::Windows::Forms::PictureBox());
			this->pbExample = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHelp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbExample))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->btnBack);
			this->panel1->Controls->Add(this->btnNext);
			this->panel1->Location = System::Drawing::Point(0, 443);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(593, 43);
			this->panel1->TabIndex = 1;
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnBack->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(12, 0);
			this->btnBack->Name = L"btnBack";
			this->btnBack->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnBack->Size = System::Drawing::Size(39, 43);
			this->btnBack->TabIndex = 1;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Visible = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &FormComoUsar::btnBack_Click);
			// 
			// btnNext
			// 
			this->btnNext->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnNext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNext->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(541, 0);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(39, 43);
			this->btnNext->TabIndex = 0;
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &FormComoUsar::btnNext_Click);
			// 
			// btnDocument
			// 
			this->btnDocument->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDocument->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDocument->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDocument->FlatAppearance->BorderSize = 0;
			this->btnDocument->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDocument->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDocument->ForeColor = System::Drawing::Color::Black;
			this->btnDocument->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDocument.Image")));
			this->btnDocument->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnDocument->Location = System::Drawing::Point(224, 139);
			this->btnDocument->Name = L"btnDocument";
			this->btnDocument->Size = System::Drawing::Size(157, 151);
			this->btnDocument->TabIndex = 2;
			this->btnDocument->Text = L"Clique para abrir a documentação";
			this->btnDocument->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnDocument->UseVisualStyleBackColor = false;
			this->btnDocument->Click += gcnew System::EventHandler(this, &FormComoUsar::btnDocument_Click);
			// 
			// lblExample
			// 
			this->lblExample->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->lblExample->AutoSize = true;
			this->lblExample->BackColor = System::Drawing::Color::Transparent;
			this->lblExample->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExample->ForeColor = System::Drawing::Color::Black;
			this->lblExample->Location = System::Drawing::Point(327, 366);
			this->lblExample->Name = L"lblExample";
			this->lblExample->Size = System::Drawing::Size(202, 20);
			this->lblExample->TabIndex = 4;
			this->lblExample->Text = L"Veja um exemplo pronto";
			// 
			// pbHelp
			// 
			this->pbHelp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pbHelp->BackColor = System::Drawing::Color::Transparent;
			this->pbHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHelp.Image")));
			this->pbHelp->Location = System::Drawing::Point(535, 366);
			this->pbHelp->Name = L"pbHelp";
			this->pbHelp->Size = System::Drawing::Size(45, 71);
			this->pbHelp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbHelp->TabIndex = 5;
			this->pbHelp->TabStop = false;
			// 
			// pbExample
			// 
			this->pbExample->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbExample.Image")));
			this->pbExample->Location = System::Drawing::Point(83, 12);
			this->pbExample->Name = L"pbExample";
			this->pbExample->Size = System::Drawing::Size(435, 425);
			this->pbExample->TabIndex = 6;
			this->pbExample->TabStop = false;
			this->pbExample->Visible = false;
			// 
			// FormComoUsar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(592, 484);
			this->Controls->Add(this->pbHelp);
			this->Controls->Add(this->lblExample);
			this->Controls->Add(this->btnDocument);
			this->Controls->Add(this->pbExample);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormComoUsar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Como Usar";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHelp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbExample))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
		btnNext->Visible = false;
		btnBack->Visible = true;
		pbHelp->Visible = false;
		btnDocument->Visible = false;
		lblExample->Visible = false;
		pbExample->Visible = true;
	}
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
		btnBack->Visible = false;
		btnNext->Visible = true;
		pbHelp->Visible = true;
		btnDocument->Visible = true;
		lblExample->Visible = true;
		pbExample->Visible = false;
	}
	private: System::Void btnDocument_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ appPath = System::IO::Directory::GetParent(Environment::CurrentDirectory)->ToString();
		Process::Start(appPath + "\\doc.docx");
	}
	};
}
