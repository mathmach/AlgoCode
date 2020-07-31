#pragma once

namespace AlgoCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Sumário para FormSplash
	/// </summary>
	public ref class FormSplash : public System::Windows::Forms::Form
	{
	public:
		FormSplash(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
			i = 0;
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~FormSplash()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^  timer;


	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::PictureBox^  photoFAITEC;
	private: System::Windows::Forms::PictureBox^  photoAC;
	private: System::Windows::Forms::Label^  lblCarregando;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>

		int i;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte do Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormSplash::typeid));
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->photoFAITEC = (gcnew System::Windows::Forms::PictureBox());
			this->photoAC = (gcnew System::Windows::Forms::PictureBox());
			this->lblCarregando = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoFAITEC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoAC))->BeginInit();
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Tick += gcnew System::EventHandler(this, &FormSplash::timer_Tick);
			// 
			// photoFAITEC
			// 
			this->photoFAITEC->BackColor = System::Drawing::Color::Transparent;
			this->photoFAITEC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"photoFAITEC.Image")));
			this->photoFAITEC->Location = System::Drawing::Point(-1, 0);
			this->photoFAITEC->Name = L"photoFAITEC";
			this->photoFAITEC->Size = System::Drawing::Size(231, 208);
			this->photoFAITEC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->photoFAITEC->TabIndex = 0;
			this->photoFAITEC->TabStop = false;
			// 
			// photoAC
			// 
			this->photoAC->BackColor = System::Drawing::Color::Transparent;
			this->photoAC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"photoAC.Image")));
			this->photoAC->Location = System::Drawing::Point(330, 12);
			this->photoAC->Name = L"photoAC";
			this->photoAC->Size = System::Drawing::Size(75, 50);
			this->photoAC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->photoAC->TabIndex = 1;
			this->photoAC->TabStop = false;
			// 
			// lblCarregando
			// 
			this->lblCarregando->AutoSize = true;
			this->lblCarregando->BackColor = System::Drawing::Color::Transparent;
			this->lblCarregando->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCarregando->ForeColor = System::Drawing::Color::White;
			this->lblCarregando->Location = System::Drawing::Point(256, 159);
			this->lblCarregando->Name = L"lblCarregando";
			this->lblCarregando->Size = System::Drawing::Size(159, 34);
			this->lblCarregando->TabIndex = 2;
			this->lblCarregando->Text = L"CARREGANDO";
			// 
			// FormSplash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(427, 202);
			this->Controls->Add(this->lblCarregando);
			this->Controls->Add(this->photoAC);
			this->Controls->Add(this->photoFAITEC);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormSplash";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Carregando";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoFAITEC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoAC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (i < 50){
			i++;
		}
		else{
			timer->Enabled = false;
			this->Close();
		}
	}
	};
}
