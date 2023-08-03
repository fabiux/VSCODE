#include <iostream>

 int main () {
    int numero = 10;

    if (numero > 0) {
        std::cout << "O numero é positivo." << std::endl;
    } else {
        std::cout << "O numero é negativo." << std::endl;
    }

    int contador = 0;
    while (contador < 5) {
        std::cout << " contador:" << contador << std:: endl;
        contador++;
    }

    for (int i = 0; i < 5; i++) {
        std::cout <<"Iteração do loop for:" << i << std::endl;
    }
    return 0;
 }