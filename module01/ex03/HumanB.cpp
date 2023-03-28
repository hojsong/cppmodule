#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}
HumanB::~HumanB(void)
{

}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void HumanB::attack()
{
	std::string str = weapon->getType();
	std::cout << name << " attacks with their " << str << std::endl;
}