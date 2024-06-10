#ifndef B_HPP
# define B_HPP

#include <iostream>
#include "Base.hpp"

class Base;

class B: public Base {

private:
	std::string _type;

public:
	B();
	~B();
};

#endif