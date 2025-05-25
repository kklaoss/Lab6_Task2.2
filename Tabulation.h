#include "Action.h"

class Tabulation : public Action {
public:
	Tabulation() : name("Tabulation") {}
	const std::string& GetName() const override { return name; }
	void Operate(Function*) override;
private:
	std::string name;
};

extern Tabulation tabulation;
