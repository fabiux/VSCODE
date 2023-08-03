#include <stdio.h> //acrescentamos o espaçamento 

int main() { //acrescentamos o espaçamento 
   int num;
   printf("Digite um numero: ");
   scanf("%d", &num);
   if(num % 2 == 0)
        printf("%d eh um numero par\n", num);
   else
        printf("%d eh um numero impar\n", num);
   return 0; //corrigimos o nome 
}