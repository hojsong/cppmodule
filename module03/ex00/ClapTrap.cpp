#include "ClapTrap.hpp"
ClapTrap::ClapTrap(){
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->Name = "default";
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap Constructor for the name " << name << " called" << std::endl;
	this->Name = name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap){
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->Name = claptrap.Name;
	this->Hit_points = claptrap.Hit_points;
	this->Energy_points = claptrap.Energy_points;
	this->Attack_damage = claptrap.Attack_damage;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->Hit_points > 0)
	{
		std::cout<< "ClapTrap "<< this->Name<< " attacks "<<target<< ", "<<this->Attack_damage<<" points of damage!" << std::endl;
	}
	else
	{
		std::cout<< this->Name << " is Die. Can't Attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->Hit_points > 0)
	{
		std::cout<< "ClapTrap "<< this->Name <<" is take " <<amount <<" Point Damage." << std::endl;
		this->Hit_points -= amount;
	}
	if (this->Hit_points <= 0)
		std::cout<< "ClapTrap "<< this->Name <<" is Die."<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if ((unsigned int)this->Energy_points >= amount && this->Hit_points > 0)
	{
		this->Energy_points -= amount;
		this->Hit_points += amount;
		std::cout<< "ClapTrap "<<this->Name<<" is Repaired " <<amount <<" Point." << std::endl;
	}
	else if (this->Hit_points <= 0)
	{
		std::cout<< "ClapTrap "<<this->Name<<" is Die. Can Not Repaired" << std::endl;
	}
	else if ((unsigned int)this->Energy_points < amount)
	{
		std::cout<< "ClapTrap "<<this->Name<<" is not enough Energy." << std::endl;
	}
}

ClapTrap::~ClapTrap(){
	std::cout << this->Name <<" ClapTrap Destroy Constructor called" << std::endl;
}
