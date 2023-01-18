#include "HumanA.hpp"

HumanA::HumanA(std::string title, Weapon& weaponType) : weapon(weaponType) {
	name = title;
}

HumanA::~HumanA(void) {
	return ;
}

void HumanA::attack() {
	std::cout << name << ": attacks with their " << weapon.getType() << std::endl;
}
