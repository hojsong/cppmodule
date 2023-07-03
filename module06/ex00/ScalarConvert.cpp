#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(){}
ScalarConvert::~ScalarConvert(){}
ScalarConvert::ScalarConvert(ScalarConvert const &obj){(void)obj;}
ScalarConvert& ScalarConvert::operator= (ScalarConvert const& obj){
    (void)obj;
    return *this;
}
void    ScalarConvert::printInt(std::string str){
    std::stringstream ss;
    int c;
    const char *restr = str.c_str();
    std::cout << "int: ";

    if (str.length() == 1){
        if (restr[0] < '0' || restr[0] > '9')
            c = static_cast<int>(restr[0]);
        else
            c = std::atoi(restr);
        std::cout << c;
    }
    else {
        ss << str;
        ss >> c;
        if (ss.fail()){
            ss.clear();
            std::cout << "impossible" << std::endl;
            return ;
        }
        ss.clear();
        std::cout << c ;
    }
    std::cout << std::endl;
}

void    ScalarConvert::printFloat(std::string str){
    std::string temp = str;
    const char *restr = str.c_str();
    float f;
    int   i;
    
    if (restr[0] == '-' || restr[0] == '+'){
        if (temp.length() > 4 && temp[temp.length() - 1] == 'f')
            temp = temp.substr(0, temp.length() - 1);
    }
    else {
        if (temp.length() > 3 && temp[temp.length() - 1] == 'f')
            temp = temp.substr(0, temp.length() - 1);
    }

    std::stringstream ss;
    ss << temp;
    ss >> f;

    std::cout << "float: ";
    if (str.length() == 1){
        if (restr[0] < '0' || restr[0] > '9')
            i = static_cast<int>(restr[0]);
        else
            i = std::atoi(restr);
        f = static_cast<float>(i);
        std::cout << f;
    }
    else {
        if (ss.fail()){
            ss.clear();
            std::cout << "impossible" << std::endl;
            return ;
        }
        else {
            ss.clear();
            if (restr[0] == '-')
                std::cout << '-';
            if (f < 0)
                f *= -1;
            std::cout << f;
        }
    }
    if (f <= 999999){
        i = static_cast<int>(f);
        if (f - static_cast<float>(i) == 0)
            std::cout << ".0";
    }
    std::cout << "f" << std::endl;
}

void    ScalarConvert::printChar(std::string str){
    std::stringstream ss;
    int c;
    const char *restr = str.c_str();
    std::cout << "char: ";

    if (str.length() == 1){
        if (restr[0] < '0' || restr[0] > '9')
            c = static_cast<int>(restr[0]);
        else
            c = std::atoi(restr);
        if (c > 31 && c < 127)
            std::cout << "'" << static_cast<char>(c) << "'";
        else
            std::cout << "Non display";
    }
    else {
        ss << str;
        ss >> c;
        if (ss.fail()){
            ss.clear();
            std::cout << "impossible" << std::endl;
            return ;
        }
        ss.clear();
        if (c > 31 && c < 127)
            std::cout << "'" << static_cast<char>(c) << "'";
        else if (c >= 0 && c <= 127)
            std::cout << "Non display";
        else
            std::cout << "impossible";
    }
    std::cout << std::endl;
}

void    ScalarConvert::printDouble(std::string str){
    std::string temp = str;
    double d;
    const char *restr = str.c_str();
    int i;
    if (restr[0] == '-' || restr[0] == '+'){
        if (temp.length() > 4 && temp[temp.length() - 1] == 'f')
            temp = temp.substr(0, temp.length() - 1);
    }
    else {
        if (temp.length() > 3 && temp[temp.length() - 1] == 'f')
            temp = temp.substr(0, temp.length() - 1);
    }
    std::stringstream ss;
    ss << temp;
    ss >> d;

    std::cout << "double: ";
    if (str.length() == 1){
        if (restr[0] < '0' || restr[0] > '9')
            i = static_cast<int>(restr[0]);
        else
            i = std::atoi(restr);
        d = static_cast<double>(i);
        std::cout << d;
    }
    else {
        if (ss.fail()){
            ss.clear();
            std::cout << "impossible" << std::endl;
            return ;
        }
        else {
            ss.clear();
            if (restr[0] == '-')
                std::cout << '-';
            if (d < 0)
                d *= -1;
            std::cout << d;
        }
    }
    if (d <= 99999){
        i = static_cast<int>(d);
        if (d - static_cast<double>(i) == 0)
            std::cout << ".0";
    }
    std::cout << std::endl;
}

void		ScalarConvert::convert(std::string str){
    printChar(str);
    printInt(str);
    printFloat(str);
    printDouble(str);
}
