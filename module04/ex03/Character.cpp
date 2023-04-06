#include "Character.hpp"

Character::Character(void){
    this->name = "default";
}

Character::Character(std::string name){
    this->name = name;
}

Character::~Character(){

}

std::string const & Character::getName() const {
    return (this->name);
}

void Character::equip(AMateria* m){
    int i;

    if (m == NULL)
    {
        std::cout << "Materia is Empty" << std::endl;
        return ;
    }
    for (i=0; i<4; i++){
        if (me[i] == NULL)
            break;
    }
    if (i == 4)
        std::cout << "Full Charging Materia" << std::endl;
    else
        me[i] = m;
}

void Character::unequip(int idx){
    if (idx > 3 || idx < 0)
        std::cout << "Materia Num 0 ~ 3" << std::endl;
    else if (me[idx]){
        me[idx] = NULL;
        ChargeReArrange(idx);
    }
    else
        std::cout << "No Charge Materia" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (me[idx] == NULL)
        std::cout << "No Charge Materia" << std::endl;
    else {
        me[idx]->use(target);
        me[idx] = NULL;
        ChargeReArrange(idx);
    }
}

void Character::ChargeReArrange(int idx){
    for (int i = idx; i < 3; i++){
        if (me[i + 1])
            me[i] = me[i + 1];
    }
}