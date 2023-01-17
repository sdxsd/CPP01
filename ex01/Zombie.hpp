#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
		void	announce(void);
		void	setName(std::string title);
};

Zombie*	zombieHorde(int n, std::string name);

#endif // ZOMBIE_H
