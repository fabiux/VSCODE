#include <stdio.h>
#include <string.h>

int main() {
    char nome[20]; // Declaração de uma string

    strcpy(nome, "john"); // Atribuição de valor a uma string

    char sobrenome[20] = "Doe"; // Declaração e inicialização de uma string

    strcat(nome, " "); // Concatenação de strings
    strcat(nome, sobrenome);

    printf("Nome completo: %s\n", nome); // Exibição de uma string

    return 0;
}
