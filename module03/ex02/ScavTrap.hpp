#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &claptrap);
		ScavTrap &operator=(const ScavTrap &claptrap);
		void attack(const std::string &target);
		void guardGate(void);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ScavTrap();	
};