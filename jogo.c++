#include <iostream>
#include <cstdlib>
#include <ctime>

void adivinhacao() {
    std::srand(std::time(0)); // Semente para geração de números aleatórios
    int numero_secreto = std::rand() % 100 + 1;
    int tentativas = 0;

    std::cout << "Bem-vindo ao Jogo de Adivinhação!" << std::endl;
    std::cout << "Estou pensando em um número de 1 a 100." << std::endl;

    while (true) {
        int tentativa;
        std::cout << "Faça sua tentativa: ";
        std::cin >> tentativa;
        tentativas++;

        if (tentativa == numero_secreto) {
            std::cout << "Parabéns! Você acertou em " << tentativas << " tentativa(s)!" << std::endl;
            break;
        } else if (tentativa < numero_secreto) {
            std::cout << "Tente um numero maior." << std::endl;
        } else {
            std::cout << "Tente um numero menor." << std::endl;
        }
    }

    std::cout << "Obrigado por jogar!" << std::endl;
}

int main() {
    adivinhacao();
    return 0;
}
