#include <iostream>
#include <vector>
#include "Function.h"
#include "Exp.h"
#include "Line.h"
#include "Action.h"
#include "Calculation.h"
#include "Tabulation.h"
#include "AnyAction.h"
#include "Menu.h"

Function* pObjs[] = { &f_exp, &f_line };
std::vector<Function*> funclist(pObjs, pObjs + sizeof(pObjs) / sizeof(Function*));

Action* pActs[] = { &calculation, &tabulation, &any_action };
std::vector<Action*> operList(pActs, pActs + sizeof(pActs) / sizeof(Action*));

int main() {
	Menu menu(funclist, operList);
	while (Function* pObj = menu.SelectObject()) {
		Action* pAct = menu.Selection(pObj);
		pAct->Operate(pObj);
	}
	std::cout << "Bye!\n";
	return 0;
}