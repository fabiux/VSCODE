#include <iostream>
#include <string>

int main() {
    const int tamanhoVetor = 8;
    std::string selecoes[tamanhoVetor]; // vetor para armazenar os nomes das seleções

    // Preenchendo o vetor com os nomes das seleções digitados pelo usuário
    std::cout << "Digite o nome das seleções:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Seleção " << i + 1 << ": ";
        std::cin.ignore(); // Limpar o buffer para evitar problemas com getline
        std::getline(std::cin, selecoes[i]);
    }

    // Exibindo os nomes das seleções em ordem inversa
    std::cout << "\nNomes das seleções em ordem inversa:\n";
    for (int i = tamanhoVetor - 1; i >= 0; --i) {
        std::cout << selecoes[i] << std::endl;
    }

    return 0;
}
