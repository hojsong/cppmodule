#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private :
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &trap);
		DiamondTrap &operator=(const DiamondTrap &claptrap);
		void whoAmI(void);
		void Status(void);
		virtual ~DiamondTrap();
};

#endif