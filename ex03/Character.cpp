#include "Character.hpp"

Character::Character(){
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const Character &other) {
	*this = other;
}

Character &Character::operator=(const Character &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; i++)
		delete slot[i];
	name = other.getName();
    for (int i = 0; i < 4; i++) {
        if (other.slot[i])
            slot[i] = other.slot[i]->clone();
        else
            slot[i] = NULL;
    }
	return *this;
}

Character::~Character() {
	 for (int i = 0; i < 4; i++) {
        if (slot[i] != NULL) {
            delete slot[i];
            slot[i] = NULL;
        }
    }
}

Character::Character(const std::string name) {
	this->name = name;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)	{
		if (!slot[i]) {
			slot[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	delete slot[idx];
}

void Character::use(int idx, ICharacter& target) {
	if (slot[idx])
		slot[idx]->use(target);
}
