#include <iostream>

int main() {
    const int tamanhoVetor = 5;
    int golsPartida1[tamanhoVetor]; // Vetor para armazenar os gols marcados na partida 1
    int golsPartida2[tamanhoVetor]; // Vetor para armazenar os gols marcados na partida 2

    // Preenchendo o vetor de gols da partida 1 com valores digitados pelo usuário
    std::cout << "Digite o número de gols marcados na partida 1:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> golsPartida1[i];
    }

    // Preenchendo o vetor de gols da partida 2 com valores digitados pelo usuário
    std::cout << "\nDigite o número de gols marcados na partida 2:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> golsPartida2[i];
    }

    // Calculando o total de gols marcados pela seleção
    int totalGols = 0;
    for (int i = 0; i < tamanhoVetor; ++i) {
        totalGols += golsPartida1[i] + golsPartida2[i];
    }

    // Exibindo o total de gols marcados pela seleção
    std::cout << "\nTotal de gols marcados pela seleção: " << totalGols << std::endl;

    return 0;
}
