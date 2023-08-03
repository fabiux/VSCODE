#include <iostream>

int main() {
    int tamanho;

    // Solicitar ao usuário o tamanho do array
    std::cout << "Digite o tamanho do array: ";
    std::cin >> tamanho;

    // Criar o array com o tamanho fornecido pelo usuário
    int array[tamanho];

    // Solicitar ao usuário que digite os elementos do array
    std::cout << "Digite os elementos do array: ";
    for (int i = 0; i < tamanho; i++) {
        std::cin >> array[i];
    }

    // Encontrar o maior elemento do array
    int maior = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    // Imprimir o maior elemento do array
    std::cout << "O maior elemento do array é: " << maior << std::endl;

    return 0;
}
