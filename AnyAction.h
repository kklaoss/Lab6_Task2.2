#include "Action.h"

class AnyAction : public Action {
public:
	AnyAction() : name("Any action") {}
	const std::string& GetName() const override { return name; }
	void Operate(Function*) override;
private:
	std::string name;
};

extern AnyAction any_action;