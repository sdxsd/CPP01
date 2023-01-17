#include "HumanA.hpp"

HumanA::HumanA(std::string title, std::string weaponType) {
	name = title;
	weapon.setType(weaponType);
}

HumanA::~HumanA(void) {
	return ;
}

void HumanA::attack() {
	std::cout << name << ": attacks with their " << weapon.getType() << std::endl;
}
