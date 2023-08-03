#include <iostream>
using namespace std;

int main() {
    const int tamanhoVetor = 5;
    int vetor1[tamanhoVetor];
    int vetor2[tamanhoVetor];
    int vetorSoma[tamanhoVetor];

    // Preenchendo o primeiro vetor com valores digitados pelo usuário
    cout << "Digite " << tamanhoVetor << " valores inteiros para o primeiro vetor:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    // Preenchendo o segundo vetor com valores digitados pelo usuário
    cout << "\nDigite " << tamanhoVetor << " valores inteiros para o segundo vetor:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    // Realizando a soma dos elementos dos dois vetores e armazenando no terceiro vetor
    for (int i = 0; i < tamanhoVetor; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }

    // Exibindo o conteúdo do terceiro vetor (soma)
    cout << "\nConteúdo do vetor soma:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetorSoma[i] << " ";
    }
    cout << endl;

    return 0;
}
