#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria::AMateria(const AMateria &other) {
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	static_cast<void>(target);
}
