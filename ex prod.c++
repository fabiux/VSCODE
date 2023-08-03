#include <iostream>
#include <string>

using namespace std;

// Definindo a estrutura de dados para o Produto
struct Produto {
    string nome;
    int codigo;
    float preco;
    int quantidade;
};

// Declarando o vetor de estoque e variáveis auxiliares
Produto estoque[100];
int totalProdutos = 0;

// Função para registrar a entrada de um produto no estoque
void registrarEntrada(string nome, int codigo, float preco, int quantidade) {
    // Adicionando um novo produto ao estoque
    estoque[totalProdutos].nome = nome;
    estoque[totalProdutos].codigo = codigo;
    estoque[totalProdutos].preco = preco;
    estoque[totalProdutos].quantidade = quantidade;
    totalProdutos++;
}

// Função para registrar a venda de um produto
void registrarVenda(int codigo) {
    // Verificando se o produto existe no estoque
    int indiceProduto = -1;
    for (int i = 0; i < totalProdutos; i++) {
        if (estoque[i].codigo == codigo) {
            indiceProduto = i;
            break;
        }
    }

    // Se o produto não existir, exibe uma mensagem de erro
    if (indiceProduto == -1) {
        cout << "Produto não encontrado!" << endl;
        return;
    }

    // Se a quantidade do produto for maior que zero, decrementa a quantidade
    if (estoque[indiceProduto].quantidade > 0) {
        estoque[indiceProduto].quantidade--;
    } else {
        cout << "Produto esgotado!" << endl;
    }
}

// Função para gerar um relatório do estoque
void gerarRelatorio() {
    // Imprimindo um relatório do estoque
    for (int i = 0; i < totalProdutos; i++) {
        cout << "Nome: " << estoque[i].nome << endl;
        cout << "Código: " << estoque[i].codigo << endl;
        cout << "Quantidade: " << estoque[i].quantidade << endl;
        cout << "Preço: " << estoque[i].preco << endl;
        cout << "-----------------------------" << endl;
    }
}

// Função principal
int main() {
    int opcao;

    // Loop principal do programa
    while (true) {
        cout << "===== MENU =====" << endl;
        cout << "1. Registrar entrada de produto" << endl;
        cout << "2. Registrar venda de produto" << endl;
        cout << "3. Gerar relatório de estoque" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Realiza uma ação de acordo com a opção escolhida pelo usuário
        switch (opcao) {
            case 1: {
                // Registrar entrada de produto
                string nome;
                int codigo;
                float preco;
                int quantidade;

                cout << "Informe o nome do produto: ";
                cin >> nome;

                cout << "Informe o código do produto: ";
                cin >> codigo;

                cout << "Informe o preço do produto: ";
                cin >> preco;

                cout << "Informe a quantidade do produto: ";
                cin >> quantidade;

                registrarEntrada(nome, codigo, preco, quantidade);
                break;
            }

            case 2: {
                // Registrar venda de produto
                int codigo;

                cout << "Informe o código do produto: ";
                cin >> codigo;

                registrarVenda(codigo);
                break;
            }

            case 3:
                // Gerar relatório de estoque
                gerarRelatorio();
                break;

            case 4:
                cout << "Saindo..." << endl;
                return 0;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }

    return 0;
}
