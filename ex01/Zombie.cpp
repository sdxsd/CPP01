#include "Zombie.hpp"

Zombie::Zombie(void) {
	;
}

Zombie::~Zombie() {
	std::cout << name << ": has been destroyed." << std::endl;
}

Zombie *Zombie::newZombie(std::string name) {
	Zombie *zombie = new Zombie;
	zombie->name = name;
	return (zombie);
}

void Zombie::randomChump(std::string name) {
	Zombie chump;
	chump.name = name;
	chump.announce();
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string title) {
	name = title;
}
