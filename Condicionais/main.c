#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>
int main()
{
     setlocale(LC_ALL, "Portuguese");

     int a;
     printf("Digite um  n�mero: ");
     scanf("%d",&a);

     if(a!= 0){
        printf("A varia�vel 'a' � difernete de zero");
     }
     else{
        printf("A vari�vel 'a' � zero");
     }












    return 0;
}
