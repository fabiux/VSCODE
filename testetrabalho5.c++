#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

char gerarletraaleatoria() {
    return 'A' + rand() % 26; //gerador de letras aleatoria
}

int main() {

    std::cout << "Seja bem vindo ao jogo de adivinhar letras aleatórias do alfabeto!" << std::endl;

    char opcao;
    do {
        char letraSorteada = gerarletraaleatoria();
        int tentativas = 6; //numero de tentativas
        char chute; //palpites do jogador

        while (tentativas > 0) {
            std::cout << "Tentativas restantes: " << tentativas << std::endl;
            std::cout << "Chute uma letra: ";
            std::cin >> chute;

            if (toupper(chute) == letraSorteada) {
                std::cout << "Parabéns, você acertou a letra sorteada!" << std::endl;
                break;
            } else {
                std::cout << "Errou, tente novamente!" << std::endl;
            }

            tentativas--;
        }

        std::cout << "A letra sorteada era: " << letraSorteada << std::endl;
        std::cout << "Voce utilizou " << 6 - tentativas << " tentativas." << std::endl;

        std::cout << "Deseja jogar novamente? (S/N): ";
        std::cin >> opcao;
    } while (toupper(opcao) == 'S');

    std::cout << "Obrigado por jogar! Ate a proxima." << std::endl;

    return 0;
}
