#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(void){
    this->value = "default";
}

ScalarConvert::ScalarConvert(std::string value){
    this->setValue(value);
}

std::string	ScalarConvert::getValue(void) const {
    return (this->value);
}

void	ScalarConvert::setValue(std::string val){
    this->value = val;
}

ScalarConvert::ScalarConvert(const ScalarConvert& obj){
    if (this != &obj)
        this->setValue(obj.getValue());
}

ScalarConvert& ScalarConvert::operator=(const ScalarConvert& obj){
    if (this->value == obj.value)
        return (*this);
    this->setValue(obj.getValue());
    return (*this);
}

void	ScalarConvert::getInt(void){
    std::stringstream ss;
    ss << this->value;
    ss >> this->i;
    std::cout << "int: ";
    if (ss.fail()){
        ss.clear();
        throw ScalarConvert::ConvertFail();
    }
    else {
        ss.clear();
        std::cout << this->i << std::endl;
    }
}

void	ScalarConvert::getFloat(void){
    std::string temp = this->value;
    if (temp.length() > 3 && temp[temp.length() - 1] == 'f' && temp[temp.length() - 2] != 'f')
        temp = temp.substr(0, temp.length() - 1);

    std::stringstream ss;
    ss << temp;
    ss >> this->f;

    std::cout << "float: ";
    if (ss.fail()){
        ss.clear();
        throw ScalarConvert::ConvertFail();
    }
    else {
        ss.clear();
        std::cout << this->f;
        if (f - static_cast<float>(i) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
}

void	ScalarConvert::getChar(void){
    std::stringstream ss;
    ss << this->value;
    ss >> this->c;
    std::cout << "char: ";
    if (ss.fail()){
        ss.clear();
        throw ScalarConvert::ConvertFail();
    }
    ss.clear();
    if (c > 31 && c < 127)
       std::cout << "'" << static_cast<char>(this->c) << "'" << std::endl;
    else
        throw ScalarConvert::CannotPrintChar();
}

void  	ScalarConvert::getDouble(void){
    std::string temp = this->value;
    if (temp.length() > 3 && temp[temp.length() - 1] == 'f' && temp[temp.length() - 2] != 'f')
        temp = temp.substr(0, temp.length() - 1);

    std::stringstream ss;
    ss << temp;
    ss >> this->d;

    std::cout << "double: ";
    if (ss.fail()){
        ss.clear();
        throw ScalarConvert::ConvertFail();
    }
    else {
        ss.clear();
        std::cout << this->d;
        if (d - static_cast<double>(i) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
}

void		ScalarConvert::convert(std::string str){
    setValue(str);
    try{
        getChar();
    }
    catch (const std::exception &e){}
    try{
        getInt();
    }
    catch (const std::exception &e){}
    try{
        getFloat();
    }
    catch (const std::exception &e){}
    try{
        getDouble();
    }
    catch (const std::exception &e){}
}

ScalarConvert::~ScalarConvert(){

}

ScalarConvert::CannotPrintChar::CannotPrintChar(){
    std::cout << "Non Displayable" << std::endl;
}

ScalarConvert::ConvertFail::ConvertFail(){
    std::cout << "impossible" << std::endl;
}