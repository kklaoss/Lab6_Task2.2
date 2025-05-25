#include "Function.h"

class Line : public Function {
public:
	Line() : name("a * x + b") {}
	const std::string& GetName() const override { return name; }
	void SetCoeff() override;
	double GetVal() const override { return (a * x + b); }
private:
	std::string name;
	double a;
	double b;
};

extern Line f_line;