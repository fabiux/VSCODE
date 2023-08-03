#include <iostream>

int main() {
    const int tamanhoVetor = 5;
    int golsMarcados[tamanhoVetor]; // Vetor para armazenar os gols marcados em cada partida
    int golsSofridos[tamanhoVetor]; // Vetor para armazenar os gols sofridos em cada partida

    // Preenchendo o vetor de gols marcados com valores digitados pelo usuário
    std::cout << "Digite o número de gols marcados em cada partida:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> golsMarcados[i];
    }

    // Preenchendo o vetor de gols sofridos com valores digitados pelo usuário
    std::cout << "\nDigite o número de gols sofridos em cada partida:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> golsSofridos[i];
    }

    // Calculando e exibindo o saldo de gols em cada partida
    std::cout << "\nSaldo de gols em cada partida:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        int saldoGols = golsMarcados[i] - golsSofridos[i];
        std::cout << "Jogo " << i + 1 << ": " << saldoGols << std::endl;
    }

    return 0;
}
