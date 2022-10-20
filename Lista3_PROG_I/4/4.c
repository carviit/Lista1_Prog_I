#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void ler_matriz(int ordem, int **matriz){

    int i, j;

    for(i=0;i<ordem;i++){

        for(j=0;j<ordem;j++){

            printf("Digite o valor de Matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matrizoriginal(int **mat, int ord){

    int i, j;

    printf("\n");

    printf("------Matriz Original---------\n\n");

    for(i=0;i<ord;i++){

        for(j=0;j<ord;j++){

            printf("%d ", mat[i][j]);

        }

        printf("\n");
    }
}

void calculo_escalar(int esc, int ord, int **mat, int **matcalculada){

    int i, j;

    for(i=0;i<ord;i++){

        for(j=0;j<ord;j++){

            matcalculada[i][j] = esc * mat[i][j];
        }
    }
}

void imprimir_matrizcalculada(int **mat, int ord){

    int i, j;

    printf("\n------Matriz Calculada--------\n\n");

    for(i=0;i<ord;i++){

        for(j=0;j<ord;j++){

            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int ordem, escalar, **matriz, **matrizcalculada, i, j;

    printf("Digite a ordem da matriz quadrada(Ex: 5 será 5x5): ");
    scanf("%d", &ordem);

    printf("\nDigite o valor inteiro de um escalar: ");
    scanf("%d", &escalar);

    printf("\n");

    matriz = (int **)malloc(ordem * sizeof(int*));

    for(i=0;i<ordem;i++){

        matriz[i] = (int *)malloc(ordem * sizeof(int));

    }

    matrizcalculada = (int **)malloc(ordem * sizeof(int*));

    for(i=0;i<ordem;i++){

        matrizcalculada[i] = (int *)malloc(ordem * sizeof(int));

    }

    ler_matriz(ordem, matriz);

    imprimir_matrizoriginal(matriz, ordem);

    calculo_escalar(escalar, ordem, matriz, matrizcalculada);

    imprimir_matrizcalculada(matrizcalculada, ordem);

    for (i = 0; i < ordem; i++){

        free(matriz[i]);
        free(matrizcalculada[i]);
    }

    free(matriz);
    free(matrizcalculada);

    return 0;
}
