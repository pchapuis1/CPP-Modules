#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

typedef struct{
	int nb;
	std::string txt;
} Data;

class Serializer {

private:
	Serializer();
	Serializer(const Serializer&);
	~Serializer();

	Serializer& operator=(const Serializer& rhs);

public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	
};

#endif