#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int *p;
int val =5;

int main()
{
 setlocale(LC_ALL, "Portuguese");

 p =&val;
 printf("O valor de apontado por p é %d",*p);




 return 0;
}




