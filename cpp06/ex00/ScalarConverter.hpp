#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <sstream>

class ScalarConverter {

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter&);
	~ScalarConverter();

	ScalarConverter& operator=(const ScalarConverter& f);

public:
	static void convert(std::string str);
};

typedef void (*converter)(std::string str);

#endif