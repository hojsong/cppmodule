#include "FragTrap.hpp"
FragTrap::FragTrap(){
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->Name = "default";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap Constructor for the name " << name << " called" << std::endl;
	this->Name = name;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &claptrap){
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = claptrap;
}

FragTrap &FragTrap::operator=(const FragTrap &claptrap){
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->Name = claptrap.Name;
	this->Hit_points = claptrap.Hit_points;
	this->Energy_points = claptrap.Energy_points;
	this->Attack_damage = claptrap.Attack_damage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	if (this->Hit_points == 0)
		std::cout<< "FragTrap "<< this->Name << " is Die. Can't High Five." << std::endl;
	else if (this->Energy_points == 0)
		std::cout<< "FragTrap "<< this->Name << " is 0 Energy. Can't High Five." << std::endl;
	else
	{
		std::cout << "FragTrap " << this->Name << " is Success High Five." << std::endl;
		this->Energy_points--;
	}
}

FragTrap::~FragTrap(){
	std::cout << this->Name <<" FragTrap Destroy Constructor called" << std::endl;
}
