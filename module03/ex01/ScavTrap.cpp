#include "ScavTrap.hpp"
ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->Name = "default";
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap Constructor for the name " << name << " called" << std::endl;
	this->Name = name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
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

void ScavTrap::attack(const std::string& target){
	if (this->Hit_points > 0)
	{
		std::cout<< "ScavTrap "<< this->Name<< " attacks "<<target<< ", "<<this->Attack_damage<<" points of damage!" << std::endl;
	}
	else
	{
		std::cout<< this->Name << " is Die. Can't Attack" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount){
	if (this->Hit_points > 0)
	{
		std::cout<< "ScavTrap "<< this->Name <<" is take " <<amount <<" Point Damage." << std::endl;
		this->Hit_points -= amount;
	}
	if (this->Hit_points <= 0)
		std::cout<< "ScavTrap "<< this->Name <<" is Die."<< std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	if ((unsigned int)this->Energy_points >= amount && this->Hit_points > 0)
	{
		this->Energy_points -= amount;
		this->Hit_points += amount;
		std::cout<< "ScavTrap "<<this->Name<<" is Repaired " <<amount <<" Point." << std::endl;
	}
	else if (this->Hit_points <= 0)
	{
		std::cout<< "ScavTrap "<<this->Name<<" is Die. Can Not Repaired" << std::endl;
	}
	else if ((unsigned int)this->Energy_points < amount)
	{
		std::cout<< "ScavTrap "<<this->Name<<" is not enough Energy." << std::endl;
	}
}

ScavTrap::~ScavTrap(){
	std::cout << this->Name <<" ScavTrap Destroy Constructor called" << std::endl;
}
