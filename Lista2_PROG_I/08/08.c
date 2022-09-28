#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

     srand(time(NULL));

     int matriz[5][5], i, j, soma = 0, menor_linha = 999, maior_coluna = -1, aux1, aux2;

     for(i=0;i<5;i++){

        for(j=0;j<5;j++){

            matriz [i][j] = rand() % 10;
        }
     }

     for(i=0;i<5;i++){

        for(j=0;j<5;j++){

            printf("%3d ", matriz[i][j]);
        }

        printf("\n");
     }

    for(i=0;i<5;i++){

        soma = 0;

        for(j=0;j<5;j++){

            soma += matriz [i][j];
        }

        if(soma<menor_linha){

           menor_linha = soma;
           aux1 = i;

        }
     }

     for(j=0;j<5;j++){

        soma = 0;

        for(i=0;i<5;i++){

            soma += matriz [i][j];
        }

        if(soma>maior_coluna){

           maior_coluna = soma;
           aux2 = j;
        }
     }

     printf("===================================");

     printf("\nLinha com menor soma [%d] = %d\n\n", aux1, menor_linha);

     for(i=0;i<5;i++){

        printf("%d ", matriz[aux1][i]);
     }

     printf("\n===================================");

     printf("\nColuna com maior soma [%d] = %d\n\n", aux2, maior_coluna);

     for(i=0;i<5;i++){

        printf("%d ", matriz[i][aux2]);
     }

    printf("\n===================================");

    printf("\n");

    return 0;
}
