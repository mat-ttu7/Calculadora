#include <stdio.h>
int main() {
   int valor1, valor2, valorDaSoma;

   printf("Digite dois valores: ");
   scanf("%d%d", &valor1, &valor2);
   valorDaSoma = valor1 + valor2;
   printf( "O valor da soma e : %d", valorDaSoma);
   return 0;
}
