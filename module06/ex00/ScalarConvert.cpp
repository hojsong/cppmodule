#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(void){
    std::stringstream ss;
    this->value = "default"
    ss << this->value;
    ss >> this->i;
    ss >> this->f;
    ss >> this->c;
    ss >> this->d;
}

ScalarConvert::ScalarConvert(std::string value){
    std::stringstream ss;
    this->value = value;
    ss << this->value;
    ss >> this->i;
    ss >> this->f;
    ss >> this->c;
    ss >> this->d;
}

std::string	ScalarConvert::getValue(void) const {
    return (this->value);
}

void	ScalarConvert::setValue(std::string val){
    std::stringstream ss;
    this->value = val;
    ss << this->value;
    ss >> this->i;
    ss >> this->f;
    ss >> this->c;
    ss >> this->d;
}

ScalarConvert::ScalarConvert(const ScalarConvert& obj){
    if (this != &obj)
        this = &obj;
}

ScalarConvert& ScalarConvert::operator=(const ScalarConvert& obj){
    if (this->value == obj.value)
        return (*this);
    this->setValue(obj.getValue());
    return (*this);
}

int			ScalarConvert::getInt(void) const{
    return (this->i);
}

float		ScalarConvert::getFloat(void) const{
    return (this->f);
}

char		ScalarConvert::getChar(void) const{
    if (c > 31 && c < 127)
        return (this->c);
    else
        throw ScalarConvert::CannotPrintChar();
}

double	  	ScalarConvert::getDouble(void) const{
    return (this->d);
}

ScalarConvert::~ScalarConvert(){

}

ScalarConvert::CannotPrintChar::CannotPrintChar(){
    std::cout << "Non Displayable" << std::
}

ScalarConvert::ConvertFail::ConvertFail(){
    std::cout << "Non impossible" << std::
}