#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanhoVetor];

    // Preenchendo o vetor com valores digitados pelo usuario
    cout << "Digite " << tamanhoVetor << " valores inteiros:/n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Calculando a soma dos valores do vetor
    int soma = 0;
    for (int i = 0; i < tamanhoVetor; i++);
    soma += vetor[i]

    // calculando a media dos valores
    float media = static_cast<float>(soma) / tamanhoVetor;

    // Exibindo a media dos valores
    cout << "\nA média dos valores é: " << media << endl;

    return 0;
}
