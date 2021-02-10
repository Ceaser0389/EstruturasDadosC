#include <stdio.h>
#include <stdlib.h>
# include <Locale.h>

int mat[2] [3];

int main()
{
   setlocale(LC_ALL, "Portuguese");

    for(int i=0 ; i<2 ; i++){

        for(int j=0 ; j<3 ;j++){
            printf("Digite um numero:");
            scanf("%d",&mat[i][j]);
        }
    }


    for(int i=0 ; i<2 ; i++){

        for(int j=0 ; j<3 ;j++){
          printf("\n O valor de  mat[%d][%d] = %d ",i ,j,mat[i][j]);
        }
    }














    return 0;
}
