#ifndef A_HPP
# define A_HPP

#include <iostream>
#include "Base.hpp"

class Base;

class A: public Base {

private:
	std::string _type;

public:
	A();
	~A();
};

#endif