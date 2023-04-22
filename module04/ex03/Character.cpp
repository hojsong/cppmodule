#include "Character.hpp"

Character::Character(void){

    std::cout << "C constructor create" << std::endl;
    this->name = "default";
}

Character::Character(std::string name){

    std::cout << "C constructor create" << std::endl;
    this->name = name;
}

Character::Character(const Character &obj){
    *this = obj;
}
Character& Character::operator=(const Character& obj){
    if(this->name != obj.name)
        this->name = obj.name;
    for (int i = 0; i<4; i++){
        if (this->me[i] != obj.me[i])
            this->me[i] = obj.me[i];
    }
    return (*this);
}

Character::~Character(){
    std::cout << "C destructor" << std::endl;
    for (int i=0; i<4; i++){
        if (this->me[i] != NULL)
            delete me[i];
    }
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
    else{
        me[i] = m->clone();
    }
}

void Character::unequip(int idx){
    if (idx > 3 || idx < 0)
        std::cout << "Materia Num 0 ~ 3" << std::endl;
    else if (me[idx]){
        std::cout << this->name << " : unequip" << std::endl;
        delete me[idx];
        me[idx] = NULL;
    }
    else
        std::cout << "No Charge Materia" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (me[idx] == NULL)
        std::cout << "No Charge Materia" << std::endl;
    else {
        me[idx]->use(target);
        delete me[idx];
        me[idx] = NULL;
    }
}

void Character::ChargeReArrange(int idx){
    for (int i = idx; i < 3; i++){
        if (me[i + 1])
            me[i] = me[i + 1];
    }
}