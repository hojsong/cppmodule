#ifndef TEMPL_HPP
#define TEMPL_HPP

#include <iostream>
#include <string>

template <typename T>
void print_fl(T &str){
    std::cout << *str << std::endl;
}

template <typename T>
void print_f(T &str){
    std::cout << *str << " ";
}

template <typename T>
void iter(T &x, int len, void (*fn)(T&)){
    for (int i = 0; i < len; i++)
        fn(x[i]);
}

#endif