#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

struct pessoa{
  int idade;
  float altura;
};

typedef struct  pessoa Pessoa;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  Pessoa p;
  p.idade =5;
  p.altura=1.65;

  printf(" A altura da pessoa é %.2f  " ,p.altura);
  printf("\n A idade da pessoa é %.2f " ,p.idade);



    return 0;
}
