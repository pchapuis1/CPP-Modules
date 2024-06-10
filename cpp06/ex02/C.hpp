#ifndef C_HPP
# define C_HPP

#include <iostream>
#include "Base.hpp"

class Base;

class C: public Base {

private:
	std::string _type;

public:
	C();
	~C();
};

#endif