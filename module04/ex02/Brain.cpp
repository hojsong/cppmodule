#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain default Constructor called" << std::endl;
	for(int i=0; i<100; i++) {
		this->ideas[i] = "Brain";
	}
}

Brain::~Brain(void){
	std::cout << "Brain DeConstructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &obj){
	std::cout << "Brain Assignation operator called" << std::endl;
	Brain *a = new Brain();
	for(int i=0; i<100; i++) {
		a->ideas[i] = obj.ideas[i];
	}
	return *a;
}

void Brain::setter(std::string str, int idx){
	std::cout << "Brain Setter function called" << std::endl;
	for(int i=0; i< idx; i++) {
		this->ideas[i] = str;
	}
}

std::string Brain::getter(void){
	std::string result;

	result = this->ideas[0];
	return (result);
}