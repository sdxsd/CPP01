#include "HumanB.hpp"

HumanB::HumanB(std::string title) {
	name = title;
	weapon = NULL;
}

HumanB::~HumanB(void) {
	return ;
}

void HumanB::attack() {
	if (weapon)
		std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << ": is unable to attack due to lack of weaponry." << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}
