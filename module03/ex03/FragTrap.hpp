#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &claptrap);
		FragTrap &operator=(const FragTrap &claptrap);
		void highFivesGuys(void);
		~FragTrap();	
};