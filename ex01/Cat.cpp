#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(std::string type) {
	std::cout << "Cat Constructor called" << std::endl;
	this->type = type;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

std::string Cat::getType() const {
	return type;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}