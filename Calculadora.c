#include <stdio.h>
int main() {
   int valor1, valor2, valor3, valor4, valorDaSoma, valorDaSubtracao;

   printf("Digite dois valores: ");
   scanf("%d%d", &valor1, &valor2);
   valorDaSoma = valor1 + valor2;
   printf( "O valor da soma e : %d\n", valorDaSoma);
   
   printf("Digite dois valores: ");
   scanf("%d%d", &valor3, &valor4);
   valorDaSubtracao = valor3 - valor4;
   printf( "O valor da subtracao e : %d\n", valorDaSubtracao);
   return 0;
}
