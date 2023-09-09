#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *arr[4];

	std::cout << "-----------------------------------" << std::endl;
	arr[0] = new Dog();
	arr[1] = new Dog();
	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;
	arr[2] = new Cat();
	arr[3] = new Cat();
	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;
	delete arr[0];
	delete arr[1];
	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;
	delete arr[2];
	delete arr[3];
	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;
	Dog a;
	Dog b(a);
	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << std::endl;
	
	std::cout << "-----------------------------------" << std::endl;
	return 0;
}