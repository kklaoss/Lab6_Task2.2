#include <iostream>
#include "Menu.h"

Menu::Menu(std::vector<Function*> _pObj, std::vector<Action*> _pAct)
	: pObj(_pObj), pAct(_pAct) {
	pObj.push_back(nullptr);
}

Function* Menu::SelectObject() const {
	int nItem = pObj.size();
	std::cout << "==============================" << std::endl;
	std::cout << "Select one of the following functions:" << std::endl;
	for (int i = 0; i < nItem; ++i) {
		std::cout << i + 1 << ". ";
		if (pObj[i]) std::cout << pObj[i]->GetName() << std::endl;
		else std::cout << "Exit" << std::endl;
	}
	int item = SelectItem(nItem);
	return (item == 0) ? nullptr : pObj[item - 1];
}

Action* Menu::Selection(Function* pObj) const {
	int nItem = pAct.size();
	std::cout << "==============================" << std::endl;
	std::cout << "Select one of the following actions:" << std::endl;
	for (int i = 0; i < nItem; ++i) {
		std::cout << i + 1 << ". " << pAct[i]->GetName() << std::endl;
	}
	int item = SelectItem(nItem);
	return pAct[item - 1];
}

int Menu::SelectItem(int nItem) const {
	int item;
	while (true) {
		std::cin >> item;
		if (item >= 0 && item <= nItem && (std::cin.peek() == '\n')) {
			std::cin.ignore();
			break;
		}
		else {
			std::cout << "Error (must be number from 1 to " << nItem << "):" << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n') {}
		}
	}
	return item;
}