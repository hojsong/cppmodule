#include <iostream>

class ScavTrap{
	private :
		std::string Name;
		int Hit_points;
		int Energy_points;
		int Attack_damage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &claptrap);
		ScavTrap &operator=(const ScavTrap &claptrap);
		void attack(const ScavTrap& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();	
};