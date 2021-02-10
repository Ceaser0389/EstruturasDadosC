#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

   int a=0;

   printf("\n Laço while \n");
   while(a<5){
    printf("\n Variavel 'a' é: %d \n",a);
    a++;
   }

   printf("\n Laço for \n");

   for(int i=0 ; i<4 ; i++){

    printf("\n variavel 'a' é: %d" ,i);
   }




    return 0;
}
