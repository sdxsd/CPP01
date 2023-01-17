#include "Weapon.hpp"

const std::string Weapon::getType(void) {
	return (type);
}

void Weapon::setType(std::string weaponType) {
	type = weaponType;
}
