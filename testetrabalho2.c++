#include <iostream>
#include <cctype>

bool verificar_letra_no_alfabeto(char letra) {
    return std::isalpha(letra); // verifica se a letra digitada pelo usuario é uma letra do alfabeto
}

int main() {
    char letra;
    std::cout << "Digite uma letra: "; 
    std::cin >> letra;

    if (verificar_letra_no_alfabeto(letra)) {
        std::cout << "A letra existe no alfabeto." << std::endl;
    } else {
        std::cout << "A letra não existe no alfabeto." << std::endl;
    }

    return 0;
}
