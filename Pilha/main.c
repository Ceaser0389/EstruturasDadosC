#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


struct prato{
  char cor;
  struct pessoa *prox;


};
typedef  struct prato Prato;

 Prato *pilha;

 void add(char cor){
 Prato *p = (Prato*) malloc(sizeof(Prato));
 p-> cor =cor;
 p-> prox = pilha;
 pilha = p;

 }

 void rem(){
   if(pilha==NULL){
    printf("Pilha vazia");
   }else{
      pilha = pilha -> prox;
    }

 }


void imprime (Prato *p){
   if(p!=NULL){
    printf("\n Cor do prato:%c", p->cor);
    imprime(p-> prox);
   }

}


int main()
{
setlocale(LC_ALL, "Portuguese");


 add('b');
 add('r');
 add('g');
 add('y');

 rem();

 Prato *pilhaAux =pilha;
 imprime(pilhaAux);


return 0;
}
