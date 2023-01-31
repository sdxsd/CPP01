#include "Weapon.hpp"

Weapon::Weapon(void) {
	;
}

Weapon::Weapon(std::string weaponType) {
	type = weaponType;
}

const std::string& Weapon::getType(void) {
	return (type);
}

void Weapon::setType(std::string weaponType) {
	type = weaponType;
}
