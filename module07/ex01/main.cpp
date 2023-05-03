#include "Templ.hpp"

int main( void ) {
    int a[10];
    std::string str[10];
    
    for (int i = 0; i < 10; i++){
        a[i] = i;
    }
    str[0] = "Hello";
    str[1] = "My";
    str[2] = "Name";
    str[3] = "is";
    str[4] = "First Name: ";
    str[5] = "Ho";
    str[6] = "Jo";
    str[7] = "Last Name";
    str[8] = "Song";
    str[9] = ".";

    ::iter(a, 10, print_fl);
    ::iter(a, 10, print_f);
    std::cout << std::endl;
    ::iter(str, 10, print_fl);
    ::iter(str, 10, print_f);
    std::cout << std::endl;
    return 0;
}