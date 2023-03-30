#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap A;
	DiamondTrap B("Hojo");

	A.guardGate();
	// A.attack("ASD");
	// A.highFivesGuys();
	// A.beRepaired(50);
	A.whoAmI();
	A.Status();
	// B.guardGate();
	// B.attack("ASD");
	// B.highFivesGuys();
	// B.beRepaired(50);
	B.whoAmI();
	B.Status();
}