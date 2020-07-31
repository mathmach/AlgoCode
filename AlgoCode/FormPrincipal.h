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
	/// Summary for FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
		}
		int getStatus();

		void ConvertAlgorithmToC();
		void Tabulate();

		int Const(int);
		int Var(int);
		int Process(int);

		String^ Scanf(int);
		String^ Printf(int);
		String^ For(int);
		String^ Case(int);

		void newFile();
		void saveFile();
		void openFile();

		void AddLineNumbers();

		void ChangeFont();
		void ChangeBackgroundColor();
		void ChangeFontColor();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::MenuStrip^  msMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  ferramentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  analisadorLexicoToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  configuraçõesToolStripMenuItem;



	private: System::Windows::Forms::Panel^  pPrincipal;
	private: System::Windows::Forms::Button^  bConverter;
	private: System::Windows::Forms::RichTextBox^  rtbCode;

	private: System::Windows::Forms::ToolStripMenuItem^  ajudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobreToolStripMenuItem;





	private: System::Windows::Forms::RichTextBox^  rtbConvert;
	private: System::Windows::Forms::ToolStripMenuItem^  comoUsarToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panelButtons;

	private: System::Windows::Forms::ToolStripMenuItem^  opçõesToolStripMenuItem;

	private: System::Windows::Forms::StatusStrip^  ssStatus;
	private: System::Windows::Forms::RichTextBox^  rtbLineCount;
	private: System::Windows::Forms::Button^  btnNew;
	private: System::Windows::Forms::Button^  btnSave;


	private: System::Windows::Forms::Button^  btnOpen;



	private: System::Windows::Forms::SplitContainer^  splitContainerCode;
	private: System::Windows::Forms::ToolTip^  toolTip;
	private: System::Windows::Forms::Label^  lblVersion;
	private: System::Windows::Forms::PictureBox^  photoFAITEC;
	private: System::Windows::Forms::ToolStripMenuItem^  arquivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  abrirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salvarToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  sairToolStripMenuItem;
	private: System::Windows::Forms::Button^  btnCopy;















			 int Status;


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPrincipal::typeid));
				 this->msMenu = (gcnew System::Windows::Forms::MenuStrip());
				 this->arquivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->novoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->abrirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->salvarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
				 this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->ferramentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->analisadorLexicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->configuraçõesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->opçõesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->comoUsarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->pPrincipal = (gcnew System::Windows::Forms::Panel());
				 this->btnCopy = (gcnew System::Windows::Forms::Button());
				 this->splitContainerCode = (gcnew System::Windows::Forms::SplitContainer());
				 this->rtbCode = (gcnew System::Windows::Forms::RichTextBox());
				 this->rtbLineCount = (gcnew System::Windows::Forms::RichTextBox());
				 this->rtbConvert = (gcnew System::Windows::Forms::RichTextBox());
				 this->bConverter = (gcnew System::Windows::Forms::Button());
				 this->panelButtons = (gcnew System::Windows::Forms::Panel());
				 this->photoFAITEC = (gcnew System::Windows::Forms::PictureBox());
				 this->btnNew = (gcnew System::Windows::Forms::Button());
				 this->btnOpen = (gcnew System::Windows::Forms::Button());
				 this->btnSave = (gcnew System::Windows::Forms::Button());
				 this->ssStatus = (gcnew System::Windows::Forms::StatusStrip());
				 this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
				 this->lblVersion = (gcnew System::Windows::Forms::Label());
				 this->msMenu->SuspendLayout();
				 this->pPrincipal->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainerCode))->BeginInit();
				 this->splitContainerCode->Panel1->SuspendLayout();
				 this->splitContainerCode->Panel2->SuspendLayout();
				 this->splitContainerCode->SuspendLayout();
				 this->panelButtons->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoFAITEC))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // msMenu
				 // 
				 this->msMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->msMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					 this->arquivoToolStripMenuItem,
						 this->ferramentasToolStripMenuItem, this->configuraçõesToolStripMenuItem, this->ajudaToolStripMenuItem
				 });
				 this->msMenu->Location = System::Drawing::Point(0, 0);
				 this->msMenu->Name = L"msMenu";
				 this->msMenu->Size = System::Drawing::Size(739, 24);
				 this->msMenu->TabIndex = 9;
				 this->msMenu->Text = L"ms_menu";
				 // 
				 // arquivoToolStripMenuItem
				 // 
				 this->arquivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
					 this->novoToolStripMenuItem,
						 this->abrirToolStripMenuItem, this->salvarToolStripMenuItem, this->toolStripSeparator1, this->sairToolStripMenuItem
				 });
				 this->arquivoToolStripMenuItem->Name = L"arquivoToolStripMenuItem";
				 this->arquivoToolStripMenuItem->Size = System::Drawing::Size(61, 20);
				 this->arquivoToolStripMenuItem->Text = L"Arquivo";
				 // 
				 // novoToolStripMenuItem
				 // 
				 this->novoToolStripMenuItem->Name = L"novoToolStripMenuItem";
				 this->novoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
				 this->novoToolStripMenuItem->Size = System::Drawing::Size(155, 22);
				 this->novoToolStripMenuItem->Text = L"Novo...";
				 this->novoToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::novoToolStripMenuItem_Click);
				 // 
				 // abrirToolStripMenuItem
				 // 
				 this->abrirToolStripMenuItem->Name = L"abrirToolStripMenuItem";
				 this->abrirToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
				 this->abrirToolStripMenuItem->Size = System::Drawing::Size(155, 22);
				 this->abrirToolStripMenuItem->Text = L"Abrir...";
				 this->abrirToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::abrirToolStripMenuItem_Click);
				 // 
				 // salvarToolStripMenuItem
				 // 
				 this->salvarToolStripMenuItem->Name = L"salvarToolStripMenuItem";
				 this->salvarToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
				 this->salvarToolStripMenuItem->Size = System::Drawing::Size(155, 22);
				 this->salvarToolStripMenuItem->Text = L"Salvar...";
				 this->salvarToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::salvarToolStripMenuItem_Click);
				 // 
				 // toolStripSeparator1
				 // 
				 this->toolStripSeparator1->Name = L"toolStripSeparator1";
				 this->toolStripSeparator1->Size = System::Drawing::Size(152, 6);
				 // 
				 // sairToolStripMenuItem
				 // 
				 this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
				 this->sairToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
				 this->sairToolStripMenuItem->Size = System::Drawing::Size(155, 22);
				 this->sairToolStripMenuItem->Text = L"Sair";
				 this->sairToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::sairToolStripMenuItem_Click);
				 // 
				 // ferramentasToolStripMenuItem
				 // 
				 this->ferramentasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->analisadorLexicoToolStripMenuItem });
				 this->ferramentasToolStripMenuItem->Name = L"ferramentasToolStripMenuItem";
				 this->ferramentasToolStripMenuItem->Size = System::Drawing::Size(84, 20);
				 this->ferramentasToolStripMenuItem->Text = L"Ferramentas";
				 // 
				 // analisadorLexicoToolStripMenuItem
				 // 
				 this->analisadorLexicoToolStripMenuItem->Name = L"analisadorLexicoToolStripMenuItem";
				 this->analisadorLexicoToolStripMenuItem->Size = System::Drawing::Size(166, 22);
				 this->analisadorLexicoToolStripMenuItem->Text = L"Analisador Lexico";
				 this->analisadorLexicoToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::analisadorLexicoToolStripMenuItem_Click);
				 // 
				 // configuraçõesToolStripMenuItem
				 // 
				 this->configuraçõesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opçõesToolStripMenuItem });
				 this->configuraçõesToolStripMenuItem->Name = L"configuraçõesToolStripMenuItem";
				 this->configuraçõesToolStripMenuItem->Size = System::Drawing::Size(96, 20);
				 this->configuraçõesToolStripMenuItem->Text = L"Configurações";
				 // 
				 // opçõesToolStripMenuItem
				 // 
				 this->opçõesToolStripMenuItem->Name = L"opçõesToolStripMenuItem";
				 this->opçõesToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
				 this->opçõesToolStripMenuItem->Size = System::Drawing::Size(157, 22);
				 this->opçõesToolStripMenuItem->Text = L"Opções";
				 this->opçõesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::opçõesToolStripMenuItem_Click);
				 // 
				 // ajudaToolStripMenuItem
				 // 
				 this->ajudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->comoUsarToolStripMenuItem,
						 this->sobreToolStripMenuItem
				 });
				 this->ajudaToolStripMenuItem->Name = L"ajudaToolStripMenuItem";
				 this->ajudaToolStripMenuItem->Size = System::Drawing::Size(50, 20);
				 this->ajudaToolStripMenuItem->Text = L"Ajuda";
				 // 
				 // comoUsarToolStripMenuItem
				 // 
				 this->comoUsarToolStripMenuItem->Name = L"comoUsarToolStripMenuItem";
				 this->comoUsarToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
				 this->comoUsarToolStripMenuItem->Size = System::Drawing::Size(179, 22);
				 this->comoUsarToolStripMenuItem->Text = L"Como Usar";
				 this->comoUsarToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::comoUsarToolStripMenuItem_Click);
				 // 
				 // sobreToolStripMenuItem
				 // 
				 this->sobreToolStripMenuItem->Name = L"sobreToolStripMenuItem";
				 this->sobreToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
					 | System::Windows::Forms::Keys::H));
				 this->sobreToolStripMenuItem->Size = System::Drawing::Size(179, 22);
				 this->sobreToolStripMenuItem->Text = L"Sobre";
				 this->sobreToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormPrincipal::sobreToolStripMenuItem_Click);
				 // 
				 // pPrincipal
				 // 
				 this->pPrincipal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->pPrincipal->BackColor = System::Drawing::Color::Transparent;
				 this->pPrincipal->Controls->Add(this->btnCopy);
				 this->pPrincipal->Controls->Add(this->splitContainerCode);
				 this->pPrincipal->Controls->Add(this->bConverter);
				 this->pPrincipal->Location = System::Drawing::Point(0, 27);
				 this->pPrincipal->Name = L"pPrincipal";
				 this->pPrincipal->Size = System::Drawing::Size(739, 509);
				 this->pPrincipal->TabIndex = 13;
				 // 
				 // btnCopy
				 // 
				 this->btnCopy->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
				 this->btnCopy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnCopy->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnCopy->FlatAppearance->BorderSize = 0;
				 this->btnCopy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnCopy->Location = System::Drawing::Point(461, 479);
				 this->btnCopy->Name = L"btnCopy";
				 this->btnCopy->Size = System::Drawing::Size(89, 27);
				 this->btnCopy->TabIndex = 16;
				 this->btnCopy->Text = L"Copiar Tudo";
				 this->toolTip->SetToolTip(this->btnCopy, L"Copiar código convertido para clipboard");
				 this->btnCopy->UseVisualStyleBackColor = false;
				 this->btnCopy->Click += gcnew System::EventHandler(this, &FormPrincipal::btnCopy_Click);
				 // 
				 // splitContainerCode
				 // 
				 this->splitContainerCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->splitContainerCode->Location = System::Drawing::Point(12, 50);
				 this->splitContainerCode->Name = L"splitContainerCode";
				 // 
				 // splitContainerCode.Panel1
				 // 
				 this->splitContainerCode->Panel1->Controls->Add(this->rtbCode);
				 this->splitContainerCode->Panel1->Controls->Add(this->rtbLineCount);
				 // 
				 // splitContainerCode.Panel2
				 // 
				 this->splitContainerCode->Panel2->Controls->Add(this->rtbConvert);
				 this->splitContainerCode->Size = System::Drawing::Size(715, 423);
				 this->splitContainerCode->SplitterDistance = 357;
				 this->splitContainerCode->TabIndex = 15;
				 // 
				 // rtbCode
				 // 
				 this->rtbCode->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->rtbCode->Location = System::Drawing::Point(32, 0);
				 this->rtbCode->Name = L"rtbCode";
				 this->rtbCode->Size = System::Drawing::Size(325, 423);
				 this->rtbCode->TabIndex = 0;
				 this->rtbCode->Text = L"";
				 this->rtbCode->SelectionChanged += gcnew System::EventHandler(this, &FormPrincipal::rtbCode_SelectionChanged);
				 this->rtbCode->VScroll += gcnew System::EventHandler(this, &FormPrincipal::rtbCode_VScroll);
				 this->rtbCode->FontChanged += gcnew System::EventHandler(this, &FormPrincipal::rtbCode_FontChanged);
				 this->rtbCode->TextChanged += gcnew System::EventHandler(this, &FormPrincipal::rtbCode_TextChanged);
				 // 
				 // rtbLineCount
				 // 
				 this->rtbLineCount->Dock = System::Windows::Forms::DockStyle::Left;
				 this->rtbLineCount->Enabled = false;
				 this->rtbLineCount->ForeColor = System::Drawing::Color::Black;
				 this->rtbLineCount->Location = System::Drawing::Point(0, 0);
				 this->rtbLineCount->Name = L"rtbLineCount";
				 this->rtbLineCount->ReadOnly = true;
				 this->rtbLineCount->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
				 this->rtbLineCount->Size = System::Drawing::Size(32, 423);
				 this->rtbLineCount->TabIndex = 3;
				 this->rtbLineCount->Text = L"";
				 this->rtbLineCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormPrincipal::rtbLineCount_MouseDown);
				 // 
				 // rtbConvert
				 // 
				 this->rtbConvert->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->rtbConvert->Location = System::Drawing::Point(0, 0);
				 this->rtbConvert->Name = L"rtbConvert";
				 this->rtbConvert->Size = System::Drawing::Size(354, 423);
				 this->rtbConvert->TabIndex = 2;
				 this->rtbConvert->Text = L"";
				 // 
				 // bConverter
				 // 
				 this->bConverter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
				 this->bConverter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->bConverter->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->bConverter->FlatAppearance->BorderSize = 0;
				 this->bConverter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->bConverter->Location = System::Drawing::Point(556, 479);
				 this->bConverter->Name = L"bConverter";
				 this->bConverter->Size = System::Drawing::Size(171, 27);
				 this->bConverter->TabIndex = 1;
				 this->bConverter->Text = L"Converter";
				 this->bConverter->UseVisualStyleBackColor = false;
				 this->bConverter->Click += gcnew System::EventHandler(this, &FormPrincipal::bConverter_Click);
				 // 
				 // panelButtons
				 // 
				 this->panelButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->panelButtons->Controls->Add(this->photoFAITEC);
				 this->panelButtons->Controls->Add(this->btnNew);
				 this->panelButtons->Controls->Add(this->btnOpen);
				 this->panelButtons->Controls->Add(this->btnSave);
				 this->panelButtons->Dock = System::Windows::Forms::DockStyle::Top;
				 this->panelButtons->Location = System::Drawing::Point(0, 24);
				 this->panelButtons->Name = L"panelButtons";
				 this->panelButtons->Size = System::Drawing::Size(739, 47);
				 this->panelButtons->TabIndex = 3;
				 // 
				 // photoFAITEC
				 // 
				 this->photoFAITEC->BackColor = System::Drawing::Color::Transparent;
				 this->photoFAITEC->Dock = System::Windows::Forms::DockStyle::Left;
				 this->photoFAITEC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"photoFAITEC.Image")));
				 this->photoFAITEC->Location = System::Drawing::Point(0, 0);
				 this->photoFAITEC->Name = L"photoFAITEC";
				 this->photoFAITEC->Size = System::Drawing::Size(47, 47);
				 this->photoFAITEC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->photoFAITEC->TabIndex = 15;
				 this->photoFAITEC->TabStop = false;
				 // 
				 // btnNew
				 // 
				 this->btnNew->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnNew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->btnNew->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnNew->FlatAppearance->BorderSize = 0;
				 this->btnNew->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnNew->ForeColor = System::Drawing::SystemColors::Control;
				 this->btnNew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNew.Image")));
				 this->btnNew->Location = System::Drawing::Point(53, 6);
				 this->btnNew->Name = L"btnNew";
				 this->btnNew->Size = System::Drawing::Size(35, 35);
				 this->btnNew->TabIndex = 17;
				 this->toolTip->SetToolTip(this->btnNew, L"Novo...");
				 this->btnNew->UseVisualStyleBackColor = false;
				 this->btnNew->Click += gcnew System::EventHandler(this, &FormPrincipal::btnNew_Click);
				 // 
				 // btnOpen
				 // 
				 this->btnOpen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnOpen->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnOpen->FlatAppearance->BorderSize = 0;
				 this->btnOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOpen.Image")));
				 this->btnOpen->Location = System::Drawing::Point(94, 6);
				 this->btnOpen->Name = L"btnOpen";
				 this->btnOpen->Size = System::Drawing::Size(35, 35);
				 this->btnOpen->TabIndex = 14;
				 this->toolTip->SetToolTip(this->btnOpen, L"Abrir...");
				 this->btnOpen->UseVisualStyleBackColor = false;
				 this->btnOpen->Click += gcnew System::EventHandler(this, &FormPrincipal::btnOpen_Click);
				 // 
				 // btnSave
				 // 
				 this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnSave->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnSave->FlatAppearance->BorderSize = 0;
				 this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Image")));
				 this->btnSave->Location = System::Drawing::Point(135, 6);
				 this->btnSave->Name = L"btnSave";
				 this->btnSave->Size = System::Drawing::Size(35, 35);
				 this->btnSave->TabIndex = 16;
				 this->toolTip->SetToolTip(this->btnSave, L"Salvar...");
				 this->btnSave->UseVisualStyleBackColor = false;
				 this->btnSave->Click += gcnew System::EventHandler(this, &FormPrincipal::btnSaveAs_Click);
				 // 
				 // ssStatus
				 // 
				 this->ssStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->ssStatus->Location = System::Drawing::Point(0, 539);
				 this->ssStatus->Name = L"ssStatus";
				 this->ssStatus->Size = System::Drawing::Size(739, 22);
				 this->ssStatus->TabIndex = 10;
				 this->ssStatus->Text = L"statusStrip1";
				 // 
				 // lblVersion
				 // 
				 this->lblVersion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				 this->lblVersion->AutoSize = true;
				 this->lblVersion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->lblVersion->Location = System::Drawing::Point(6, 543);
				 this->lblVersion->Name = L"lblVersion";
				 this->lblVersion->Size = System::Drawing::Size(58, 13);
				 this->lblVersion->TabIndex = 14;
				 this->lblVersion->Text = L"Versão 1.0";
				 // 
				 // FormPrincipal
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					 static_cast<System::Int32>(static_cast<System::Byte>(192)));
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->ClientSize = System::Drawing::Size(739, 561);
				 this->Controls->Add(this->lblVersion);
				 this->Controls->Add(this->panelButtons);
				 this->Controls->Add(this->msMenu);
				 this->Controls->Add(this->ssStatus);
				 this->Controls->Add(this->pPrincipal);
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				 this->MainMenuStrip = this->msMenu;
				 this->Name = L"FormPrincipal";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
				 this->Text = L"AlgoCode";
				 this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FormPrincipal::FormPrincipal_FormClosed);
				 this->Load += gcnew System::EventHandler(this, &FormPrincipal::FormPrincipal_Load);
				 this->Resize += gcnew System::EventHandler(this, &FormPrincipal::FormPrincipal_Resize);
				 this->msMenu->ResumeLayout(false);
				 this->msMenu->PerformLayout();
				 this->pPrincipal->ResumeLayout(false);
				 this->splitContainerCode->Panel1->ResumeLayout(false);
				 this->splitContainerCode->Panel2->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainerCode))->EndInit();
				 this->splitContainerCode->ResumeLayout(false);
				 this->panelButtons->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoFAITEC))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void FormPrincipal_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Status = 0;
	}
	private: System::Void sairToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
	private: System::Void bConverter_Click(System::Object^  sender, System::EventArgs^  e) {
		rtbConvert->Clear();
		Status = 1;
		this->Visible = false;
	}
	private: System::Void novoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 2;
		this->Visible = false;
	}
	private: System::Void abrirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 3;
		this->Visible = false;
	}
	private: System::Void salvarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 4;
		this->Visible = false;
	}
	private: System::Void analisadorLexicoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 5;
		this->Visible = false;
	}
	private: System::Void opçõesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 6;
		this->Visible = false;
	}
	private: System::Void comoUsarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 7;
		this->Visible = false;
	}
	private: System::Void sobreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 8;
		this->Visible = false;
	}
	private: System::Void rtbCode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (rtbCode->Text == "")
		{
			AddLineNumbers();
		}
	}
	private: System::Void FormPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
		rtbLineCount->Font = rtbCode->Font;
		rtbCode->Select();
		AddLineNumbers();
	}
	private: System::Void rtbCode_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
		Point pt = rtbCode->GetPositionFromCharIndex(rtbCode->SelectionStart);
		if (pt.X == 1)
		{
			AddLineNumbers();
		}
	}
	private: System::Void rtbCode_VScroll(System::Object^  sender, System::EventArgs^  e) {
		rtbLineCount->Text = "";
		AddLineNumbers();
		rtbLineCount->Invalidate();
	}
	private: System::Void rtbCode_FontChanged(System::Object^  sender, System::EventArgs^  e) {
		rtbLineCount->Font = rtbCode->Font;
		rtbCode->Select();
		AddLineNumbers();
	}
	private: System::Void rtbLineCount_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		rtbCode->Select();
		rtbLineCount->DeselectAll();
	}
	private: System::Void FormPrincipal_Resize(System::Object^  sender, System::EventArgs^  e) {
		AddLineNumbers();
	}
	private: System::Void btnNew_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 2;
		this->Visible = false;
	}
	private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 3;
		this->Visible = false;
	}
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 4;
		this->Visible = false;
	}
	private: System::Void btnSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 5;
		this->Visible = false;
	}
	private: System::Void btnCopy_Click(System::Object^  sender, System::EventArgs^  e) {
		Clipboard::SetText(rtbConvert->Text);
		MessageBox::Show("Copiado", "Aviso");
	}
	};
}