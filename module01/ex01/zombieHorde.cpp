#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *result = new Zombie[N];
	int	i;

	i = 0;
	while (i < N)
	{
		result[i].setName(name);
		i++;
	}
	return (result);
}