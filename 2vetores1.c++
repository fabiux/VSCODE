#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    const int tamanhoVetor = 5;
    string paises[tamanhoVetor] = {
         "Alemanha",
         "Brasil 2023",
         "Estados unidos",
         "Japão",
         "Noruega",
    };

    // ordenando os nomes dos paises em ordem alfabetica
    sort(paises, paises + tamanhoVetor);

    //exibe os nomes dos paises em ordem alfabetica
    cout << "Paises que já venceram a copa do mundo feminina ( em ordem alfabetica):/n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << paises[i] << endl;
    }

    return 0;
}
