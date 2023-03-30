#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): name(ClapTrap::Name)
{
    this->Hit_points = FragTrap::Hit_points;
	this->Attack_damage = FragTrap::Attack_damage;
    this->Energy_points = ScavTrap::Energy_points;
	ClapTrap::Name = name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj), name(obj.name)
{
	std::cout << "DiamondTrap " << name << " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) 
{
	this->Name = obj.Name;
	this->Attack_damage = obj.Attack_damage;
	this->Hit_points = obj.Hit_points;
	this->Energy_points = obj.Energy_points;
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << this->Name << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), ScavTrap(), FragTrap()
{
    this->Hit_points = FragTrap::Hit_points;
	this->Attack_damage = FragTrap::Attack_damage;
    this->Energy_points = ScavTrap::Energy_points;
	this->Name = name;
	ClapTrap::Name = name + "_clap_name";
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout	<< "This DiamondTrap name is " << this->Name 
				<< " and This ClapTrap name is " << ClapTrap::Name << std::endl;
}

void DiamondTrap::Status(void)
{
    std::cout << "Diamond Trap Name : " << this->Name << std::endl;
    std::cout << "this Hit_points : " << this->Hit_points << std::endl;
    std::cout << "this Energy_points : " << this->Energy_points << std::endl;
    std::cout << "this Attack_damage : " << this->Attack_damage << std::endl;
}