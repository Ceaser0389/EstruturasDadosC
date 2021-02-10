#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int potencia(int base , int exp)
{
  if(exp ==1){
     return base;
    }
  return base*potencia(base,exp -1);
}



int main()
{

 setlocale(LC_ALL, "Portuguese");


 int v =potencia(2,4);

 printf("%d",v);








    return 0;
}
