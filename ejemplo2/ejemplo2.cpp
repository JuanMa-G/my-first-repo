#include <iostream>

int main(){
    int a = 42;
    double b = 3.14;
    char c = 'A';

    std::cout<<"Size of int: \t"<< sizeof(a) << std::endl;
    std::cout<<"Size of double: \t"<< sizeof(b) << std::endl;
    std::cout<<"Size of char: \t"<< sizeof(c) << std::endl;
    std::cout<<"Address of int: \t"<< &a << " bytes " << std::endl;
    std::cout<<"Address of double: \t"<< &b << " bytes " << std::endl;
    std::cout<<"Address of char: \t"<< c << " bytes " << std::endl;

    int h = 2;
    h += 8; // h = h+8
    h *= 2; // h = h*2

    std::cout<<"'h' value: \t"<< h << std::endl;

    return 0;
}