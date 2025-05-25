#include "Action.h"

class Calculation : public Action {
public:
	Calculation() : name("Calculation") {}
	const std::string& GetName() const override { return name; }
	void Operate(Function*) override;
private:
	std::string name;
};

extern Calculation calculation;