#include "HumanB.hpp"

HumanB::HumanB(std::string title) {
	name = title;
}

HumanB::~HumanB(void) {
	return ;
}

void HumanB::attack() {
	std::cout << name << ": attacks with their " << weapon.getType() << std::endl;
}
