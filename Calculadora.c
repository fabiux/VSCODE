#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}
