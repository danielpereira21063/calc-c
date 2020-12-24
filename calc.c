#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
   char continuar;
   bool execucao = true;
   while(execucao) {
      float n1, n2, result;
      char operacao;
      printf("Calculadora\n");
      printf("-----------------------------------------------------------------------\n");
      printf("Digite o primeiro valor: ");
      scanf("%f", &n1);
      printf("\nDigite o segundo valor: ");
      scanf("%f", &n2);
      while(operacao != 'x' && operacao != '+' && operacao != '-' && operacao != '/'){
         printf("Qual operacao deseja fazer? [x] [+] [-] [/]: ");
         scanf(" %c", &operacao);
      }
      switch(operacao){
         case 'x':
            result = n1 * n2;
         break;
         case '+':
            result = n1 + n2;
         break;
         case '-':
            result = n1 - n2;
         break;
         case '/':
            result = n1 / n2;
         break;
         default:
            printf("\nOperacao invalida");
      }
      printf("-----------------------------------------------------------------------\n");
      printf("Resultado: \n");
      printf("Operacao: %.1f %c %.1f = %.1f\n\n", n1, operacao, n2, result);
      printf("\n\n\n");
      continuar = ' ';
      while(continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n') {
         printf("Deseja continuar? S/N ");
         scanf(" %c", &continuar);
      }
      if(continuar == 'n' || continuar == 'N') {
         execucao = false;
      }
   }
   // system("pause");
}