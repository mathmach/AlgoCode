#include "Controle.h"

using namespace AlgoCode;

Controle::Controle(){

}

Controle::~Controle(){

}

void Controle::controlarExecucao(void){
	FormSplash fsplash;
	fsplash.ShowDialog();
	FormPrincipal fp;
	FormAnalisadorLexico fal;
	FormOpcoes fo;
	FormComoUsar fcu;
	FormSobre fs;

	while (fp.getStatus() != 0){
		fp.ShowDialog();
		switch (fp.getStatus()){
		case 1:
			fp.ConvertAlgorithmToC();
			//fp.Tabulate();
			break;
		case 2:
			fp.newFile();
			break;
		case 3:
			fp.openFile();
			break;
		case 4:
			fp.saveFile();
			break;
		case 5:
			while (fal.getStatus() != 0){
				fal.ShowDialog();
				switch (fal.getStatus()){
				case 1:
					fal.removerEspaco();
					break;
				case 2:
					fal.analisarLexicografia(fal.getOpcao());
					break;
				default:
					break;
				}
			}
			fal.setStatus(-1);
			break;
		case 6:
			fo.ShowDialog();
			switch (fo.getStatus()){
			case 1:
				fp.ChangeFont();
				break;
			case 2:
				fp.ChangeBackgroundColor();
				break;
			case 3:
				fp.ChangeFontColor();
			default:
				break;
			}
			break;
		case 7:
			fcu.ShowDialog();
			break;
		case 8:
			fs.ShowDialog();
			break;
		default:
			break;
		}
	}

}