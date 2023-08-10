#include <iostream>
#include <cstdlib>
#include <ctime>

char gerarletraaleatoria() {
    char letra = 'A' + rand() % 26;
    return letra;
}

bool ehvogal(char letra) {
    return (letra == 'A' || letra == 'E'
        || letra == 'I' || letra == 'O'
        || letra == 'U' || letra == 'a'
        || letra == 'e' || letra == 'i'
        || letra == 'o' || letra == 'u');
}

int main() {
    srand(time(0)); // Corrected: 'strand' to 'srand'
    char letrasorteada = gerarletraaleatoria();
    char letrachutada;
    int tentativas = 0;
    const int limitetentativas = 5; // Corrected: 'limitetentativas' to 'limitetentativas'

    std::cout << "Bem-vindo ao jogo de adivinhar a letra!" << std::endl; // Corrected: Added missing semicolon
    std::cout << "Antes de começar, aqui está uma dica: a letra sorteada é uma ";

    if (ehvogal(letrasorteada)) {
        std::cout << "vogal." << std::endl; // Corrected: Changed "" to " and added missing semicolon
    } else {
        std::cout << "consoante." << std::endl; // Corrected: Added missing semicolon
    }

    std::cout << "Tente adivinhar a letra sorteada (A a Z)." << std::endl;

    while (tentativas < limitetentativas) {
        std::cout << "Tentativa " << tentativas + 1 << ": Digite uma letra: ";
        std::cin >> letrachutada; // Corrected: 'letraChutada' to 'letrachutada'

        if (letrachutada == letrasorteada) { // Corrected: 'letraChutada' to 'letrachutada' and 'letraSorteada' to 'letrasorteada'
            std::cout << "Parabéns! Você acertou a letra." << std::endl;
            break;
        } else {
            std::cout << "Tente novamente!" << std::endl;
            tentativas++;
        }
    }

    if (tentativas == limitetentativas) { // Corrected: 'limiteTentativas' to 'limitetentativas'
        std::cout << "Suas tentativas acabaram. A letra sorteada era: " << letrasorteada << std::endl; // Corrected: 'letraSorteada' to 'letrasorteada'
    }

    return 0;
}
