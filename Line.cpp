#include <iostream>
#include "Line.h"

void Line::SetCoeff() {
	std::cout << "Enter a = ";
	std::cin >> a;
	std::cout << "Enter b = ";
	std::cin >> b;
}

Line f_line;