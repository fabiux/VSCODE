#include <iostream>		//executa a operação
#include <string>		//identificar uma sequência de caracteres

// Definindo a estrutura para a ficha de personagem
struct Character {      // struct serve para o armazenamento de dados em uma única variável
    std::string name;   //string serve para armazenar qualquer dado (biblioteca)
    std::string characterClass;
    int level;
    std::string skills;
    std::string equipment;
};

// Função para criar uma nova ficha de personagem
Character createCharacter() {
    Character newCharacter;
    
    std::cout << "Digite o nome do personagem: ";
    std::getline(std::cin, newCharacter.name);
    
    std::cout << "Digite a classe do personagem: ";
    std::getline(std::cin, newCharacter.characterClass);
    
    std::cout << "Digite o nivel do personagem: ";
    std::cin >> newCharacter.level;
    std::cin.ignore(); 		//Limpar o buffer do teclado após ler um número inteiro
    
    std::cout << "Digite as habilidades do personagem: ";
    std::getline(std::cin, newCharacter.skills);
    
    std::cout << "Digite o equipamento epico do personagem: ";
    std::getline(std::cin, newCharacter.equipment);
    
    return newCharacter;
}

// Função para exibir os detalhes da ficha de personagem
void displayCharacter(const Character& character) {
    std::cout << "Nome: " << character.name << std::endl;
    std::cout << "Classe: " << character.characterClass << std::endl;
    std::cout << "Nivel: " << character.level << std::endl;
    std::cout << "Habilidades: " << character.skills << std::endl;
    std::cout << "Equipamento epico: " << character.equipment << std::endl;
}

int main() {
    std::cout << "Bem-vindo(a) ao mundo de Eldoria!" << std::endl;
    std::cout << "Crie a ficha do seu personagem!" << std::endl;
    
    Character playerCharacter = createCharacter();
    
    std::cout << "\nFicha de Personagem criada com sucesso:" << std::endl;
    displayCharacter(playerCharacter);
    
    return 0;
}
