#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &);
	Cure &operator=(const Cure &);
	virtual ~Cure();
	
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};

#endif
