#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

   int a=0;

   printf("\n La�o while \n");
   while(a<5){
    printf("\n Variavel 'a' �: %d \n",a);
    a++;
   }

   printf("\n La�o for \n");

   for(int i=0 ; i<4 ; i++){

    printf("\n variavel 'a' �: %d" ,i);
   }




    return 0;
}
