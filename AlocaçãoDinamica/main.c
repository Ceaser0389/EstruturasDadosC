#include <stdio.h>
#include <Locale.h>
#include <stdlib.h>  //biblioteca de malloc
struct ponto{

float x;
float y;

};
typedef struct ponto Ponto;


int main()
{
   setlocale(LC_ALL, "Portuguese");

   Ponto *p= (Ponto*)
   malloc(sizeof(Ponto));    ///tamanho mais o tipo de dado
   p->x =1;
   p->y =5;

   printf("Ponto = (%f ,%f) " ,p->x,p->y);









   return 0;
}
