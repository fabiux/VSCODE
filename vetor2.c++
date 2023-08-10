#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> palavras = {"banana", "laranja", "abacaxi", "uva", "morango"};
    std::srand(std::time(0));

    // Escolhe uma palavra secreta aleatória do vetor
    std::string palavraSecreta = palavras[std::rand() % palavras.size()];

    std::string palavraAdivinhada(palavraSecreta.size(), '_');
    int tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhar a palavra!\n";
    std::cout << "A palavra secreta tem " << palavraSecreta.size() << " letras.\n";

    do {
        std::cout << "Palavra adivinhada: " << palavraAdivinhada << "\n";
        std::cout << "Digite uma letra: ";
        char letra;
        std::cin >> letra;
        tentativas++;

        bool acertou = false;
        for (size_t i = 0; i < palavraSecreta.size(); i++) {
            if (palavraSecreta[i] == letra) {
                palavraAdivinhada[i] = letra;
                acertou = true;
            }
        }

        if (acertou) {
            std::cout << "Ótimo! A letra '" << letra << "' está na palavra secreta.\n";
        } else {
            std::cout << "Ops! A letra '" << letra << "' não está na palavra secreta.\n";
        }

        if (palavraAdivinhada == palavraSecreta) {
            std::cout << "Parabéns! Você adivinhou a palavra secreta '" << palavraSecreta << "' em " << tentativas << " tentativas.\n";
            break;
        }
    } while (true);

    return 0;
}

