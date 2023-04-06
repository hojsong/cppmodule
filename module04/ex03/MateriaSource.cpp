#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
    stack = 0;
}

MateriaSource::~MateriaSource(void){

}
void MateriaSource::learnMateria(AMateria* m){
    if (stack < 4)
    {
        this->am[this->stack] = m;
        stack++;
    }
    else
        std::cout << "AMateria Stack is Full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    int i;

    for(i=0; i<stack; i++){
        if (am[i]->getType() == type)
            break;
    }
    if (i == stack)
        return (0);
    return (am[i]);
}