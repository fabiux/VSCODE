#include <iostream>
#include <limits> // Para usar o numeric_limits

int main() {
    const int tamanhoVetor = 6;
    float alturas[tamanhoVetor]; // Vetor para armazenar as alturas

    // Preenchendo o vetor com valores digitados pelo usuário
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Digite a altura do jogador " << i+1 << " (em metros): ";
        while (!(std::cin >> alturas[i])) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Digite um valor válido: ";
        }
    }

    // Encontrando a maior altura no vetor
    float maiorAltura = alturas[0];
    for (int i = 1; i < tamanhoVetor; ++i) {
        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
    }

    // Encontrando a menor altura no vetor
    float menorAltura = alturas[0];
    for (int i = 1; i < tamanhoVetor; ++i) {
        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
    }

    // Exibindo os resultados
    std::cout << "A maior altura é: " << maiorAltura << " metros" << std::endl;
    std::cout << "A menor altura é: " << menorAltura << " metros" << std::endl;

    return 0;
}
