#include "Serializer.hpp"

Serializer::Serializer(){}
Serializer::Serializer(const Serializer&){}
Serializer::~Serializer(){}
Serializer& Serializer::operator=(const Serializer& rhs){
	if (this != &rhs) {}
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr){
	uintptr_t tmp = reinterpret_cast<uintptr_t>(ptr);
	return (tmp);
}

Data* Serializer::deserialize(uintptr_t raw){
	Data* tmp = reinterpret_cast<Data*>(raw);
	return (tmp);
}