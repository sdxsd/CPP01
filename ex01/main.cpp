#include "Zombie.hpp"

int main(int argc, char *argv[]) {
	Zombie	*horde;
	int		n_zombies;

	n_zombies = atoi(argv[1]);
	if (n_zombies == 0)
		return (0);
	if (argc > 1 && argc <= 3) {
		horde = zombieHorde(n_zombies, argv[2]);
		for (int i = 0; i < n_zombies; i++)
			horde[i].announce();
	}
	else
		std::cout << "Please enter the number of zombies and a name for the zombies." << std::endl;
}
