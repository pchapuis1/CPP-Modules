#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
	private:
		std::string	_type;

	public:
		Ice();
		Ice(const Ice&);
		~Ice();

		Ice& operator=(const Ice& rhs);
		
		std::string const &getType() const;
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif