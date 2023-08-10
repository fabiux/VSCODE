#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype> //biblioteca incluida para usar o 'toupper'

char gerarletraaleatoria() {
    return 'A' + rand() % 26; //Gerador de numeros aleatorios entre A e Z
}

int main() {

    char letraSorteada = gerarletraaleatoria();
    int tentativas = 6; //Numeros de tentativas do jogador
    char chute; //palpites do jogador

    std::cout << "Seja bem vindo ao jogo de adivinhar letras aleatórias do alfabeto! " << std::endl;

    while (tentativas > 0) {
        std::cout << "Tentativas restantes: " << tentativas << std::endl;
        std::cout << "Chute uma letra: ";
        std::cin >> chute; 
        
        if (toupper(chute) == letraSorteada) {
            std::cout << "Parabéns, você acertou a letra sorteada! " << std::endl;
            break; 
        } else {
            std::cout << "Errou, tente novamente! " << std::endl;
        }

        tentativas--;
    }

    if (tentativas == 0) {
        std::cout << "Suas tentativas acabaram, a letra sorteada era: " << letraSorteada << std::endl;
        std::cout << "Voce utilizou " << 6 - tentativas << std::endl;
    }

    return 0;
}
