#include "HumanA.hpp"

HumanA::HumanA(std::string title, Weapon weaponType) : weapon("") {
	name = title;
	weapon.setType(weaponType.getType());
}

HumanA::~HumanA(void) {
	return ;
}

void HumanA::attack() {
	std::cout << name << ": attacks with their " << weapon.getType() << std::endl;
}
