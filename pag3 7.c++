#include <iostream>
#include <cmath>

// Verifica se um número é divisível por 3
bool ehDivisivelPor3(int numero) {
    return numero % 3 == 0;
}

// Verifica se um número é um quadrado perfeito
bool ehQuadradoPerfeito(int numero) {
    int raiz = sqrt(numero);
    return raiz * raiz == numero;
}

// Calcula a soma dos dígitos de um número
int somaDigitos(int numero) {
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

// Encontra o menor número mágico dentro de um intervalo
int encontrarNumeroMagico(int limiteInferior, int limiteSuperior) {
    for (int numero = limiteInferior; numero <= limiteSuperior; numero++) {
        if (ehDivisivelPor3(numero) && ehQuadradoPerfeito(numero) && somaDigitos(numero) <= 10) {
            return numero;
        }
    }
    return -1; // Se nenhum número mágico for encontrado
}

int main() {
    int limiteInferior, limiteSuperior;

    // Solicitar ao usuário o limite inferior do intervalo
    std::cout << "Digite o limite inferior do intervalo: ";
    std::cin >> limiteInferior;

    // Solicitar ao usuário o limite superior do intervalo
    std::cout << "Digite o limite superior do intervalo: ";
    std::cin >> limiteSuperior;

    // Encontrar o menor número mágico dentro do intervalo
    int numeroMagico = encontrarNumeroMagico(limiteInferior, limiteSuperior);

    // Verificar se foi encontrado um número mágico
    if (numeroMagico != -1) {
        std::cout << "O menor número mágico dentro do intervalo [" << limiteInferior << ", " << limiteSuperior << "] é: " << numeroMagico << std::endl;
    } else {
        std::cout << "Nenhum número mágico foi encontrado dentro do intervalo [" << limiteInferior << ", " << limiteSuperior << "]." << std::endl;
    }

    return 0;
}
