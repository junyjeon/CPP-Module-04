#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure &other) {
	*this = other;
}

Cure &Cure::operator=(const Cure &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

Cure::~Cure() {}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const {
	return new Cure(*this);
}
