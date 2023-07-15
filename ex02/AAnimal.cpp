#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

std::string AAnimal::getType() const {
	return type;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
}