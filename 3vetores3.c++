#include <iostream>
#include <vector>

int main() {
    // Declaração do vetor de números reais para armazenar a magnitude aparente das estrelas
    std::vector<double> magnitudes;
    double magnitude;
    double soma_magnitudes = 0.0;

    // Leitura das magnitudes das estrelas
    std::cout << "Digite a magnitude aparente de 6 estrelas:" << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "Estrela " << i + 1 << ": ";
        std::cin >> magnitude;
        magnitudes.push_back(magnitude);
        soma_magnitudes += magnitude;
    }

    // Cálculo da magnitude média
    double magnitude_media = soma_magnitudes / magnitudes.size();

    // Exibição da magnitude média das estrelas
    std::cout << "A magnitude média das estrelas é: " << magnitude_media << std::endl;

    return 0;
}
