#include <iostream>
#include <vector>
#include <string>

std::vector<bool> verificarLetraNaPalavra(const std::string& palavra, char letra) {
    std::vector<bool> posicoes(palavra.size(), false);

    for (size_t i = 0; i < palavra.size(); i++) {
        if (palavra[i] == letra) {
            posicoes[i] = true;
        }
    }

    return posicoes;
}

int main() {
    std::string palavraSecreta = "banana";
    char letra;
    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    std::vector<bool> posicoesLetra = verificarLetraNaPalavra(palavraSecreta, letra);

    std::cout << "Posições da letra '" << letra << "' na palavra secreta:\n";
    for (size_t i = 0; i < posicoesLetra.size(); i++) {
        if (posicoesLetra[i]) {
            std::cout << "Letra '" << letra << "' encontrada na posição " << i << "\n";
        }
    }

    return 0;
}
