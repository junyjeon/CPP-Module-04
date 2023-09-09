#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; i++)
		delete slot[i];
    for (int i = 0; i < 4; i++) {
        if (other.slot[i])
			slot[i] = other.slot[i]->clone();
        else
            slot[i] = NULL;
    }
	return *this;
}

MateriaSource::~MateriaSource() {
	 for (int i = 0; i < 4; i++) {
        if (slot[i]) {
            delete slot[i];
            slot[i] = NULL;
        }
    }
}

void	MateriaSource::learnMateria(AMateria* other) {
	for (int i = 0; i < 4; i++)	{
		if (!slot[i]) {
			slot[i] = other->clone();
			break;
		}
	}
	delete other;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
		if (slot[i] && slot[i]->getType() == type)
			return slot[i]->clone();
	return NULL;
}
