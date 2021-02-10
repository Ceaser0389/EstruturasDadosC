#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int v[4];

float v1[3];


int main()
{
   setlocale(LC_ALL, "Portuguese");

   v[0]= 45;
   v[1]= 78;
   v[2]= 9;
   v[3]= 5;

   for(int i=0 ; i<3 ; i++){
    printf("Digite um valor: ");
    scanf("%f",&v1[i]);
   }


   for(int i=0 ; i<3 ; i++){
    printf("\n O valor de v1[%d] = %.1f",i,v1[i]);
   }


    return 0;
}
