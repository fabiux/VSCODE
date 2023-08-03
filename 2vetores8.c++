#include <iostream>

int main() {
    const int tamanhoVetor = 6;
    int datas[tamanhoVetor]; // Vetor para armazenar as datas dos jogos

    // Preenchendo o vetor com as datas digitadas pelo usuário
    std::cout << "Digite as datas dos jogos (dias):\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> datas[i];
    }

    // Invertendo a ordem das datas no vetor
    for (int i = 0; i < tamanhoVetor / 2; ++i) {
        int temp = datas[i];
        datas[i] = datas[tamanhoVetor - 1 - i];
        datas[tamanhoVetor - 1 - i] = temp;
    }

    // Exibindo o vetor resultante (datas invertidas)
    std::cout << "\nDatas dos jogos em ordem inversa:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << datas[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
