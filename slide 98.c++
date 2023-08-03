#include <iostream>
#include <string>

int main() {
    std::string nome; // Declaração de uma string

    nome = "john"; //atribuição de valor a uma string

    std::string sobrenome = "Doe"; // declaração e inicialização de uma string

    std::string nomeCompleto = nome + " " + sobrenome; //concatenação de strings

    std::cout << "nome completo: " << nomeCompleto <<std::endl; //exibição de uma string

    return 0;
}
