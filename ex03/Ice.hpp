#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice &);
	Ice &operator=(const Ice &);
	virtual ~Ice();
	
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};

#endif
