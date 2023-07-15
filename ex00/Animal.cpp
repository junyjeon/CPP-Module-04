#include "Animal.hpp"

Animal::Animal() {
}

Animal::~Animal() {
}

Animal::Animal(const Animal &other) {
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
