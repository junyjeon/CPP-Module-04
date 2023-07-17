#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *arr[4];

	for (int i = 0; i < 2; i++)
		arr[i] = new Dog();
	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		arr[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete arr[i];
	std::cout << std::endl;

	Dog a;
	Dog b(a);
	std::cout << std::endl;

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << std::endl;
	system("leaks Animal");
	return 0;
}