#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

struct ponto{
 float x;
 float y;
 struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos;

void add(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p-> x =x;
    p-> y =y;
    p->prox =listaPontos;

   listaPontos = p;
}

int main()
{
setlocale(LC_ALL, "Portuguese");

  add(1,5);
  add(2,7);
  add(5,3);

  printf("%.0f",listaPontos->prox->prox->x);



    return 0;
}
