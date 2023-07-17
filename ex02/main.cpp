#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *arr[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			arr[i] = new Dog();
		if (2 <= i)
			arr[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete arr[i];

	std::cout << std::endl;
	system("leaks Animal");
	return 0;
}