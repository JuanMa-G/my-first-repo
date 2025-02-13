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

    return 0;
}