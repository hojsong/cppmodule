#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &claptrap);
		ScavTrap &operator=(const ScavTrap &claptrap);
		void attack(const std::string &target);
		void guardGate(void);
		~ScavTrap();	
};