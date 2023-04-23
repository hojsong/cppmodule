#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	ICharacter* dest = new Character("Dest");
	tmp = src->createMateria("ice");
	dest->equip(tmp);
	tmp = src->createMateria("cure");
	dest->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	bob->unequip(0);
	bob->unequip(1);

	delete bob;
	delete me;
	delete src;
	delete dest;
	return 0;
}