#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>
int main()
{
   setlocale(LC_ALL, "Portuguese");


     char letra;

     printf("\n Digite  uma letra: \n");
     scanf("%c",&letra);

     printf("O valor da variavel 'letra' é: %c",letra);


    return 0;
}
