#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(std::string type) {
	std::cout << "Dog Constructor called" << std::endl;
	this->type = type;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		type = other.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Wof Wof!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}
