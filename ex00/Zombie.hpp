#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(std::string title);
		~Zombie();
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
		void	announce(void);
};

#endif // ZOMBIE_H
