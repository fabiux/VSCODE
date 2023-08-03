#include <iostream>
using namespace std;

int main() {
    const int tamanhoVetor = 5;
    char vetor[tamanhoVetor];

    // Preenche o vetor com letras do alfabeto digitadas pelo usuário
    cout << "Digite " << tamanhoVetor << " letras do alfabeto:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite a letra " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Exibindo o vetor preenchido
    cout << "\nVetor preenchido:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    // Verificando se uma letra específica está presente no vetor
    char letraProcurada;
    cout << "\nDigite uma letra para verificar se está presente no vetor: ";
    cin >> letraProcurada;

    bool encontrada = false;
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == letraProcurada) {
            encontrada = true;
            break;
        }
    }

    // Exibindo o resultado da busca
    if (encontrada) {
        cout << "A letra '" << letraProcurada << "' foi encontrada no vetor.\n";
    } else {
        cout << "A letra '" << letraProcurada << "' NÃO foi encontrada no vetor.\n";
    }

    return 0;
}
