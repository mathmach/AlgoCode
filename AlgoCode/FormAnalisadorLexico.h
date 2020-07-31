#pragma once
#include <iostream>
using namespace std;
#include <string>

namespace AlgoCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para FormAnalisadorLexico
	/// </summary>
	public ref class FormAnalisadorLexico : public System::Windows::Forms::Form
	{
	public:
		FormAnalisadorLexico(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
			Status = -1;
		}
		void MarshalString(String ^ s, string & os){
			using namespace Runtime::InteropServices;
			const char * chars = (const char *)(Marshal::StringToHGlobalAnsi(s).ToPointer());
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void *)chars));
		}

		void removerEspaco();
		void analisarLexicografia(int opcao);
		int getStatus();
		void setStatus(int n);
		int getOpcao();

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~FormAnalisadorLexico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pAnalisador;
	protected:
	private: System::Windows::Forms::Button^  btnRemoveEspaco;
	private: System::Windows::Forms::TextBox^  tbAlfabeto;
	private: System::Windows::Forms::CheckBox^  cbLetra;
	private: System::Windows::Forms::CheckBox^  cbNumero;
	private: System::Windows::Forms::TextBox^  tbPalavra;
	private: System::Windows::Forms::Label^  lAlfabeto;
	private: System::Windows::Forms::Button^  btnVerifica;
	private: System::Windows::Forms::RichTextBox^  rtbResposta;
	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;
		int Status;
		int Opcao;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte do Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAnalisadorLexico::typeid));
			this->pAnalisador = (gcnew System::Windows::Forms::Panel());
			this->btnRemoveEspaco = (gcnew System::Windows::Forms::Button());
			this->tbAlfabeto = (gcnew System::Windows::Forms::TextBox());
			this->cbLetra = (gcnew System::Windows::Forms::CheckBox());
			this->cbNumero = (gcnew System::Windows::Forms::CheckBox());
			this->tbPalavra = (gcnew System::Windows::Forms::TextBox());
			this->lAlfabeto = (gcnew System::Windows::Forms::Label());
			this->btnVerifica = (gcnew System::Windows::Forms::Button());
			this->rtbResposta = (gcnew System::Windows::Forms::RichTextBox());
			this->pAnalisador->SuspendLayout();
			this->SuspendLayout();
			// 
			// pAnalisador
			// 
			this->pAnalisador->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pAnalisador->BackColor = System::Drawing::Color::Transparent;
			this->pAnalisador->Controls->Add(this->btnRemoveEspaco);
			this->pAnalisador->Controls->Add(this->tbAlfabeto);
			this->pAnalisador->Controls->Add(this->cbLetra);
			this->pAnalisador->Controls->Add(this->cbNumero);
			this->pAnalisador->Controls->Add(this->tbPalavra);
			this->pAnalisador->Controls->Add(this->lAlfabeto);
			this->pAnalisador->Controls->Add(this->btnVerifica);
			this->pAnalisador->Controls->Add(this->rtbResposta);
			this->pAnalisador->Location = System::Drawing::Point(0, 0);
			this->pAnalisador->Name = L"pAnalisador";
			this->pAnalisador->Size = System::Drawing::Size(456, 342);
			this->pAnalisador->TabIndex = 9;
			// 
			// btnRemoveEspaco
			// 
			this->btnRemoveEspaco->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnRemoveEspaco->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnRemoveEspaco->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnRemoveEspaco->FlatAppearance->BorderSize = 0;
			this->btnRemoveEspaco->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemoveEspaco->Location = System::Drawing::Point(12, 312);
			this->btnRemoveEspaco->Name = L"btnRemoveEspaco";
			this->btnRemoveEspaco->Size = System::Drawing::Size(171, 27);
			this->btnRemoveEspaco->TabIndex = 12;
			this->btnRemoveEspaco->Text = L"Remover Espaço";
			this->btnRemoveEspaco->UseVisualStyleBackColor = false;
			this->btnRemoveEspaco->Click += gcnew System::EventHandler(this, &FormAnalisadorLexico::btnRemoveEspaco_Click);
			// 
			// tbAlfabeto
			// 
			this->tbAlfabeto->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbAlfabeto->Location = System::Drawing::Point(203, 13);
			this->tbAlfabeto->Name = L"tbAlfabeto";
			this->tbAlfabeto->Size = System::Drawing::Size(241, 20);
			this->tbAlfabeto->TabIndex = 6;
			this->tbAlfabeto->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// cbLetra
			// 
			this->cbLetra->AutoSize = true;
			this->cbLetra->ForeColor = System::Drawing::Color::White;
			this->cbLetra->Location = System::Drawing::Point(12, 15);
			this->cbLetra->Name = L"cbLetra";
			this->cbLetra->Size = System::Drawing::Size(55, 17);
			this->cbLetra->TabIndex = 3;
			this->cbLetra->Text = L"Letras";
			this->cbLetra->UseVisualStyleBackColor = true;
			this->cbLetra->CheckedChanged += gcnew System::EventHandler(this, &FormAnalisadorLexico::cb_letra_CheckedChanged);
			// 
			// cbNumero
			// 
			this->cbNumero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbNumero->AutoSize = true;
			this->cbNumero->ForeColor = System::Drawing::Color::White;
			this->cbNumero->Location = System::Drawing::Point(73, 15);
			this->cbNumero->Name = L"cbNumero";
			this->cbNumero->Size = System::Drawing::Size(63, 17);
			this->cbNumero->TabIndex = 4;
			this->cbNumero->Text = L"Número";
			this->cbNumero->UseVisualStyleBackColor = true;
			this->cbNumero->CheckedChanged += gcnew System::EventHandler(this, &FormAnalisadorLexico::cb_numero_CheckedChanged);
			// 
			// tbPalavra
			// 
			this->tbPalavra->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPalavra->Location = System::Drawing::Point(12, 38);
			this->tbPalavra->Name = L"tbPalavra";
			this->tbPalavra->Size = System::Drawing::Size(432, 20);
			this->tbPalavra->TabIndex = 2;
			// 
			// lAlfabeto
			// 
			this->lAlfabeto->AutoSize = true;
			this->lAlfabeto->ForeColor = System::Drawing::Color::White;
			this->lAlfabeto->Location = System::Drawing::Point(148, 16);
			this->lAlfabeto->Name = L"lAlfabeto";
			this->lAlfabeto->Size = System::Drawing::Size(49, 13);
			this->lAlfabeto->TabIndex = 5;
			this->lAlfabeto->Text = L"Alfabeto:";
			// 
			// btnVerifica
			// 
			this->btnVerifica->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnVerifica->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnVerifica->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnVerifica->FlatAppearance->BorderSize = 0;
			this->btnVerifica->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVerifica->Location = System::Drawing::Point(273, 312);
			this->btnVerifica->Name = L"btnVerifica";
			this->btnVerifica->Size = System::Drawing::Size(171, 27);
			this->btnVerifica->TabIndex = 1;
			this->btnVerifica->Text = L"Verificar";
			this->btnVerifica->UseVisualStyleBackColor = false;
			this->btnVerifica->Click += gcnew System::EventHandler(this, &FormAnalisadorLexico::btnVerifica_Click);
			// 
			// rtbResposta
			// 
			this->rtbResposta->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rtbResposta->Location = System::Drawing::Point(12, 64);
			this->rtbResposta->Name = L"rtbResposta";
			this->rtbResposta->ReadOnly = true;
			this->rtbResposta->Size = System::Drawing::Size(432, 242);
			this->rtbResposta->TabIndex = 11;
			this->rtbResposta->Text = L"";
			// 
			// FormAnalisadorLexico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(456, 354);
			this->Controls->Add(this->pAnalisador);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormAnalisadorLexico";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Analisador Lexico";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FormAnalisadorLexico::FormAnalisadorLexico_FormClosed);
			this->pAnalisador->ResumeLayout(false);
			this->pAnalisador->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cb_letra_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cbLetra->CheckState == cbNumero->CheckState)
			cbNumero->Checked = false;
		Opcao = 1;
		tbAlfabeto->Clear();
	}
	private: System::Void cb_numero_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cbLetra->CheckState == cbNumero->CheckState)
			cbLetra->Checked = false;
		Opcao = 2;
		tbAlfabeto->Clear();
	}
	private: System::Void tb_alfabeto_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (cbLetra->Checked == true) {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') {
				e->Handled = true;
			}
		}
		if (cbNumero->Checked == true) {
			if (e->KeyChar < '0' || e->KeyChar > '9') {
				if (e->KeyChar == 8) {
					e->Handled = false;
				}
				else {
					e->Handled = true;
				}
			}
		}
	}
	private: System::Void FormAnalisadorLexico_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Status = 0;
	}
	private: System::Void btnVerifica_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 2;
		this->Visible = false;
	}
	private: System::Void btnRemoveEspaco_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 1;
		this->Visible = false;
	}
	};
}
