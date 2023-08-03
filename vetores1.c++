#include <iostream>
using namespace std;

int main() {
    // Cria um vetor de inteiros com 5 elementos
    int vetor[5];

    // Preenche o vetor com valores digitados pelo usuário
    for (int i = 0; i < 5; i++) {
        cout << "Digite 5 valores inteiros " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Exibe os elementos na tela
    cout << "Os elementos do vetor sao:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
