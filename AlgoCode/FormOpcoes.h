#pragma once
#include "FormPrincipal.h"

namespace AlgoCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormOpcoes
	/// </summary>
	public ref class FormOpcoes : public System::Windows::Forms::Form
	{
	public:
		FormOpcoes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
		}
		void setStatus(int);
		int getStatus();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormOpcoes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnFonte;
	private: System::Windows::Forms::Button^  btnCorLetra;
	private: System::Windows::Forms::Button^  btnCorFundo;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		int Status;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormOpcoes::typeid));
			this->btnFonte = (gcnew System::Windows::Forms::Button());
			this->btnCorLetra = (gcnew System::Windows::Forms::Button());
			this->btnCorFundo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnFonte
			// 
			this->btnFonte->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnFonte->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnFonte->FlatAppearance->BorderSize = 0;
			this->btnFonte->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFonte->Location = System::Drawing::Point(12, 12);
			this->btnFonte->Name = L"btnFonte";
			this->btnFonte->Size = System::Drawing::Size(176, 23);
			this->btnFonte->TabIndex = 0;
			this->btnFonte->Text = L"Fonte";
			this->btnFonte->UseVisualStyleBackColor = false;
			this->btnFonte->Click += gcnew System::EventHandler(this, &FormOpcoes::btnFonte_Click);
			// 
			// btnCorLetra
			// 
			this->btnCorLetra->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCorLetra->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCorLetra->FlatAppearance->BorderSize = 0;
			this->btnCorLetra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCorLetra->Location = System::Drawing::Point(12, 70);
			this->btnCorLetra->Name = L"btnCorLetra";
			this->btnCorLetra->Size = System::Drawing::Size(176, 23);
			this->btnCorLetra->TabIndex = 1;
			this->btnCorLetra->Text = L"Cor Letra";
			this->btnCorLetra->UseVisualStyleBackColor = false;
			this->btnCorLetra->Click += gcnew System::EventHandler(this, &FormOpcoes::btnCorLetra_Click);
			// 
			// btnCorFundo
			// 
			this->btnCorFundo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCorFundo->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCorFundo->FlatAppearance->BorderSize = 0;
			this->btnCorFundo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCorFundo->Location = System::Drawing::Point(12, 41);
			this->btnCorFundo->Name = L"btnCorFundo";
			this->btnCorFundo->Size = System::Drawing::Size(176, 23);
			this->btnCorFundo->TabIndex = 2;
			this->btnCorFundo->Text = L"Cor Fundo";
			this->btnCorFundo->UseVisualStyleBackColor = false;
			this->btnCorFundo->Click += gcnew System::EventHandler(this, &FormOpcoes::btnCorFundo_Click);
			// 
			// FormOpcoes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(200, 104);
			this->Controls->Add(this->btnCorFundo);
			this->Controls->Add(this->btnCorLetra);
			this->Controls->Add(this->btnFonte);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormOpcoes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Opções";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FormOpcoes::FormOpcoes_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnFonte_Click(System::Object^  sender, System::EventArgs^  e) {
		setStatus(1);
		this->Visible = false;
	}
	private: System::Void btnCorFundo_Click(System::Object^  sender, System::EventArgs^  e) {
		setStatus(2);
		this->Visible = false;
	}
	private: System::Void btnCorLetra_Click(System::Object^  sender, System::EventArgs^  e) {
		setStatus(3);
		this->Visible = false;
	}
	private: System::Void FormOpcoes_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		setStatus(0);
		this->Visible = false;
	}
};
}
