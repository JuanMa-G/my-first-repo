#include <iostream>

int main(){
    int x, y;
    int aux;
    float height = 1.6;
    double pi = 3.1415;
    char character = 'c';
    bool isStudent = true;

    printf("Ingresa los datos: ");

    std::cin >> x >> y;
    aux = x;
    x = y;
    y = aux;
    std::cout << x << y;

    /*
    Printing basic variables
    */

    std::cout<<"height:\t"<< height << std::endl;
    std::cout<<"pi:\t"<< pi << std::endl;
    std::cout<<"character:\t"<< character << std::endl;
    //std::cout<<"character:\t"<< character << std::endl;
    std::cout<<"Is student:\t"<< isStudent << "\n";

    return 0;
}