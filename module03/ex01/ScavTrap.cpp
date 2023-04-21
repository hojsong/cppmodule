#include "ScavTrap.hpp"
ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->Name = "default";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap Constructor for the name " << name << " called" << std::endl;
	this->Name = name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &claptrap){
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = claptrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &claptrap){
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->Name = claptrap.Name;
	this->Hit_points = claptrap.Hit_points;
	this->Energy_points = claptrap.Energy_points;
	this->Attack_damage = claptrap.Attack_damage;
	return *this;
}

void ScavTrap::guardGate(void){
	if (this->Hit_points == 0)
		std::cout<< "ScavTrap "<< this->Name << " is Die. Can't Gate Guard Mode." << std::endl;
	else if (this->Energy_points == 0)
		std::cout<< "ScavTrap "<< this->Name << " is 0 Energy. Can't Gate Guard Mode." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->Name << " is Success Gate Guard Mode." << std::endl;
		this->Energy_points--;
	}
}

void ScavTrap::attack(const std::string &target){
	if (this->Hit_points == 0)
		std::cout<< "ScavTrap "<< this->Name << " is Die. Cannot Attack." << std::endl;
	else if (this->Energy_points == 0)
		std::cout<< "ScavTrap "<< this->Name << " is 0 Energy. Cannot Attack" << std::endl;
	else
	{
		std::cout<< "ScavTrap "<< this->Name<< " attacks " << target << ", "<< this->Attack_damage<<" points of damage!" << std::endl;
		this->Energy_points--;
	}
}


ScavTrap::~ScavTrap(){
	std::cout << this->Name <<" ScavTrap Destroy Constructor called" << std::endl;
}
