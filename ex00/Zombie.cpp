#include "Zombie.hpp"

Zombie::Zombie(std::string title) {
	name = title;
}

Zombie::~Zombie() {
	std::cout << name << ": has been destroyed." << std::endl;
}

Zombie *Zombie::newZombie(std::string name) {
	return (new Zombie(name));
}

void Zombie::randomChump(std::string name) {
	Zombie chump(name);
	chump.announce();
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
