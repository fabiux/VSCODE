#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int tamanhoVetor = 4;
    int vetor[tamanhoVetor];

    // Preenchendo o vetor com valores aleatórios entre 1 e 10
    srand(time(0)); // Semente para geração de números aleatórios
    for (int i = 0; i < tamanhoVetor; i++) {
        vetor[i] = rand() % 10 + 1; // Números aleatórios entre 1 e 10
    }

    // Exibindo o vetor preenchido (apenas para fins de depuração)
    cout << "Vetor preenchido: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Pedindo ao usuário para adivinhar um dos números do vetor
    int palpite;
    cout << "\nTente adivinhar um dos números do vetor (entre 1 e 10): ";
    cin >> palpite;

    // Verificando se o palpite está correto
    bool acertou = false;
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == palpite) {
            acertou = true;
            break;
        }
    }

    // Exibindo o resultado da verificação
    if (acertou) {
        cout << "Parabéns! Você acertou o número.\n";
    } else {
        cout << "Infelizmente, você errou. O número não está no vetor.\n";
    }

    return 0;
}
