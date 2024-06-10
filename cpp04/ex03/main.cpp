#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main( void ){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("test");
	me->equip(tmp);
	tmp = src->createMateria("test1");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
//	me->unequip(1);
//	me->use(1, *bob);
//	me->equip(tmp);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
//	delete tmp;
	delete bob;
	delete me;
	delete src;
	return 0;
}