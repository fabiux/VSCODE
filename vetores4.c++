#include <iostream>
using namespace std; 

int main() {
    // Cria um vetor de inteiros com 8 elementos 
    int vetor[8];

    // Preenche o vetor com valores digitados pelo usuario 
    for(int i = 0; i < 8; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Exibe apenas os elementos pares do vetor
    cout << "Elementos pares do vetor:" << endl;
    for (int i = 0; i < 8; i++) {
        if (vetor[i] % 2==0) {
            cout << vetor[1] << " ";
        }
    }
    cout << endl;

    return 0;
}
