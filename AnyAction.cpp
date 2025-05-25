#include <iostream>
#include "AnyAction.h"

void AnyAction::Operate(Function*) {
	std::cout << "Your advertising might be here!" << std::endl;
	std::cin.ignore();
}

AnyAction any_action;