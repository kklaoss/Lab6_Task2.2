#include <iostream>
#include "Calculation.h"

void Calculation::Operate(Function* pFunc) {
	std::cout << "Calculation for function y = " << pFunc->GetName() << std::endl;
	pFunc->SetCoeff();
	double x;
	std::cout << "Enter x = ";
	std::cin >> x;
	std::cin.ignore();
	pFunc->SetArg(x);
	std::cout << "y = " << pFunc->GetVal() << std::endl;
	std::cin.ignore();
}

Calculation calculation;