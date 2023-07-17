#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Default Constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(std::string type) {
	std::cout << "WrongCat Constructor called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}