#include <iostream>

int main() {
    int numero;

    // Solicitar ao usuário que digite um número
    std::cout << "Digite um número: ";
    std::cin >> numero;

    // Verificar se o número é positivo, negativo ou zero
    if (numero > 0) {
        std::cout << "O número " << numero << " é positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "O número " << numero << " é negativo." << std::endl;
    } else {
        std::cout << "O número é zero." << std::endl;
    }

    return 0;
}
