#include <stdio.h>
#include <locale.h>

void ler_matriz(int x, int matriz[x][x]){

    int i, j;

    for(i=0;i<x;i++){

        for(j=0;j<x;j++){

            printf("Digite o valor de Matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }
}

void calculo_escalar(int escalar, int ordem){








}



int main(){

    setlocale(LC_ALL, "Portuguese");

    int ordem, escalar;

    printf("Digite a ordem da matriz quadrada(Ex: 5 será 5x5): ");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];

    printf("\nDigite o valor inteiro de um escalar: ");
    scanf("%d", &escalar);

    printf("\n");

    ler_matriz(ordem, matriz[ordem][ordem]);

    return 0;
}
