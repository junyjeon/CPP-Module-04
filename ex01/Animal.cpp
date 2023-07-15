#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const{}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}