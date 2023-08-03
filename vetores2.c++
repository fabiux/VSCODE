#include <iostream>
#include <string>
using namespace std;

int main() {
    // Cria um vetor de strings para armazenar o nome de 5 frutas
    string frutas[5];

    // Preenche o vetor com o nome de cada fruta 
    for (int i = 0; i <5; i++) {
        cout << "Digite o nome da fruta  " << i + 1 << ": ";
        getline(cin, frutas[i]);
    }

    // Exibe o nome de cada fruta em uma linha separada
    cout << "Nomes das frutas: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << frutas[i] << endl;
    }

    return 0;
}
