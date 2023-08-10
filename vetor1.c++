#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializa o gerador de números aleatórios com base no tempo atual
    std::srand(std::time(0));

    // Gera o número secreto entre 1 e 100
    int numeroSecreto = std::rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhação!\n";
    std::cout << "Tente adivinhar o número secreto entre 1 e 100.\n";

    do {
        std::cout << "Digite o seu palpite: ";
        std::cin >> palpite;
        tentativas++;

        if (palpite > numeroSecreto) {
            std::cout << "Palpite muito alto! Tente um número menor.\n";
        } else if (palpite < numeroSecreto) {
            std::cout << "Palpite muito baixo! Tente um número maior.\n";
        } else {
            std::cout << "Parabéns! Você acertou o número secreto em " << tentativas << " tentativas.\n";
        }
    } while (palpite != numeroSecreto);

    return 0;
}
