#include <iostream>
using namespace std;

int main() {
    // Cria um vetor de inteiros com 10 elementos
    int vetor[10];

    //Preenche o vetor com valores digitados pelo usuario
    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Calcula a soma de todos os elementos do vetor
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += vetor[i];
    }

    // Exibe a soma na tela 
    cout << "A soma de todos os elementos do vetor e: " << soma << endl;

    return 0;
}
