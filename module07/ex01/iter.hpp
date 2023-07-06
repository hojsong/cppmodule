#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void print_fl(const T &str){
    std::cout << str << std::endl;
}

template <typename T>
void print_fl(T &str){
    std::cout << str << std::endl;
}

template <typename T>
void print_f(const T &str){
    std::cout << str << " ";
}

template <typename T>
void print_f(T &str){
    std::cout << str << " ";
}

template <typename T>
void iter(T *x, int len, void (*fn)(T&)){
    for (int i = 0; i < len; i++)
        fn(x[i]);
}

template <typename T>
void iter(const T *x, int len, void (*fn)(const T&)){
    for (int i = 0; i < len; i++)
        fn(x[i]);
}

#endif