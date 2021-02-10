#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


struct pessoa{
  int senha;
  struct pessoa *prox;


};
typedef  struct pessoa Pessoa;

Pessoa *fila;
void add(int senha){

   Pessoa  *p =(Pessoa*) malloc(sizeof(Pessoa));
   p -> senha = senha;
   p-> prox = NULL;

  if(fila ==NULL){
    fila = p;
  }
   else{
     Pessoa * filaAux = fila;
     while(filaAux->prox != NULL){
          filaAux = filaAux -> prox;
        }
        filaAux-> prox =p;
   }

}

void rem(){
  if(fila ==NULL){
   printf("fila vazia");
  }else{
    fila = fila->prox;
  }

}


void imprime (Pessoa *f){
   if(f !=NULL){
    printf("\n Senha da Pessoa:%d ", f->senha);
    imprime(f-> prox);
   }

}




int main()
{
setlocale(LC_ALL, "Portuguese");


add(5);
add(8);
add(10);
add(22);

Pessoa *filaAux =fila;
imprime(filaAux);

printf("\n");
rem();

filaAux =fila;
imprime(filaAux);

printf("\n");

rem();

filaAux =fila;
imprime(filaAux);

return 0;
}
