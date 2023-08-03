#include <iostream>
#include <string>
#include <vector>
#include <cctype> // Incluído para a função std::isdigit

// Classe para representar os equipamentos
class Equipment {
public:
    std::string name; //nome do equipamneto
    std::string type; //tipo de equipamento (ex: arma,armadura, etc. )
    std::string attribute; //atributo especifico do equipamento (ex: dano, defesa, etc.)
    std::string value; //valor do atributo do equipamento (ex: 10, 20, etc)
};

// Classe para representar a ficha de personagem
class CharacterSheet {
public:
    std::string name; //nome do personagem
    std::string characterClass; //classe do personagem(ex: guerreiro, mago, etc.)
    int level; //nivel do personagem (armazenado como um valor numerico)
    std::string race; //raça do personagem (ex:humano, elfo, etc.)
    int healthPoints; // pontos de vida do personagem( armazenado como um valor numerico)
    int attackPoints; // //pontos de ataque do personagem(armazenado como um valor numerico)
    std::vector<std::string> skills; //lista de habilidades do personagem 
    std::vector<Equipment> equipment; //lista de equipamentos do personagem

    // Função para adicionar habilidades à ficha
    void addSkill(const std::string& skill) { //
        skills.push_back(skill);
    }

    // Função para adicionar equipamentos à ficha
    void addEquipment(const Equipment& equip) {
        equipment.push_back(equip);
    }
};

// Declaração da função para verificar se uma string contém apenas letras
bool containsOnlyLetters(const std::string& str);

// Função para verificar se uma string contém apenas dígitos
bool containsOnlyDigits(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) { // Verifica se o caractere não é um dígito numérico
            return false;
        }
    }
    return true;
}

// Implementação da função para verificar se uma string contém apenas letras
bool containsOnlyLetters(const std::string& str) {
    for (char c : str) {
        if (!std::isalpha(c)) { // Verifica se o caractere não é uma letra
            return false;
        }
    }
    return true;
}

int main() {
    CharacterSheet character;

    std::cout << "Criando ficha de personagem para RPG!" << std::endl;

    // Solicita ao usuário para digitar o nome do personagem (apenas letras)
    do {
        std::cout << "Digite o nome do personagem (apenas letras): ";
        std::getline(std::cin, character.name);
    } while (!containsOnlyLetters(character.name));

    // Solicita ao usuário para digitar a classe do personagem (apenas letras)
    do {
        std::cout << "Digite a classe do personagem (apenas letras): ";
        std::getline(std::cin, character.characterClass);
    } while (!containsOnlyLetters(character.characterClass));

    // Solicita ao usuário para digitar o nível do personagem (apenas dígitos numéricos)
    std::string levelStr;
    do {
        std::cout << "Digite o nível do personagem (apenas dígitos numéricos): ";
        std::getline(std::cin, levelStr);
    } while (!containsOnlyDigits(levelStr));
    character.level = std::stoi(levelStr);

    // Solicita ao usuário para digitar a raça do personagem (apenas letras)
    do {
        std::cout << "Digite a raça do personagem (apenas letras): ";
        std::getline(std::cin, character.race);
    } while (!containsOnlyLetters(character.race));

    // Solicita ao usuário para digitar os pontos de vida do personagem (apenas dígitos numéricos)
    std::string healthPointsStr;
    do {
        std::cout << "Digite os pontos de vida do personagem (apenas dígitos numéricos): ";
        std::getline(std::cin, healthPointsStr);
    } while (!containsOnlyDigits(healthPointsStr));
    character.healthPoints = std::stoi(healthPointsStr);

    // Solicita ao usuário para digitar os pontos de ataque do personagem (apenas dígitos numéricos)
    std::string attackPointsStr;
    do {
        std::cout << "Digite os pontos de ataque do personagem (apenas dígitos numéricos): ";
        std::getline(std::cin, attackPointsStr);
    } while (!containsOnlyDigits(attackPointsStr));
    character.attackPoints = std::stoi(attackPointsStr);


    int numSkills;
    std::cout << "Quantas habilidades o personagem possui? ";
    std::cin >> numSkills;
    std::cin.ignore(); // Limpa o buffer de entrada

    for (int i = 0; i < numSkills; i++) {
        std::string skill;
        std::cout << "Digite a habilidade " << i + 1 << ": ";
        std::getline(std::cin, skill);
        character.addSkill(skill);
    }

    int numEquipments;
    std::cout << "Quantos equipamentos o personagem possui? ";
    std::cin >> numEquipments;
    std::cin.ignore(); // Limpa o buffer de entrada

    for (int i = 0; i < numEquipments; i++) {
        Equipment equip;
        std::cout << "Digite o nome do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.name);

        std::cout << "Digite o tipo do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.type);

        std::cout << "Digite o atributo do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.attribute);

        std::cout << "Digite o valor do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.value);

        character.addEquipment(equip);
    }

    // Exibindo a ficha completa do personagem
    std::cout << "\nFicha de Personagem:" << std::endl;
    std::cout << "Nome: " << character.name << std::endl;
    std::cout << "Classe: " << character.characterClass << std::endl;
    std::cout << "Nível: " << character.level << std::endl;
    std::cout << "Raça: " << character.race << std::endl;
    std::cout << "Pontos de Vida: " << character.healthPoints << std::endl;
    std::cout << "Pontos de Ataque: " << character.attackPoints << std::endl;

    std::cout << "Habilidades:" << std::endl;
    for (const auto& skill : character.skills) {
        std::cout << "- " << skill << std::endl;
    }

    std::cout << "Equipamentos:" << std::endl;
    for (const auto& equip : character.equipment) {
        std::cout << "- " << equip.name << " (" << equip.type << ")" << std::endl;
        std::cout << "  Atributo: " << equip.attribute << ", Valor: " << equip.value << std::endl;
    }

    return 0;
}