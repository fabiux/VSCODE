#include <iostream>

int main() {
    const int tamanhoVetor = 10;
    int espectadores[tamanhoVetor]; // Vetor para armazenar o número de espectadores em cada jogo

    // Preenchendo o vetor com o número de espectadores digitados pelo usuário
    std::cout << "Digite o número de espectadores em cada jogo:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> espectadores[i];
    }

    // Contando o número de jogos com público superior a 50 mil espectadores
    int jogosSuperior50Mil = 0;
    for (int i = 0; i < tamanhoVetor; ++i) {
        if (espectadores[i] > 50000) {
            jogosSuperior50Mil++;
        }
    }

    // Exibindo o número de jogos com público superior a 50 mil espectadores
    std::cout << "\nNúmero de jogos com público superior a 50 mil espectadores: " << jogosSuperior50Mil << std::endl;

    return 0;
}
