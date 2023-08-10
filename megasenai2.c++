                              // FABIO & VITOR B.
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <limits>  

// REALIZA O SORTEIO DE UM NUMERO ENTRE 1 E 60
std::vector<int> realizarSorteio() {
    std::vector<int> numerosSorteados;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 60);

    while (numerosSorteados.size() < 6) {
        int numero = dis(gen);
        if (std::find(numerosSorteados.begin(), numerosSorteados.end(), numero) == numerosSorteados.end()) {
            numerosSorteados.push_back(numero);
        }
    }

    return numerosSorteados;
}

int main() {
    int tentativas = 0;
    std::vector<int> numerosEscolhidos;
    std::vector<int> numerosSorteados;

    std::cout << "Bem-vindo ao Mega Senai!\n";

    do {
        // PEDE AO JOGADOR QUE INSIRA OS NUMEROS 
        std::cout << "\nTentativa #" << (tentativas + 1) << "\n";
        numerosEscolhidos.clear();
        for (int i = 0; i < 6; ++i) {
            int numero;
            do {
                std::cout << "Escolha o " << (i + 1) << "o numero (entre 1 e 60): ";
                if (!(std::cin >> numero)) {
                    std::cout << "Entrada inválida. Tente novamente.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }
                if (numero < 1 || numero > 60) {
                    std::cout << "Apenas números entre 1 e 60.\n";
                }
            } while (numero < 1 || numero > 60 || std::find(numerosEscolhidos.begin(), numerosEscolhidos.end(), numero) != numerosEscolhidos.end());
            numerosEscolhidos.push_back(numero);
        }

        // REALIZA SORTEIO
        numerosSorteados = realizarSorteio();

        // COMPARA OS NUMEROS
        int acertos = 0;
        for (int escolhido : numerosEscolhidos) {
            if (std::find(numerosSorteados.begin(), numerosSorteados.end(), escolhido) != numerosSorteados.end()) {
                acertos++;
            }
        }

        // MOSTRA O RESULTADO
        std::cout << "\nNumeros escolhidos:";
        for (int escolhido : numerosEscolhidos) {
            std::cout << " " << escolhido;
        }
        std::cout << "\nNumeros sorteados:";
        for (int sorteado : numerosSorteados) {
            std::cout << " " << sorteado;
        }
        std::cout << "\nAcertos: " << acertos << " de 6\n";

        // VERIFICA SE O JOGADOR ACERTOU OS NUMEROS
        if (acertos == 6) {
            std::cout << "Parabens! Voce acertou todos os numeros em " << (tentativas + 1) << " tentativas.\n";
            break;
        }

        tentativas++;

        // PERGUNTA SE O JOGADOR QUER CONTINUAR JOGANDO 
        char continuar;
        std::cout << "Deseja tentar novamente? (S/N): ";
        std::cin >> continuar;

        if (continuar != 'S' && continuar != 's') {
            std::cout << "Obrigado por jogar o Mega Senai!\n";
            break;
        }
    } while (true);

    return 0;
}
                               //FABIO & VITOR B.