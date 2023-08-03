#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string palavra;

    // Solicitar ao usuário que digite uma palavra
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    // Criar uma cópia da palavra
    std::string palavraInvertida = palavra;

    // Inverter a cópia da palavra
    std::reverse(palavraInvertida.begin(), palavraInvertida.end());

    // Verificar se a palavra invertida é igual à palavra original
    if (palavra == palavraInvertida) {
        std::cout << "A palavra \"" << palavra << "\" é um palíndromo." << std::endl;
    } else {
        std::cout << "A palavra \"" << palavra << "\" não é um palíndromo." << std::endl;
    }

    return 0;
}
