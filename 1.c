#include <stdio.h>

int main () {
    int numero = 10;

    if (numero > 0) {
        printf(" O numero é positivo. \n");
    } else {
        printf("O numero é positivo. \n");
    }

int contador = 0;
while (contador < 5) {
    printf("contador: %d\n", contador);
    contador++;
}

int i;
for (i = 0; i < 5; i++) {
    printf(" iteração do loop for: %d\n", i);
}
return 0;
}