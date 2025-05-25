#include <iostream>
#include <iomanip>
#include "Tabulation.h"

void Tabulation::Operate(Function* pFunc) {
	std::cout << "Tabulation for function y = " << pFunc->GetName() << std::endl;
	pFunc->SetCoeff();
	double x_beg, x_end, x_step;

	std::cout << "Enter x_beg = ";
	std::cin >> x_beg;
	std::cout << "Enter x_end = ";
	std::cin >> x_end;
	std::cout << "Enter x_step = ";
	std::cin >> x_step;
	std::cin.ignore();

	std::cout << "______________________" << std::endl;
	std::cout << "   x         y" << std::endl;
	std::cout << "______________________" << std::endl;

	double x = x_beg;
	while (x <= x_end) {
		pFunc->SetArg(x);
		std::cout << std::setw(6) << x << std::setw(14) << pFunc->GetVal() << std::endl;
		x += x_step;
	}
	std::cin.ignore();
}

Tabulation tabulation;