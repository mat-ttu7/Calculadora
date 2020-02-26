#include <stdio.h>
int main() {
   int valor1, valor2, valor3, valor4, valor5, valor6, valorDaSoma, valorDaSubtracao, valorDaMultiplicacao;
   float valor7, valor8, valorDaDivisao;

   printf("Digite dois valores: ");
   scanf("%d%d", &valor1, &valor2);
   valorDaSoma = valor1 + valor2;
   printf( "O valor da soma e : %d\n", valorDaSoma);
   
   printf("Digite dois valores: ");
   scanf("%d%d", &valor3, &valor4);
   valorDaSubtracao = valor3 - valor4;
   printf( "O valor da subtracao e : %d\n", valorDaSubtracao);
   
   printf("Digite dois valores: ");
   scanf("%d%d", &valor5, &valor6);
   valorDaMultiplicacao = valor5 * valor6;
   printf( "O valor da multiplicacao e : %d\n", valorDaMultiplicacao);
   
   printf("Digite dois valores: ");
   scanf("%f%f", &valor7, &valor8);
   valorDaDivisao = valor7 / valor8;
   printf( "O valor da divisao e : %.2f\n", valorDaDivisao);
   return 0;
}
