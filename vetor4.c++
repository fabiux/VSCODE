#include <iostream>
#include <string>
#include <vector>

std::string obterPalavraAdivinhada(const std::string& palavra, const std::vector<bool>& posicoes) {
    std::string palavraAdivinhada = palavra;

    for (size_t i = 0; i < palavra.size(); i++) {
        if (!posicoes[i]) {
            palavraAdivinhada[i] = '_';
        }
    }

    return palavraAdivinhada;
}

int main() {
    std::string palavraSecreta = "banana";
    std::vector<bool> posicoes = {true, false, true, false, false, true};

    std::string palavraAdivinhada = obterPalavraAdivinhada(palavraSecreta, posicoes);

    std::cout << "Palavra adivinhada: " << palavraAdivinhada << std::endl;

    return 0;
}
