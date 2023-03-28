#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " Zombie Create" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is Dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{

}

void Zombie::setName(std::string name)
{
	this->name = name;
}