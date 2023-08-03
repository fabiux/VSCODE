#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estrutura para representar os equipamentos do personagem
struct Equipment {
    string name;
    string type;
    string attribute;
    int value;
};

// Classe do Personagem
class Character {
private:
    string name;
    string characterClass;
    int level;
    string race;
    int healthPoints;
    int attackPoints;
    vector<string> abilities;
    vector<Equipment> equipment;

public:
    // Construtor para inicializar o personagem
    Character(string name, string characterClass, int level, string race, int healthPoints, int attackPoints) {
        this->name = name;
        this->characterClass = characterClass;
        this->level = level;
        this->race = race;
        this->healthPoints = healthPoints;
        this->attackPoints = attackPoints;
    }

    // Função para adicionar habilidades ao personagem
    void addAbility(string ability) {
        abilities.push_back(ability);
    }

    // Função para adicionar itens à lista de equipamentos do personagem
    void addItem(string name, string type, string attribute, int value) {
        Equipment newItem;
        newItem.name = name;
        newItem.type = type;
        newItem.attribute = attribute;
        newItem.value = value;
        equipment.push_back(newItem);
    }

    // Função para remover itens da lista de equipamentos com base no nome do item
    bool removeItem(string itemName) {
        auto it = equipment.begin();
        while (it != equipment.end()) {
            if (it->name == itemName) {
                it = equipment.erase(it);
                return true;
            } else {
                ++it;
            }
        }
        return false;
    }

    // Função para exibir a ficha de personagem na tela
    void displayCharacterSheet() {
        cout << "Ficha do Personagem:" << endl;
        cout << "Nome: " << name << endl;
        cout << "Classe: " << characterClass << endl;
        cout << "Nível: " << level << endl;
        cout << "Raça: " << race << endl;
        cout << "Pontos de Vida: " << healthPoints << endl;
        cout << "Pontos de Ataque: " << attackPoints << endl;

        cout << "Habilidades:" << endl;
        for (const auto& ability : abilities) {
            cout << "- " << ability << endl;
        }

        cout << "Equipamentos:" << endl;
        for (const auto& item : equipment) {
            cout << "- " << item.name << " (Tipo: " << item.type << ", Atributo: " << item.attribute << ", Valor: " << item.value << ")" << endl;
        }

        cout << endl;
    }

    // Função para buscar um item específico na lista de equipamentos com base no nome
    const Equipment* searchItem(string itemName) const {
        for (const auto& item : equipment) {
            if (item.name == itemName) {
                return &item;
            }
        }
        return nullptr;
    }

};

int main() {
    // Exemplo de utilização do programa
    Character player("Aventureiro Destemido", "Guerreiro", 5, "Humano", 100, 50);

    player.addAbility("Golpe Poderoso");
    player.addAbility("Cura Mágica");

    player.addItem("Espada Mágica", "Arma", "Dano Físico", 20);
    player.addItem("Armadura Lendária", "Armadura", "Defesa", 30);

    player.displayCharacterSheet();

    if (player.removeItem("Armadura Lendária")) {
        cout << "Armadura Lendária removida da lista de equipamentos." << endl;
    } else {
        cout << "Armadura Lendária não encontrada na lista de equipamentos." << endl;
    }

    const Equipment* searchedItem = player.searchItem("Espada Mágica");
    if (searchedItem) {
        cout << "O item '" << searchedItem->name << "' foi encontrado! Tipo: " << searchedItem->type << ", Atributo: " << searchedItem->attribute << ", Valor: " << searchedItem->value << endl;
    } else {
        cout << "Item não encontrado na lista de equipamentos." << endl;
    }

    return 0;
}
