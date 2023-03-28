#include "ClapTrap.hpp"

int	main(void){
	ClapTrap A;
	ClapTrap B("hojo");

	A.attack("Ho");
	A.beRepaired(100);
	A.takeDamage(100);
	A.beRepaired(10);
	B.attack("A");
	B.beRepaired(10);
	B.takeDamage(19);
	B.beRepaired(10);
}