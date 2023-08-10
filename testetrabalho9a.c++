#include <iostream>
#include <cstdlib>
#include <ctime>

char gerarLetraAleatoria() {
    char letra = 'A' + rand() % 26;
    return letra;
}

int main() {
    srand(time(0));

    const int totalLetras = 10;

    std::cout << "Gerando " << totalLetras << " letras aleatórias:\n";
    
    for (int i = 0; i < totalLetras; i++) {
        char letraGerada = gerarLetraAleatoria();
        std::cout << "Letra " << i + 1 << ": " << letraGerada << std::endl;
    }

    return 0;
}
