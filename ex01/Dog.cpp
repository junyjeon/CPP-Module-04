#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor called" << std::endl;
	brain = new Brain();
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
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Wof Wof!" << std::endl;
}

std::string Dog::getType() const {
	return type;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}
