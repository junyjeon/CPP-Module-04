#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string name;
	AMateria	*slot[4];
public:
	Character();
	Character(const Character &);
	Character &operator=(const Character &);
	virtual ~Character();
	
	Character(const std::string name);
	
	virtual std::string const & getName() const;
	
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
