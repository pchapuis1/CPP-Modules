#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria	*(_inventory[4]);

	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif