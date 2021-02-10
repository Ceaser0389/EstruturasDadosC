#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>
int main()
{
     setlocale(LC_ALL, "Portuguese");

     int a;
     printf("Digite um  número: ");
     scanf("%d",&a);

     if(a!= 0){
        printf("A variaável 'a' é difernete de zero");
     }
     else{
        printf("A variável 'a' é zero");
     }












    return 0;
}
