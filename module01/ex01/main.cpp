#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = zombieHorde(10, "Zombie2");
	int	i;

	i = 0;
	while (i < 10)
	{
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
	return (0);
}