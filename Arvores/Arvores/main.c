#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

// estrutura
struct nodo
{
  int valor;
  struct  nodo *esq;
  struct  nodo *dir;

};
typedef struct nodo Nodo;

Nodo* create(int valor)
{
  Nodo *n = malloc(sizeof(Nodo));
   n-> valor = valor;
   n-> esq = NULL;
   n-> dir = NULL;
   return n;

}
// funcao de inserir na arvore
void add(Nodo *n, int valor)
{
    if(valor < n->valor)
    {
        if(n->esq ==NULL)
        {
         n->esq = create(valor);
        }
        else
        {
         add(n->esq,valor);
        }

    }
    else
    {
        if(n->dir == NULL)
        {
            n->dir = create(valor);
        }
        else
        {
            add(n->dir,valor);
        }
    }
}

// funcao de imprimir na arvore
void imprimir (Nodo *n)
{
    if(n == NULL)
    {
     return;
    }
    printf("\n%d" ,n->valor);
    imprimir(n->esq);
    imprimir(n->dir);
}

// funcao de remover na arvore
void rem(Nodo *n , int valor)
{
    Nodo *filho = n;
    Nodo *pai;
    do
    {
     pai = filho;
       if(valor < filho->valor)
       {
           filho =filho ->esq;
       }
       else if(valor > filho ->valor)
       {
           filho=filho->dir;
       }

    } while(filho!= NULL && filho->valor!=valor);

   if(filho != NULL)
   {
       if(filho->esq ==NULL && filho->dir ==NULL) // caso: nodo não tem filhos
        if(pai ->esq == filho)
       {
           pai->esq ==NULL;
       }
       if(pai->dir ==filho)
       {
            pai->dir ==NULL;
       }

       if(filho->esq != NULL && filho->dir != NULL) // caso2 : nodo filho tem um filho a esquerda
       {
           if(pai->esq ==filho)
           {
               pai->esq = filho->esq;
           }

           if(pai->dir ==filho)
           {
               pai->dir = filho->esq;
           }

       }
         if(filho->dir != NULL && filho->esq != NULL) // caso2 : nodo filho tem um filho a direita
       {
           if(pai->esq ==filho)
           {
               pai->esq = filho->dir;
           }

           if(pai->dir ==filho)
           {
               pai->dir = filho->dir;
           }
       }
   }
    if(filho->esq != NULL && filho->dir !=NULL) // caso3: nodo filho tem 2 filhos
    {
        if(filho->esq->dir == NULL)
        {
            filho->valor = filho->esq->valor;
        }
        else
        {
            Nodo *p  =filho->esq;
            Nodo *aux =p;
            while(p->dir != NULL)
            {
                aux =p;
                p = p->dir;
            }
            aux->dir =NULL;
            filho->valor = p->valor;
        }
    }

}


int main()
{
   setlocale(LC_ALL, "Portuguese");

  Nodo *root = create(5);

  add(root,2);
  add(root,1);
  add(root,8);
  add(root,4);


  rem(root,2);

   imprimir(root);
    return 0;
}
