#pragma once

namespace AlgoCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para FormSobre
	/// </summary>
	public ref class FormSobre : public System::Windows::Forms::Form
	{
	public:
		FormSobre(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~FormSobre()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblAlgoCode;
	protected:

	private: System::Windows::Forms::Label^  lblSobre;
	private: System::Windows::Forms::GroupBox^  gbSobre;
	protected:


	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte do Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormSobre::typeid));
			this->lblAlgoCode = (gcnew System::Windows::Forms::Label());
			this->lblSobre = (gcnew System::Windows::Forms::Label());
			this->gbSobre = (gcnew System::Windows::Forms::GroupBox());
			this->gbSobre->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblAlgoCode
			// 
			this->lblAlgoCode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblAlgoCode->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblAlgoCode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblAlgoCode->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlgoCode->ForeColor = System::Drawing::Color::White;
			this->lblAlgoCode->Location = System::Drawing::Point(12, 9);
			this->lblAlgoCode->Name = L"lblAlgoCode";
			this->lblAlgoCode->Size = System::Drawing::Size(260, 36);
			this->lblAlgoCode->TabIndex = 0;
			this->lblAlgoCode->Text = L"AlgoCode";
			this->lblAlgoCode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblSobre
			// 
			this->lblSobre->Location = System::Drawing::Point(0, 25);
			this->lblSobre->Name = L"lblSobre";
			this->lblSobre->Size = System::Drawing::Size(260, 107);
			this->lblSobre->TabIndex = 1;
			this->lblSobre->Text = L"AlgoCode versão 1.0\r\n\r\nCriado por:\r\n\r\nBruno Moreira Machado\r\nMatheus Machado Guer"
				L"zoni Duarte";
			this->lblSobre->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// gbSobre
			// 
			this->gbSobre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gbSobre->Controls->Add(this->lblSobre);
			this->gbSobre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gbSobre->ForeColor = System::Drawing::Color::Black;
			this->gbSobre->Location = System::Drawing::Point(12, 39);
			this->gbSobre->Margin = System::Windows::Forms::Padding(0);
			this->gbSobre->Name = L"gbSobre";
			this->gbSobre->Padding = System::Windows::Forms::Padding(0);
			this->gbSobre->Size = System::Drawing::Size(260, 144);
			this->gbSobre->TabIndex = 0;
			this->gbSobre->TabStop = false;
			// 
			// FormSobre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(284, 195);
			this->Controls->Add(this->lblAlgoCode);
			this->Controls->Add(this->gbSobre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormSobre";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sobre";
			this->gbSobre->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
