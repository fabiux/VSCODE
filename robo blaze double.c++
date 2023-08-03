#include <iostream>
#include <string>

class RoboBlaze {
private:
    std::string cor;
    std::string modelo;
    std::string nome;

public:
    void definirCor(const std::string& novaCor) {
        cor = novaCor;
    }

    void definirModelo(const std::string& novoModelo) {
        modelo = novoModelo;
    }

    void definirNome(const std::string& novoNome) {
        nome = novoNome;
    }

    void mostrarDetalhes() {
        std::cout << "Detalhes do Robô Blaze:" << std::endl;
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Cor: " << cor << std::endl;
    }
};

int main() {
    RoboBlaze robo;

    std::string corNova, modeloNovo, nomeNovo;

    std::cout << "Digite o nome do robô Blaze: ";
    std::getline(std::cin, nomeNovo);

    std::cout << "Digite o modelo do robô Blaze: ";
    std::getline(std::cin, modeloNovo);

    std::cout << "Digite a cor do robô Blaze: ";
    std::getline(std::cin, corNova);

    robo.definirNome(nomeNovo);
    robo.definirModelo(modeloNovo);
    robo.definirCor(corNova);

    std::cout << std::endl;
    robo.mostrarDetalhes();

    return 0;
}

#include <iostream>
#include <string>

class RoboBlazeSinais {
private:
    std::string cor;
    std::string modelo;
    std::string nome;
    int quantidadeSinais;

public:
    void definirCor(const std::string& novaCor) {
        cor = novaCor;
    }

    void definirModelo(const std::string& novoModelo) {
        modelo = novoModelo;
    }

    void definirNome(const std::string& novoNome) {
        nome = novoNome;
    }

    void definirQuantidadeSinais(int novaQuantidadeSinais) {
        quantidadeSinais = novaQuantidadeSinais;
    }

    void mostrarDetalhes() {
        std::cout << "Detalhes do Robô de Sinais Blaze:" << std::endl;
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Cor: " << cor << std::endl;
        std::cout << "Quantidade de Sinais: " << quantidadeSinais << std::endl;
    }
};

int main() {
    RoboBlazeSinais robo;

    std::string corNova, modeloNovo, nomeNovo;
    int quantidadeSinaisNova;

    std::cout << "Digite o nome do robô de sinais Blaze: ";
    std::getline(std::cin, nomeNovo);

    std::cout << "Digite o modelo do robô de sinais Blaze: ";
    std::getline(std::cin, modeloNovo);

    std::cout << "Digite a cor do robô de sinais Blaze: ";
    std::getline(std::cin, corNova);

    std::cout << "Digite a quantidade de sinais do robô de sinais Blaze: ";
    std::cin >> quantidadeSinaisNova;

    robo.definirNome(nomeNovo);
    robo.definirModelo(modeloNovo);
    robo.definirCor(corNova);
    robo.definirQuantidadeSinais(quantidadeSinaisNova);

    std::cout << std::endl;
    robo.mostrarDetalhes();

    return 0;
}
