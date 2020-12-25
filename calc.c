#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main(){
   bool execucao = true;
   while(execucao) {
      float n1, n2, result;
      char operacao = ' ';
      char continuar = ' ';
      printf("\nCalculadora\n");
      printf("-----------------------------------------------------------------------\n");
      printf("Digite o primeiro valor: ");
      scanf("%f", &n1);
      printf("\nDigite o segundo valor: ");
      scanf("%f", &n2);
      printf("\n");
      while(operacao != 'x' && operacao != '+' && operacao != '-' && operacao != '/'){
         printf("Qual operacao deseja fazer? [x] [+] [-] [/]: ");
         scanf(" %c", &operacao);
         if(operacao != 'x' && operacao != '+' && operacao != '-' && operacao != '/'){
            printf("\n'%c' nao e uma operacao valida\n", operacao);
         }
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
      printf("\nOperacao: %.1f %c %.1f = %.1f\n\n", n1, operacao, n2, result);
      printf("\n\n");
      while(continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n'){
         printf("Deseja continuar? S/N ");
         scanf(" %c", &continuar);
      }
      if(continuar == 'n' || continuar == 'N'){
         execucao = false;
         printf("Fim da execucao do programa.\nEspero ve-lo(a) de novo em breve :)\n");
      }
   }
   system("pause");
}