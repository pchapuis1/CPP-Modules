#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		AMateria			*(_inventory[4]);
		std::string	const	_name;

	public:
		Character();
		Character(const Character&);
		~Character();
		Character(std::string name);

		Character& operator=(const Character& rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif