#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
    stack = 0;
}

MateriaSource::MateriaSource(const MateriaSource &obj){
    *this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj){
    for (int i = 0; i<4; i++){
        if (this->am[i] != obj.am[i])
            this->am[i] = obj.am[i];
    }
    this->stack = obj.stack;
    return (*this);
}

MateriaSource::~MateriaSource(void){
    std::cout << "MS destructor" << std::endl;
    for (int i=0; i<4; i++){
        if (am[i])
            delete am[i];
    }
}

void MateriaSource::learnMateria(AMateria* m){
    if (stack < 4)
    {
        this->am[this->stack] = m->clone();
        delete m;
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