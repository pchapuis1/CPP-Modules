#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter&){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){
	if (this != &rhs) {}
	return *this;
}

int	isDigit(char c){
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int	isChar(std::string str){
	if (str[0] == '\'' && str[2] == '\'' && str.length() == 3)
		return 1;
	return 0;
}

int	isInt(std::string str){
	if (!isDigit(str[0]) && str[0] != '-' && str[0] != '+')
		return 0;
	if ((str[0] == '+' || str[0] == '-') && str.length() == 1)
		return 0;
	for (unsigned int i = 0; i < str.length(); i ++){
		if (i == 0 && (str[0] == '+' || str[0] == '-'))
			continue;
		if (!isDigit(str[i]))
			return 0;
	}
	return 1;
}

int	isFloat(std::string str){
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return 1;
	if (!isDigit(str[0]) && str[0] != '-' && str[0] != '+')
		return 0;
	if ((str[0] == '+' || str[0] == '-') && str.length() == 1)
		return 0;
	int	nbPoint = 0;
	for (unsigned int i = 0; i < str.length(); i ++){
		if (i == 0 && (str[0] == '+' || str[0] == '-'))
			continue;
		if (!isDigit(str[i])){
			if (i == str.length() - 1){
				if (str[i] != 'f')
					return 0;
				return 1;
			}
			else if (str[i] == '.'){
				if (!nbPoint)
					nbPoint ++;
				else
					return 0;
			}
			else
				return 0;
		}
	}
	return 1;
}

int	isDouble(std::string str){
	if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return 1;
	if (!isDigit(str[0]) && str[0] != '-' && str[0] != '+')
		return 0;
	if ((str[0] == '+' || str[0] == '-') && str.length() == 1)
		return 0;
	int	nbPoint = 0;
	for (unsigned int i = 0; i < str.length(); i ++){
		if (i == 0 && (str[0] == '+' || str[0] == '-'))
			continue;
		if (!isDigit(str[i])){
			if (str[i] == '.'){
				if (!nbPoint)
					nbPoint ++;
				else
					return 0;
			}
			else
				return 0;
		}
	}
	return 1;
}

int	whichType(std::string str){
	if (isChar(str)){
		return 0;
	}
	if (isInt(str)){
		return 1;
	}
	if (isFloat(str))
		return 2;
	if (isDouble(str))
		return 3;
	return 4;
}

void	fromChar(std::string str){
	char c = str[1];

	if (c < 32 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c);
	if (std::floor(static_cast<float>(c)) == static_cast<float>(c))
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c);
	if (std::floor(static_cast<double>(c)) == static_cast<double>(c))
		std::cout << ".0";
	std::cout << std::endl;
}

void	fromInt(std::string str){
	double myInt = std::atof(str.c_str());
	
	if (myInt < 32 || myInt > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(myInt) << "'" << std::endl;
	if (myInt < -2147483648 || myInt > 2147483647)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(myInt) << std::endl;
	std::cout << "float: " << static_cast<float>(myInt);
	if (static_cast<float>(myInt) < 1000000){
		if (std::floor(static_cast<float>(myInt)) == static_cast<float>(myInt))
			std::cout << ".0";
		std::cout << "f";
	}
	std::cout << std::endl;
	std::cout << "double: " << static_cast<double>(myInt);
	if (static_cast<float>(myInt) < 1000000){
		if (std::floor(static_cast<double>(myInt)) == static_cast<double>(myInt))
			std::cout << ".0";
	}
	std::cout << std::endl;
}

void	fromFloat(std::string str){
	double myFloat = std::atof(str.c_str());

	if (!str.compare("nanf")){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(myFloat) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(myFloat) << std::endl;
		return;
	}
	if (myFloat < 32 || myFloat > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(myFloat) << "'" << std::endl;
	if (myFloat < -2147483648 || myFloat > 2147483647)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(myFloat) << std::endl;
	if (!str.compare("-inff") || !str.compare("+inff")){
		std::cout << "float: " << static_cast<float>(myFloat) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(myFloat) << std::endl;
		return;
	}
	std::cout << "float: " << static_cast<float>(myFloat);
	if (static_cast<float>(myFloat) < 1000000){
		if (std::floor(static_cast<float>(myFloat)) == static_cast<float>(myFloat))
			std::cout << ".0";
		std::cout << "f";
	}
	std::cout << std::endl;
	std::cout << "double: " << static_cast<double>(myFloat);
	if (static_cast<float>(myFloat) < 1000000){
		if (std::floor(static_cast<double>(myFloat)) == static_cast<double>(myFloat))
			std::cout << ".0";
	}
	std::cout << std::endl;
}

void	fromDouble(std::string str){
	double myDouble = std::atof(str.c_str());

	if (!str.compare("nan")){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(myDouble) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(myDouble) << std::endl;
		return;
	}
	if (myDouble < 32 || myDouble > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(myDouble) << "'" << std::endl;
	if (myDouble < -2147483648 || myDouble > 2147483647)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(myDouble) << std::endl;
	if (!str.compare("-inf") || !str.compare("+inf")){
		std::cout << "float: " << static_cast<float>(myDouble) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(myDouble) << std::endl;
		return;
	}
	std::cout << "float: " << static_cast<float>(myDouble);
	if (static_cast<float>(myDouble) < 1000000){
		if (std::floor(static_cast<float>(myDouble)) == static_cast<float>(myDouble))
			std::cout << ".0";
		std::cout << "f";
	}
	std::cout << std::endl;
	std::cout << "double: " << static_cast<double>(myDouble);
	if (static_cast<float>(myDouble) < 1000000){
		if (std::floor(static_cast<double>(myDouble)) == static_cast<double>(myDouble))
			std::cout << ".0";
	}
	std::cout << std::endl;
}

void ScalarConverter::convert(std::string str){
	int	i = whichType(str);
	converter functions[4] = {&fromChar, &fromInt, &fromFloat, &fromDouble};
	if (i == 4){
		std::cout << "Error" << std::endl;
		return;
	}
	functions[i](str);
}
