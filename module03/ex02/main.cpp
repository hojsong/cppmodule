#include "ScavTrap.hpp"

int	main(void){
	ScavTrap A;
	ScavTrap B("hojo");

	A.attack("Ho");
	A.beRepaired(100);
	A.guardGate();
	A.takeDamage(100);
	A.beRepaired(10);
	B.attack("A");
	B.beRepaired(10);
	B.takeDamage(19);
	B.guardGate();
	B.beRepaired(39);
	B.guardGate();
}