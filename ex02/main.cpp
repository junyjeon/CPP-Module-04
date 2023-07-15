#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *arr[4];

	for (int i = 0; i < 2; i++)
		arr[i] = new Dog();
	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		arr[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete arr[i];

	// const AAnimal* j = new Dog();
	// const AAnimal* i = new Cat();

	// delete j;//should not create a leak	
	// delete i;

	return 0;
}