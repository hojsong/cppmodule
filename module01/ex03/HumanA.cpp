#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void)
{
	std::string str = weapon->getType();
	std::cout << name << " attacks with their " << str << std::endl;
}