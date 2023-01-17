#include "Zombie.hpp"

int main(void) {
	Zombie stackZombie("Zhazhek");
	Zombie *coolZombie;

	stackZombie.announce();
	coolZombie = stackZombie.newZombie("Jonkadingo");
	coolZombie->announce();
	stackZombie.randomChump("Bakal");
	delete coolZombie;
}
