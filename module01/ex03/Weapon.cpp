
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{

}

std::string Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(const std::string type)
{
	this->type = type;
}