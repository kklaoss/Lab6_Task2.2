#include <vector>
#include "Function.h"
#include "Action.h"

class Menu {
public:
	Menu(std::vector<Function*>, std::vector<Action*>);
	Function* SelectObject() const;
	Action* Selection(Function*) const;
private:
	int SelectItem(int) const;
	std::vector<Function*> pObj;
	std::vector<Action*> pAct;
};