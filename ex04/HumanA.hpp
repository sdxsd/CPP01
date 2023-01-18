#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon weapon;
	public:
		HumanA(std::string title, Weapon weaponType);
		~HumanA(void);
		void	attack(void);
};

#endif // HUMANA_H
