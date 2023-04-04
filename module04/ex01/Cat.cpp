#include "Cat.hpp"

Cat::Cat(void){
    std::cout << "Cat Default Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &obj){
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = obj;
}

Cat::Cat(Brain const &brain) {
	*this->br = brain;
}

Cat& Cat::operator=(const Cat &obj){
	std::cout << "Cat Assignation operator calleßßßßßd" << std::endl;
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat Constructor Destroy called" << std::endl;
}

void Cat::makeSound(void) const{
    std::cout << "Ya Ong Ya Ong" << std::endl;
}

void Cat::setter(std::string str, int idx){
	std::cout << "Cat Setter function called" << std::endl;
	for(int i=0; i< idx; i++) {
		br[i] = str;
	}
}
std::string Cat::getter(void){
    return (br->getter());
}
