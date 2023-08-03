#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Declaração do vetor de strings para armazenar os nomes dos planetas
    std::vector<std::string> planetas;

    // Preenche o vetor com os nomes dos planetas
    planetas.push_back("Vênus");
    planetas.push_back("Terra");
    planetas.push_back("Marte");
    planetas.push_back("Júpiter");
    planetas.push_back("Saturno");

    // Ordena o vetor em ordem alfabética
    std::sort(planetas.begin(), planetas.end());

    // Exibe os nomes dos planetas em ordem alfabética
    std::cout << "Planetas em ordem alfabética:" << std::endl;
    for (const std::string &planeta : planetas) {
        std::cout << planeta << std::endl;
    }

    return 0;
}
