#include <iostream>
#include <cstdlib>
#include <ctime>

char gerarLetraAleatoria() {
    char letra = 'A' + rand() % 26;
    return letra;
}

int main() {
    srand(time(0));

    std::cout << "Gerando 10 letras aleatórias:\n";

    for (int i = 0; i < 10; i++) {
        char letra = gerarLetraAleatoria();
        std::cout << "Letra " << i + 1 << ": " << letra << std::endl;
    }

    return 0;
}
