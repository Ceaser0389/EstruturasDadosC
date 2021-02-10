#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int soma (int a , int b){
  int s = a+b;
  return s;
}

int subtracao (int a , int b){
 int s = a-b;
 return s;
}



int main()
{
  setlocale(LC_ALL, "Portuguese");
   int n1, n2 , op , res;
   int fim =0;

   while(fim==0){

        printf("\n Escolha a operação: \n");
        printf("\n Opção: 1 Adição: \n");
        printf("\n Opção: 2 Subtração: \n");
        scanf("%d",&op);


        printf("Digite um valor:" );
        scanf("%d",&n1);

        printf("Digite um valor:" );
        scanf("%d",&n2);



        if(op==1){
            res = soma(n1,n2);
        }else{
          res= subtracao(n1,n2);
        }


         printf("O resultado é: %d \n",res );
         printf("\n Opção 0 continuar \n" );
         printf("\n Opção 1 parar  \n" );
         scanf("%d",&fim);
   }

    return 0;
}
