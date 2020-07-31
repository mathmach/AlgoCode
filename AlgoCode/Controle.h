#ifndef ControleH
#define ControleH

#include <iostream>
using namespace std;
#include <string>
#include "FormSplash.h"
#include "FormPrincipal.h"
#include "FormAnalisadorLexico.h"
#include "FormOpcoes.h"
#include "FormComoUsar.h"
#include "FormSobre.h"

using namespace System;
using namespace System::Windows::Forms;

class Controle{
private:
public:
	Controle();
	~Controle();
	void controlarExecucao(void);
};
#endif