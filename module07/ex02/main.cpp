#include <iostream>
#include "Array.hpp"
#include "Array.tpp"

class Aclass{
    public:
        unsigned int a;
        char c;
};

void f(){
    system("leaks ExamTamplate");
}

int main()
{
    int max_val = 750;
    atexit(f);
    Array<int> numbers(max_val);
    Array<Aclass> Ac(max_val);
    int* mirror = new int[max_val];
    srand(time(NULL));
    for (int i = 0; i < max_val; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        Ac[i].a = i * i;
        Ac[i].c = Ac[i].a % 128;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    Array<Aclass> Bc = Ac;
    Array<Aclass> Cc(Bc);

    for (int i = 0; i < max_val; i++)
    {
        if (Ac[i].a != Bc[i].a || Ac[i].a != Cc[i].a || Bc[i].a != Cc[i].a)
        {
            std::cerr << i + 1 << " : " << Ac[i].a << ", " << Bc[i].a << ", " << Cc[i].a << std::endl;
            std::cerr << "didn't save the same value!!" << std::endl;
            delete [] mirror;
            return 1;
        }
        if (Ac[i].a != (unsigned int)i * (unsigned int)i){
            std::cerr << "didn't save the same value!!" << std::endl;
            delete [] mirror;
            return 1;
        }
    }
    try
    {
        std::cout << "before: " << Ac[100].a;
        Ac[100].a = 0;
        std::cout << " , after: " << Ac[100].a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < max_val; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            delete [] mirror;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[max_val] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < max_val; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}