#include <iostream> //biblioteca de entrada e saida padrão do c++
#include <string> //biblioteca para manipular de strings
#include <vector> //biblioteca para usar a classe de contêiner "vector".
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
    void addSkill(const std::string& skill) { // recebe uma habilidade como parametro e a adiciona á lista de habilidade da ficha 
        skills.push_back(skill); // adiciona a habilidade á lista de equipamentos usando o metodo push_back da classe vector
    }

    // Função para adicionar equipamentos à ficha
    void addEquipment(const Equipment& equip) { //recebe um equipamento como parametro e o adiciona á lista de equipamentos da ficha  
        equipment.push_back(equip); //adiciona o equipamento á lista de equipamentos usando o metodo push_back de classe vector
    }
};

// Declaração da função para verificar se uma string contém apenas letras
bool containsOnlyLetters(const std::string& str); //declaração da função que será implementa posteriormente

// Função para verificar se uma string contém apenas dígitos
bool containsOnlyDigits(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) { // Verifica se o caractere não é um dígito numérico
            return false; //retorna false se encontrar algum caractere que não seja dígito
        }
    }
    return true; //retorna true se todos os caractere forem digitos 
}

// Implementação da função para verificar se uma string contém apenas letras
bool containsOnlyLetters(const std::string& str) {
    for (char c : str) {
        if (!std::isalpha(c)) { // Verifica se o caractere não é uma letra
            return false; //retorna false se encontrar algum caractere que não seja dígito
        }
    }
    return true; //retorna true se todos os caractere forem digitos 
}

int main() {
    CharacterSheet character; //cria uma instacia da classe characterSheet chamada "character"

    std::cout << "Criando ficha de personagem para RPG!" << std::endl; //exibe uma mensagem na tela para informar que a criaçao da ficha de personagem para o RPG está iniciando.

    // Solicita ao usuário para digitar o nome do personagem (apenas letras)
    do {
        std::cout << "Digite o nome do personagem (apenas letras): "; 
        std::getline(std::cin, character.name); //lê a linha de entrada do usuario e armazena na variavel 'name' da ficha das personagem.
    } while (!containsOnlyLetters(character.name)); // repete o processo enquanto o nome contiver caracteres que não são apenas letras

    // Solicita ao usuário para digitar a classe do personagem (apenas letras)
    do {
        std::cout << "Digite a classe do personagem (apenas letras): "; 
        std::getline(std::cin, character.characterClass); //lê a linha dev netrada do usuario e armazena na variavel 'characterClass' da ficha de personagem.
    } while (!containsOnlyLetters(character.characterClass)); //repete o processo enquanto a classe contiver caracteres que não são apenas letras.

    // Solicita ao usuário para digitar o nível do personagem (apenas dígitos numéricos)
    std::string levelStr;
    do {
        std::cout << "Digite o nível do personagem (apenas dígitos numéricos): ";
        std::getline(std::cin, levelStr); //lê a linha de entrada do usuario e armazena na variavel 'levelStr'
    } while (!containsOnlyDigits(levelStr)); // repete o processo enquanto 'levelStr' contiver caracteres que não são apenas digitos numéricos. 
    character.level = std::stoi(levelStr); //converte 'levelStr' para um valor inteiro e armazenar na variavel 'level' da ficha de personagem. 

    // Solicita ao usuário para digitar a raça do personagem (apenas letras)
    do {
        std::cout << "Digite a raça do personagem (apenas letras): ";
        std::getline(std::cin, character.race); //lê a linha de entrada do usuario e armazena na variavel 'race' da ficha de personagem 
    } while (!containsOnlyLetters(character.race));  //repete o processo enquanto a raça contiver caracteres  que não são apenas letras

    // Solicita ao usuário para digitar os pontos de vida do personagem (apenas dígitos numéricos)
    std::string healthPointsStr;
    do {
        std::cout << "Digite os pontos de vida do personagem (apenas dígitos numéricos): ";
        std::getline(std::cin, healthPointsStr); //lê a linha de entrada do usuario e armazena na variavel 'healthPointsStr'.
    } while (!containsOnlyDigits(healthPointsStr)); // repete o processo enquanto 'heatlhpointStr'contiver caracteres que não são apenas digitos numericos.
    character.healthPoints = std::stoi(healthPointsStr); // converter 'heatlhpointStr' para um valor inteiro  e armazena na variavel 'heatlhpointStr' da ficha da personagem.
    

    // Solicita ao usuário para digitar os pontos de ataque do personagem (apenas dígitos numéricos)
    std::string attackPointsStr;
    do {
        std::cout << "Digite os pontos de ataque do personagem (apenas dígitos numéricos): ";
        std::getline(std::cin, attackPointsStr); //lê a linha de entrada do usuario e armazena na variavel 'attackPointsStr'.
    } while (!containsOnlyDigits(attackPointsStr)); //repete o processo enquanto 'attackPointsStr' contiver caracteres que não são apenas digitos numericos. 
    character.attackPoints = std::stoi(attackPointsStr); // converter 'attackPointsStr' para um valor inteiro e amarzenar na variavel 'attackPointsStr' da ficha de personagem.


    int numSkills; //declaçao da variavel para armazenar o numero de habilidade do personagem.
    std::cout << "Quantas habilidades o personagem possui? ";
    std::cin >> numSkills; //solicita ao usuario a quantidade do personagem e lê o valor digitado.
    std::cin.ignore(); // Limpa o buffer de entrada

    for (int i = 0; i < numSkills; i++) {
        std::string skill; //declarção da variavel para armazenar cada habilidade digitada pelo usuario.
        std::cout << "Digite a habilidade " << i + 1 << ": ";
        std::getline(std::cin, skill); // Solicita ao usuário que digite a habilidade atual (i + 1) e lê a entrada.
        character.addSkill(skill); //adiciona a habilidade ao personagem.
    }

    int numEquipments; //declaraçao da variavel para armazenar o numero de equipamentos do personagem.
    std::cout << "Quantos equipamentos o personagem possui? ";
    std::cin >> numEquipments; // Solicita ao usuário a quantidade de equipamentos do personagem e lê o valor digitado.
    std::cin.ignore(); // Limpa o buffer de entrada

    for (int i = 0; i < numEquipments; i++) {
        Equipment equip; // Declaração do objeto de classe "Equipment" para armazenar as informações do equipamento atual.
        std::cout << "Digite o nome do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.name);  // Solicita ao usuário que digite o nome do equipamento atual (i + 1) e lê a entrada.

        std::cout << "Digite o tipo do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.type);  // Solicita ao usuário que digite o tipo do equipamento atual (i + 1) e lê a entrada.

        std::cout << "Digite o atributo do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.attribute);  // Solicita ao usuário que digite o atributo  do equipamento atual (i + 1) e lê a entrada.

        std::cout << "Digite o valor do equipamento " << i + 1 << ": ";
        std::getline(std::cin, equip.value);  // Solicita ao usuário que digite o valor do equipamento atual (i + 1) e lê a entrada.

        character.addEquipment(equip); 
    }

    // Exibindo a ficha completa do personagem
    std::cout << "\nFicha de Personagem:" << std::endl; //exibe o cabeçalho da ficha do personagem.
    std::cout << "Nome: " << character.name << std::endl; //exibe o nome do personagem
    std::cout << "Classe: " << character.characterClass << std::endl; //exibe a classe do personagem.
    std::cout << "Nível: " << character.level << std::endl; //exibe o nível do personagem.
    std::cout << "Raça: " << character.race << std::endl; //exibe a raça do personagem
    std::cout << "Pontos de Vida: " << character.healthPoints << std::endl; //exibe o pronto vida do personagem.
    std::cout << "Pontos de Ataque: " << character.attackPoints << std::endl; //exibe os pontosa de ataque do personagem.

    std::cout << "Habilidades:" << std::endl;
    for (const auto& skill : character.skills) { //loop para exibir cada habilidade do personagem.
        std::cout << "- " << skill << std::endl; //exibe cada habilidade precedida de um hifen.
    }

    std::cout << "Equipamentos:" << std::endl; //exibe o titulo dos equipamentos do personagem 
    for (const auto& equip : character.equipment) { //loop para exibir cada equipamentos do personagem.
        std::cout << "- " << equip.name << " (" << equip.type << ")" << std::endl; //exibe o nome e tipo do equipamento
        std::cout << "  Atributo: " << equip.attribute << ", Valor: " << equip.value << std::endl; //exibe o atributo e o valor do equipamento.
    }

    return 0; //retorno bem- sucedido.
}