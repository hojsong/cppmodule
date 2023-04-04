#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* w = new WrongAnimal();
    const WrongAnimal* z = new WrongCat();
    std::cout << w->getType() << " " << std::endl;
    std::cout << z->getType() << " " << std::endl;

	delete meta;
	delete j;
	delete i;
    delete w;
    delete z;

    system("leaks Animal");
    return 0;
}