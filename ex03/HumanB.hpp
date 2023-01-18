#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string title);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon& newWeapon);
};

#endif // HUMANB_H
