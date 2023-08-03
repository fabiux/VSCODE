#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estrutura básica para o Item do equipamento
struct Item {
    string name;
    int power;
};

// Classe do Personagem
class Character {
private:
    string name;
    string characterClass;
    int level;
    vector<Item> equipment;

public:
    Character(string name, string characterClass, int level) {
        this->name = name;
        this->characterClass = characterClass;
        this->level = level;
    }

    // Função para adicionar itens ao equipamento do personagem
    void addItem(string itemName, int itemPower) {
        Item newItem;
        newItem.name = itemName;
        newItem.power = itemPower;
        equipment.push_back(newItem);
    }

    // Função para remover itens da lista de equipamentos com base no nome do item
    void removeItem(string itemName) {
        for (auto it = equipment.begin(); it != equipment.end(); ++it) {
            if (it->name == itemName) {
                equipment.erase(it);
                break;
            }
        }
    }

    // Função para exibir todos os itens da lista de equipamentos na tela
    void displayEquipment() {
        cout << "Equipamentos de " << name << ":" << endl;
        for (const auto& item : equipment) {
            cout << "- " << item.name << " (Poder: " << item.power << ")" << endl;
        }
        cout << endl;
    }

    // Função para buscar um item específico na lista de equipamentos com base no nome
    Item* searchItem(string itemName) {
        for (auto& item : equipment) {
            if (item.name == itemName) {
                return &item;
            }
        }
        return nullptr;
    }
};

int main() {
    // Exemplo de utilização do programa
    Character player("Aventureiro Destemido", "Guerreiro", 5);
    
    player.addItem("Espada Mágica", 15);
    player.addItem("Armadura Lendária", 25);
    player.addItem("Poção de Cura", 10);

    player.displayEquipment();

    player.removeItem("Armadura Lendária");

    Item* searchedItem = player.searchItem("Espada Mágica");
    if (searchedItem) {
        cout << "O item '" << searchedItem->name << "' foi encontrado! Poder: " << searchedItem->power << endl;
    } else {
        cout << "Item não encontrado na lista de equipamentos." << endl;
    }

    return 0;
}
