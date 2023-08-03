#include <iostream>
using namespace std;

int main() {
    // Cria um vetor de inteiros com 6 elementos
    int vetor[6];

    // Preenche o vetor com valores digitados pelo usuário
    for (int i = 0; i < 6; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Inverte a ordem dos elementos no vetor
    for (int i = 0; i < 3; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[5 - i];
        vetor[5 - i] = temp;
    }

    // Exibe o vetor resultante
    cout << "Vetor resultante (ordem invertida):" << endl;
    for (int i = 0; i < 6; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
