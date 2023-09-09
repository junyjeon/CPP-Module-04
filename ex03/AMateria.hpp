#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string type;
public:
	AMateria(std::string const & type);

	AMateria();
	AMateria(const AMateria &);
	AMateria &operator=(const AMateria &);
	virtual ~AMateria();
	
	std::string const & getType() const;
	
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const = 0;
};


#endif

/**
 * 추상 클래스는 구현이 있을 수 있다.
 * 멤버변수, 구현된 메서드가 포함될 수 있다.
 * 상속받는 클래스는 추상 메소드를 구현하지 않아도 된다.
 * 다중 상속이 안된다.
 */

/**
 * 인터페이스는 구현이 있을 수 없음.
 * 상속받는 클래스는 인터페이스의 모든 메소드(클래스 내 함수)를 구현해야 한다.
 * 다중 상속이 된다.
*/


/**
 * virtual은 오버라이드.
 * virtural로 선언된 함수는 = 0을 사용하여 순수 가상 함수로 만들 수 있다.
 * 순수 가상 함수는 기본 클래스에서 구현되지 않고, 파생 클래스에서 반드시 구현 되어야해.
 * 순수 가상 함수가 있는 클래스는 추상 클래스이고, 직접 인스턴스화 할 수 없다.
 */

/**
 * 재료라는 추상 클래스를 만들어서
 * Ice, Cure의 마법에 재료를 상속받고?
 * 캐릭터에게 Ice를 먹일지 Cure할지 정하는 과젠가?
 * 캐릭터는 순수 추상 클래스다.
 * class IMateriaSource{LearnMateria, createMateria}
 */


/**
 * protected는 파생 클래스 내에서도 접근 가능
 */
