#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &claptrap);
		ScavTrap &operator=(const ScavTrap &claptrap);
		virtual void attack(const std::string &target);
		void guardGate(void);
		virtual ~ScavTrap();	
};

#endif