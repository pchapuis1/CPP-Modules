#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
	private:
		std::string	_type;
	
	public:
		Cure();
		Cure(const Cure&);
		~Cure();

		Cure& operator=(const Cure& rhs);

		std::string const &getType() const;
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif