#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> // For std::transform

using namespace std;

string gerarPalavraSecreta(const vector<string>& palavras) {
    if (palavras.empty()) {
        cout << "O vetor de palavras está vazio.\n";
        return "";
    }

    srand(time(0)); // Inicializa o gerador de números aleatórios com base no tempo atual
    int indiceAleatorio = rand() % palavras.size(); // Gera um índice aleatório dentro do tamanho do vetor

    return palavras[indiceAleatorio];
}

vector<string> lerDicasDoArquivo(const string& nomeArquivo) {
    vector<string> dicas;
    ifstream arquivo(nomeArquivo);

    if (arquivo.is_open()) {
        string linha;
        while (getline(arquivo, linha)) {
            dicas.push_back(linha);
        }
        arquivo.close();
    } else {
        cout << "Não foi possível abrir o arquivo de dicas.\n";
    }

    return dicas;
}

int main() {
    vector<string> palavras = {"banana", "laranja", "abacaxi", "uva", "morango"};
    string dicasArquivo = "dicas.txt"; // Nome do arquivo de dicas (colocar o nome correto do arquivo se for diferente)
    vector<string> dicas = lerDicasDoArquivo(dicasArquivo);

    string palavraSecreta = gerarPalavraSecreta(palavras);

    if (!palavraSecreta.empty()) {
        cout << "Bem-vindo ao jogo de adivinhação de palavras!\n";
        cout << "Tente adivinhar a palavra secreta.\n";

        string dica;
        if (!dicas.empty()) {
            srand(time(0));
            int indiceDicaAleatoria = rand() % dicas.size();
            dica = dicas[indiceDicaAleatoria];
            cout << "Dica: " << dica << endl;
        }

        string palpite;
        do {
            cout << "Digite seu palpite: ";
            cin >> palpite;

            // Convert user input to lowercase for case-insensitive comparison
            std::transform(palpite.begin(), palpite.end(), palpite.begin(), ::tolower);

            if (palavraSecreta == palpite) {
                cout << "Parabéns! Você acertou a palavra secreta: " << palavraSecreta << endl;
                break;
            } else {
                cout << "Palavra incorreta. Tente novamente.\n";
            }
        } while (true);
    }

    return 0;
}

