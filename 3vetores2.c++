#include <iostream>
#include <vector>
#include <limits>

int main() {
    // Declaração do vetor de inteiros para armazenar as distâncias dos planetas ao sol (em milhões de km)
    std::vector<int> distancias = {108, 150, 228, 778, 1427}; // Distâncias em ordem: Mercúrio, Vênus, Terra, Júpiter, Marte

    // Encontra o planeta mais próximo e o planeta mais distante do sol
    int planeta_mais_proximo = 0;
    int planeta_mais_distante = 0;
    int distancia_mais_proxima = std::numeric_limits<int>::max(); // Inicializa com um valor grande
    int distancia_mais_distante = 0;

    for (int i = 0; i < distancias.size(); i++) {
        if (distancias[i] < distancia_mais_proxima) {
            distancia_mais_proxima = distancias[i];
            planeta_mais_proximo = i;
        }
        if (distancias[i] > distancia_mais_distante) {
            distancia_mais_distante = distancias[i];
            planeta_mais_distante = i;
        }
    }

    // Exibe o planeta mais próximo e o planeta mais distante do sol
    std::vector<std::string> nomes_planetas = {"Mercúrio", "Vênus", "Terra", "Júpiter", "Marte"};
    std::cout << "Planeta mais próximo do Sol: " << nomes_planetas[planeta_mais_proximo] << std::endl;
    std::cout << "Planeta mais distante do Sol: " << nomes_planetas[planeta_mais_distante] << std::endl;

    return 0;
}
