#include <iostream>
using namespace std;

int main() {
    // Declaração do vetor de 10 elementos para armazenar as idades das jogadoras
    int idades[10];

    // Laço para ler as idades e armazená-las no vetor
    for (int i = 0; i < 10; i++) {
        cout << "Digite a idade da jogadora " << i + 1 << ": ";
        cin >> idades[i];
    }

    // Variável para armazenar a soma das idades
    int soma = 0;

    // Laço para calcular a soma das idades
    for (int i = 0; i < 10; i++) {
        soma += idades[i];
    }

    // Cálculo da média das idades
    float media = static_cast<float>(soma) / 10;

    // Exibição da média
    cout << "A media das idades das jogadoras e: " << media << endl;

    return 0;
}
