#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // For std::transform

#define SIZE 5
using namespace std;

string gerarPalavraSecreta(const string palavras[], int tamanho) {
    if (tamanho <= 0) {
        cout << "O array de palavras está vazio.\n";
        return "";
    }

    srand(time(0)); // Inicializa o gerador de números aleatórios com base no tempo atual
    int indiceAleatorio = rand() % tamanho; // Gera um índice aleatório dentro do tamanho do array

    return palavras[indiceAleatorio];
}

int main() {
    string palavras[SIZE] = {"banana", "laranja", "abacaxi", "uva", "morango"};
    string palavraSecreta = gerarPalavraSecreta(palavras, SIZE);

    if (!palavraSecreta.empty()) {
        cout << "Bem-vindo ao jogo de adivinhação de palavras!\n";
        cout << "Tente adivinhar a palavra secreta.\n";

        string palpite;
        do {
            cout << "Digite seu palpite: ";
            cin >> palpite;

            // Convert user input to lowercase for case-insensitive comparison
            std::transform(palpite.begin(), palpite.end(), palpite.begin(), ::tolower);

            if (palavraSecreta == palpite) {
                cout << "Parabéns! Você acertou a palavra secreta: " << palavraSecreta << endl;
                break;
            } else {
                cout << "Palavra incorreta. Tente novamente.\n";
            }
        } while (true);
    }

    return 0;
}

