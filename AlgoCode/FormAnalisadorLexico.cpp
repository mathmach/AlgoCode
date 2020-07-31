#include "FormAnalisadorLexico.h"

using namespace AlgoCode;

int FormAnalisadorLexico::getStatus(){
	return Status;
}

void FormAnalisadorLexico::setStatus(int n){
	Status = n;
}

void FormAnalisadorLexico::removerEspaco(){
	string Texto = "",
		Novo = "";
	MarshalString(rtbResposta->Text, Texto);

	for (unsigned int i = 0; i < Texto.size(); i++){
		if (isgraph(Texto[i])){
			Novo += Texto[i];
		}
	}

	String^ NovoTexto = gcnew String(Novo.c_str());
	rtbResposta->Text = NovoTexto;

	delete(NovoTexto);
}

void FormAnalisadorLexico::analisarLexicografia(int Opcao){
	String^ Resposta = gcnew String("");
	String^ Palavra = gcnew String(tbPalavra->Text);

	if (Opcao == 1) {
		String ^ AlfabetoLetra = gcnew String(tbAlfabeto->Text);
		for (int i = 0; i < Palavra->Length; i++)
		{
			Resposta = "Falso";
			for (int j = 0; j < AlfabetoLetra->Length; j++)
			{
				if (Palavra[i] == AlfabetoLetra[j]) {
					Resposta = "Verdade";
					break;
				}
			}
		}
		delete(AlfabetoLetra);
	}
	else if (Opcao == 2) {
		String ^ AlfabetoNumero = gcnew String(tbAlfabeto->Text);
		for (int i = 0; i < Palavra->Length; i++)
		{
			Resposta = "Falso";
			for (int j = 0; j < AlfabetoNumero->Length; j++)
			{
				if (Palavra[i] == AlfabetoNumero[j]) {
					Resposta = "Verdade";
					break;
				}
			}
		}
		delete(AlfabetoNumero);
	}

	rtbResposta->AppendText(Resposta + Environment::NewLine);

	delete(Resposta);
	delete(Palavra);
}

int FormAnalisadorLexico::getOpcao(){
	return Opcao;
}


