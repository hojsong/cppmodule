#include "Templ.hpp"

class A{
    public:
        int a;
        char *cstr;
};

int main( void ) {
    int a = 2;
    int b = 3;

    A x;
    A y;
    char str[4] = "aaa";
    char str2[4] = "bbb";

    x.a = 10;
    x.cstr = str;
    y.a = 20;
    y.cstr = str2;

    swap(x,y);
    std::cout << "x int befor 10 after : " << x.a << std::endl;
    std::cout << "x char befor aaa after : " << x.cstr << std::endl;
    std::cout << "y int befor 20 after : " << y.a << std::endl;
    std::cout << "y char befor bbb after : " << y.cstr << std::endl;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    system("leaks ExamTamplate");
    return 0;
}