#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
 	const Animal* j = new Dog();
 	const Animal* i = new Cat();
 	delete j;//should not create a leak
 	delete i;
  
 	Animal	*a[4];

	for(int i=0; i<4; i++) {
		if (i < 2) {
			a[i] = new Cat();
		}
		else {
			a[i] = new Dog();
		}
	}
	for(int i=0; i<4; i++) {
		a[i]->makeSound();
	}
	
	for(int i=0; i<4; i++) {
		delete a[i];
	}
	
	Brain brain;
	Cat cat(brain);
	Dog dog(brain);

	brain.setter("brain", 100);
	cat.setter("cat", 100);
	dog.setter("dog", 100);

	std::cout << brain.getter() << std::endl;
	std::cout << cat.getter() << std::endl;
	std::cout << dog.getter() << std::endl;
    
    system("leaks Animal");
	return 0;
}
