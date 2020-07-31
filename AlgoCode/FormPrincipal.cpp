#include "FormPrincipal.h"

using namespace AlgoCode;

int FormPrincipal::getStatus(){
	return Status;
}

void FormPrincipal::ConvertAlgorithmToC(){
	for (int i = 0; i < rtbCode->Lines->Length; i++)
	{
		String^ Linha = gcnew String(rtbCode->Lines[i]->ToString());
		if (Linha->Contains("[INICIO]")){
			Linha = Linha->Replace("[INICIO]", "#include <stdio.h>");
			rtbConvert->AppendText(Linha + Environment::NewLine);
		}
		else if (Linha->Contains("[CONSTANTE]")){
			i = Const(i + 1);
			rtbConvert->AppendText(Environment::NewLine);
		}
		else if (Linha->Contains("[VARIAVEL]")){
			i = Var(i + 1);
			rtbConvert->AppendText(Environment::NewLine);
		}
		else if (Linha->Contains("[PROCESSAMENTO]")){
			rtbConvert->AppendText("int main() {" + Environment::NewLine);
			i = Process(i + 1);
		}
		else if (Linha->Contains("[FIM]")){
			rtbConvert->AppendText("return 0;" + Environment::NewLine);
			rtbConvert->AppendText("}" + Environment::NewLine);
		}
		else{
			rtbConvert->AppendText(rtbCode->Lines[i] + Environment::NewLine);
		}
		delete(Linha);
	}
}

int FormPrincipal::Const(int line){
	int i = line;
	for (i = line; i < rtbCode->Lines->Length; i++){
		String^ Verify = gcnew String(rtbCode->Lines[i]->ToString());
		Verify = Verify->Replace(" ", "");
		if (String::Compare(Verify, "[VARIAVEL]", StringComparison::OrdinalIgnoreCase) == 0 || String::Compare(Verify, "[PROCESSAMENTO]", StringComparison::OrdinalIgnoreCase) == 0){
			return i - 1;
		}
		else
		{
			String^ Linha = gcnew String(rtbCode->Lines[i]->ToString());
			if (!String::IsNullOrWhiteSpace(Linha)){
				Linha = Linha->Replace('=', ' ');
				rtbConvert->AppendText("#define " + Linha + Environment::NewLine);

			}
			delete(Linha);
		}
		delete(Verify);
	}
	return i - 1;
}

int FormPrincipal::Var(int line){
	int i = line;
	string varTypes[3] = { "CARACTER", "INTEIRO", "REAL" };
	string varTypesH[3] = { "char", "int", "float" };
	for (i = line; i < rtbCode->Lines->Length; i++){
		String^ Verify = gcnew String(rtbCode->Lines[i]->ToString());
		Verify = Verify->Replace(" ", "");
		if (String::Compare(Verify, "[PROCESSAMENTO]", StringComparison::OrdinalIgnoreCase) == 0){
			return i - 1;
		}
		else
		{
			String^ Linha = gcnew String(rtbCode->Lines[i]->ToString());
			String^ delim = gcnew String(":");
			if (Linha->Contains(delim)){
				int pos = Linha->IndexOf(delim);
				int indexSize = Linha->Length - Linha->IndexOf(delim);
				Linha = Linha->Substring(0, pos) + Linha->Substring(pos, indexSize)->ToUpper();
				for (int j = 0; j < 4; j++){
					String^ varOriginal = gcnew String(varTypes[j].c_str());
					String^ varConvert = gcnew String(varTypesH[j].c_str());
					if (Linha->Contains(varOriginal)){
						Linha = Linha->Remove(pos, indexSize);
						Linha = Linha->Insert(0, " ");
						Linha = Linha->Insert(0, varOriginal);
						Linha = Linha->Replace(varOriginal, varConvert);
						break;
					}
					delete(varConvert);
					delete(varOriginal);
				}
			}
			if (!String::IsNullOrWhiteSpace(Linha)){
				rtbConvert->AppendText(Linha + ";" + Environment::NewLine);
			}
			else{
				rtbConvert->AppendText(Linha + Environment::NewLine);
			}
			delete(Linha);
			delete(delim);
		}
		delete(Verify);
	}
	return i - 1;
}

int FormPrincipal::Process(int line){
	int i = line;
	string instructionTypes[13] = { "CASO", "ENQUANTO", "ESCREVA", "FACA", "FIM-", "LEIA", "PARA", "REPITA", "SENAO", "SE", "ATE", "<-", "ESCOLHA" };
	string instructionTypesH[13] = { "case", "while", "printf", "{", "}", "scanf", "for", "do {", "} else", "if", "} while", "=", "switch" };
	for (i = line; i < rtbCode->Lines->Length; i++){
		String^ Verify = gcnew String(rtbCode->Lines[i]->ToString());
		Verify = Verify->Replace(" ", "");
		if (String::Compare(Verify, "[FIM]", StringComparison::OrdinalIgnoreCase) == 0){
			return i - 1;
		}
		else
		{
			String^ Linha = gcnew String(rtbCode->Lines[i]->ToString());
			for (int j = 0; j < 13; j++){
				String^ instOriginal = gcnew String(instructionTypes[j].c_str());
				String^ instConvert = gcnew String(instructionTypesH[j].c_str());
				while (Linha->Contains(instOriginal)){
					if (j == 0){
						Linha = gcnew String(Case(i));
					}
					else if (j == 1){
						Linha = Linha->Insert(Linha->Length, " {");
					}
					else if (j == 2){
						Linha = gcnew String(Printf(i));
					}
					else if (j == 4){
						if (Linha->Contains("FIM-ESCOLHA")){
							Linha = Linha->Replace("FIM-ESCOLHA", "break;" + Environment::NewLine + "}");
						}
						else{
							int pos = Linha->IndexOf("-");
							int indexSize = Linha->Length - Linha->IndexOf("-") - 1;
							Linha = Linha->Remove(pos + 1, indexSize);
						}
					}
					else if (j == 5){
						Linha = gcnew String(Scanf(i));
					}
					else if (j == 6){
						Linha = gcnew String(For(i));
					}
					else if (j == 10){
						Linha = Linha->Insert(Linha->Length, ";");
					}
					Linha = Linha->Replace(instOriginal, instConvert);
				}
				delete(instOriginal);
				delete(instConvert);
			}
			if (Linha->Contains("{") || Linha->Contains("}") || Linha->Contains(":")){
				rtbConvert->AppendText(Linha + Environment::NewLine);
			}
			else if (!String::IsNullOrWhiteSpace(Linha)){
				rtbConvert->AppendText(Linha + ";" + Environment::NewLine);
			}
			else{
				rtbConvert->AppendText(Linha + Environment::NewLine);
			}
			delete(Linha);
		}
		delete(Verify);
	}
	return i - 1;
}

String^ FormPrincipal::Printf(int line){
	string varTypes[3] = { "CARACTER", "INTEIRO", "REAL" };
	string varAux[3] = { "%c", "%i", "%f", };

	String^ Linha = gcnew String(rtbCode->Lines[line]->ToString());

	Linha = Linha->Replace("ESCREVA", "printf");

	int posPS = Linha->IndexOf("(");
	Linha = Linha->Insert(posPS + 1, "\"");
	int posPE = Linha->IndexOf(")");
	Linha = Linha->Insert(posPE, "\"");
	int indexSize = Linha->IndexOf(")") - Linha->IndexOf("(");
	for (int i = 0; i < rtbCode->Lines->Length; i++)
	{
		String^ LinhaAux = gcnew String(rtbCode->Lines[i]->ToString());
		if (LinhaAux->Contains("[VARIAVEL]")){
			LinhaAux = gcnew String(rtbCode->Lines[i + 1]->ToString());
			while (!LinhaAux->Contains("[PROCESSAMENTO]")){
				for (int j = 0; j < 4; j++){
					String^ varTypeH = gcnew String(varTypes[j].c_str());
					String^ varAuxConvert = gcnew String(varAux[j].c_str());
					String^ aux = gcnew String(Linha->Substring(posPS + 2, indexSize - 3));
					if (LinhaAux->Contains(aux)){
						if (LinhaAux->Contains(varTypeH)){
							Linha = Linha->Replace(aux, varAuxConvert);
							aux = aux->Insert(0, ", ");
							posPE = Linha->IndexOf(")");
							Linha = Linha->Insert(posPE, aux);
							break;
						}
					}
					delete(varAuxConvert);
					delete(aux);
					delete(varTypeH);
				}
				LinhaAux = gcnew String(rtbCode->Lines[2 + i++]->ToString());
			}
		}
		delete(LinhaAux);
	}
	delete(Linha);
	return Linha;
}

String^ FormPrincipal::Scanf(int line){
	string varTypes[3] = { "CARACTER", "INTEIRO", "REAL" };
	string varAux[3] = { "%c", "%i", "%f", };

	String^ Linha = gcnew String(rtbCode->Lines[line]->ToString());

	Linha = Linha->Replace("LEIA", "scanf");

	int posPS = Linha->IndexOf("(");
	Linha = Linha->Insert(posPS + 1, "\"");
	int posPE = Linha->IndexOf(")");
	Linha = Linha->Insert(posPE, "\"");
	int indexSize = Linha->IndexOf(")") - Linha->IndexOf("(");
	for (int i = 0; i < rtbCode->Lines->Length; i++)
	{
		String^ LinhaAux = gcnew String(rtbCode->Lines[i]->ToString());
		if (LinhaAux->Contains("[VARIAVEL]")){
			LinhaAux = gcnew String(rtbCode->Lines[i + 1]->ToString());
			while (!LinhaAux->Contains("[PROCESSAMENTO]")){
				for (int j = 0; j < 4; j++){
					String^ varTypeH = gcnew String(varTypes[j].c_str());
					String^ varAuxConvert = gcnew String(varAux[j].c_str());
					String^ aux = gcnew String(Linha->Substring(posPS + 2, indexSize - 3));
					if (LinhaAux->Contains(aux)){
						if (LinhaAux->Contains(varTypeH)){
							Linha = Linha->Replace(aux, varAuxConvert);
							aux = aux->Insert(0, ", &");
							posPE = Linha->IndexOf(")");
							Linha = Linha->Insert(posPE, aux);
							break;
						}
					}
					delete(varAuxConvert);
					delete(aux);
					delete(varTypeH);
				}
				LinhaAux = gcnew String(rtbCode->Lines[2 + i++]->ToString());
			}
		}
		delete(LinhaAux);
	}
	delete(Linha);
	return Linha;
}

String^ FormPrincipal::For(int line){
	String^ Linha = gcnew String(rtbCode->Lines[line]->ToString());
	Linha = Linha->Replace("PARA", "for");
	Linha = Linha->Replace("<-", "=");
	Linha = Linha->Replace("ATE", "<");
	Linha = Linha->Replace("FACA", " {");

	Linha = Linha->Insert(Linha->IndexOf("for") + 3, " (");
	String^ AuxVar = gcnew String(Linha->Substring(Linha->IndexOf("(") + 1, (Linha->IndexOf("=") - Linha->IndexOf("(") - 1)));
	AuxVar = AuxVar->Replace(" ", "");
	Linha = Linha->Insert(Linha->IndexOf("<"), "; " + AuxVar);
	Linha = Linha->Insert(Linha->IndexOf("{"), ") ");
	String^ AuxNum = gcnew String(Linha->Substring(Linha->IndexOf("<") + 1, (Linha->IndexOf(")") - Linha->IndexOf("<") - 1)));
	AuxNum = AuxNum->Replace(" ", "");
	Linha = Linha->Insert(Linha->IndexOf(AuxNum) + AuxNum->Length, "; " + AuxVar + "++");

	delete(AuxVar);
	delete(AuxNum);
	delete(Linha);
	return Linha;
}

String^ FormPrincipal::Case(int line){
	String^ Linha = gcnew String(rtbCode->Lines[line]->ToString());
	Linha = Linha->Replace("CASO", "case");
	Linha = Linha->Insert(Linha->Length, ":");

	for (int i = line - 1; i > -1; i--)
	{
		String^ LinhaAux = gcnew String(rtbCode->Lines[i]->ToString());
		if (LinhaAux->Contains("ESCOLHA")){
			break;
		}
		else if (LinhaAux->Contains("CASO")){
			Linha = gcnew String("break;" + Environment::NewLine + Linha);
			break;
		}
		delete(LinhaAux);
	}
	delete(Linha);
	return Linha;
}

void FormPrincipal::newFile(){
	if (!String::IsNullOrWhiteSpace(rtbCode->Text)){
		System::Windows::Forms::DialogResult result = MessageBox::Show("Deseja salvar antes de fechar?", "Aviso", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes){
			saveFile();
			rtbCode->Clear();
			rtbConvert->Clear();
		}
		else{
			rtbCode->Clear();
			rtbConvert->Clear();
		}
	}
}

void FormPrincipal::saveFile(){
	SaveFileDialog^ sfdSave = gcnew SaveFileDialog();
	sfdSave->Filter = "AlgoCode Text|*.ac";
	sfdSave->Title = "Save an Text File";

	if (sfdSave->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(sfdSave->FileName);
		for (int i = 0; i < rtbCode->Lines->Length; i++)
		{
			sw->WriteLine(rtbCode->Lines[i]);
		}
		sw->Close();
		MessageBox::Show("Salvo", "Aviso");
	}
	delete(sfdSave);

}

void FormPrincipal::openFile(){
	OpenFileDialog^ ofdOpen = gcnew OpenFileDialog();
	if (ofdOpen->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(ofdOpen->FileName);
		rtbCode->Clear();
		rtbConvert->Clear();
		rtbCode->Text = sr->ReadToEnd();
		sr->Close();
		delete(sr);
	}
	delete(ofdOpen);
}

void FormPrincipal::AddLineNumbers(){
	Point pt = Point(0, 0);
	int First_Index = rtbCode->GetCharIndexFromPosition(pt);
	int First_Line = rtbCode->GetLineFromCharIndex(First_Index);
	pt.X = ClientRectangle.Width;
	pt.Y = ClientRectangle.Height;

	int Last_Index = rtbCode->GetCharIndexFromPosition(pt);
	int Last_Line = rtbCode->GetLineFromCharIndex(Last_Index);
	rtbLineCount->SelectionAlignment = HorizontalAlignment::Center;
	rtbLineCount->Text = "";
	for (int i = First_Line; i <= Last_Line + 1; i++)
	{
		rtbLineCount->Text += i + 1 + "\n";
	}
}

void FormPrincipal::ChangeFont(){
	FontDialog ^ fontDialog = gcnew FontDialog;

	fontDialog->Font = FormPrincipal::rtbCode->SelectionFont;

	if (fontDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && fontDialog->Font != rtbCode->SelectionFont){
		rtbCode->Font = fontDialog->Font;
	}
	delete(fontDialog);
}

void FormPrincipal::ChangeBackgroundColor(){
	ColorDialog ^ colorDialog = gcnew ColorDialog;

	colorDialog->Color = rtbCode->SelectionColor;

	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && colorDialog->Color != rtbCode->SelectionColor){
		rtbCode->BackColor = colorDialog->Color;
	}
	delete(colorDialog);
}

void FormPrincipal::ChangeFontColor(){
	ColorDialog ^ colorDialog = gcnew ColorDialog;

	colorDialog->Color = rtbCode->SelectionColor;

	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && colorDialog->Color != rtbCode->SelectionColor){
		rtbCode->ForeColor = colorDialog->Color;
	}
	delete(colorDialog);
}

void FormPrincipal::Tabulate(){
	String^ Text = gcnew String("");
	for (int i = 0; i < rtbConvert->Lines->Length; i++)
	{
		String^ Linha = gcnew String(rtbConvert->Lines[i]->ToString());
		if (Linha->Contains("{")){
			Text = Text->Concat(Text, Linha + Environment::NewLine);
			Linha = gcnew String(rtbConvert->Lines[i + 1]->ToString());
			while (!Linha->Contains("}") || (Linha->Contains("}") && Linha->Contains("{")) || Linha->Contains("{")){
				Text = Text->Concat(Text, "\t" + Linha + Environment::NewLine);
				Linha = gcnew String(rtbConvert->Lines[2 + i++]->ToString());
			}
			i++;
		}
		Text = Text->Concat(Text, Linha + Environment::NewLine);
		delete(Linha);
	}
	rtbConvert->Text = Text;
	delete(Text);
}