/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 03 - Exercício 01
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int acharnum(int x[], int n, int y){

    int indice;

    if(x[n] == y && n>=0){

        indice = n;

        return indice;
    }

    else if(x[n]!= y){

        return acharnum(x, n-1, y);
    }

    else{

        return -1;
    }
}

int main (){

    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int tam, i, valor, indice;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vet[tam];

    for(i=0;i<tam;i++){

        vet[i] = rand() % 100;

    }

    printf("\n");

    printf("-----------------------------Valores do Vetor--------------------------------\n");

    for(i=0;i<tam;i++){

        printf("%d ", vet[i]);

    }

    printf("\n-----------------------------------------------------------------------------");

    printf("\n");

    printf("\nDigite o valor (0 a 100) que você deseja procurar no VETOR de %d posições: ", tam);
    scanf("%d", &valor);

    indice = acharnum(vet, tam, valor);

    if(indice!=-1){

    printf("\nO valor [%d] se encontra no índice Vetor[%d]\n", valor, indice);

    }

    else {

    printf("\nNão existe o valor [%d] no vetor, portanto [%d]\n", valor, indice);

    }

    return 0;
}
