#include <iostream>
#include <cstdlib>
#include <ctime>

char gerarLetraAleatoria() {
    char letra = 'A' + rand() % 26;
    return letra;
}

int main() {
    srand(time(0));

    int totalLetras;
    std::cout << "Bem-vindo ao desafio de adivinhar letras!\n";
    std::cout << "Quantas letras você deseja sortear? ";
    std::cin >> totalLetras;

    int acertos = 0;
    int erros = 0;

    for (int i = 0; i < totalLetras; i++) {
        char letraSorteada = gerarLetraAleatoria();
        int tentativas = 0;

        std::cout << "\nDesafio " << i + 1 << ": Tente adivinhar a letra sorteada (A a Z).\n";

        while (tentativas < 3) {
            char letraChutada;
            std::cout << "Tentativa " << tentativas + 1 << ": Digite uma letra: ";
            std::cin >> letraChutada;

            if (letraChutada == letraSorteada) {
                std::cout << "Parabéns! Você acertou a letra.\n";
                acertos++;
                break;
            } else {
                std::cout << "Tente novamente!\n";
                tentativas++;
            }
        }

        if (tentativas == 3) {
            std::cout << "Suas tentativas acabaram. A letra sorteada era: " << letraSorteada << std::endl;
            erros++;
        }
    }

    std::cout << "\nResultados:\n";
    std::cout << "Acertos: " << acertos << std::endl;
    std::cout << "Erros: " << erros << std::endl;

    return 0;
}
