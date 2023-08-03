#include <stdio.h> // alteramos o "funcio.h" por "stdio.h"

int main() {  // faltando o espaco entre "() e o {"
   int num;
   printf("Digite um numero:");
   scanf("%d", &num);
   for(int i = 1; i <=num; i++) { // acrescentei os espaços q estavam faltando e o "{"
   printf("%d\n", i);
   }
   return 0; // trocamos a letra "o" pela letra "u"
}
