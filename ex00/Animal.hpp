#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &);
	Animal &operator=(const Animal &);
	virtual ~Animal(void);
	virtual void makeSound() const;
	std::string getType() const;
};

void Animal::makeSound() const {}

class Dog : public Animal {
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();
	void makeSound() const;
};

Dog::Dog() {}

Dog::~Dog() {}

Dog::Dog(std::string type) {
	this->type = type;
}

Dog::Dog(const Dog &other) {
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Wof Wof!" << std::endl;
}



class Cat : public Animal {
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();
	void makeSound() const;
};

Cat::Cat() {}

Cat::~Cat() {}

Cat::Cat(const Cat &other) {
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	if (this == &other)
		return *this;
	type = other.getType();
	return *this;
}

Cat::Cat(std::string type) {
	this->type = type;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}


#endif
