#include <iostream>
using namespace std;

void dica_letra() {
    cout << "Digite uma letra entre A e Z." << endl;
}

int main() {
    dica_letra();
    char letra_chute;
    cin >> letra_chute;

    letra_chute = toupper(letra_chute);

    if (!isalpha(letra_chute) || letra_chute < 'A' || letra_chute > 'Z') {
        cout << "Por favor, digite apenas uma letra válida." << endl;
        return 1;
    }

    cout << "Boa escolha!" << endl;

    return 0;
}
