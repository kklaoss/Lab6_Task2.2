#include <cmath>
#include "Function.h"

class Exp : public Function {
public:
	Exp() : name("e ^ x") {}
	const std::string& GetName() const override { return name; }
	void SetCoeff() override {}
	double GetVal() const override { return exp(x); }
private:
	std::string name;
};

extern Exp f_exp;