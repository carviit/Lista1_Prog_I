#include <stdio.h>
#include <locale.h>

void ler_notas(float n1[],float n2[], int n){

    int aluno = 1, i;

    for(i=0;i<10;i++){

        printf("Digite a [NOTA 1] do ALUNO %d: ", aluno);
        scanf("%f", &n1[i]);

        printf("\nDigite a [NOTA 2] do ALUNO %d: ", aluno);
        scanf("%f", &n2[i]);

        printf("=================================\n");

        aluno++;
    }
}

void calcular_media(float n1[], float n2[], float media [], int n){

    int i;

    for(i=0;i<10;i++){

        media[i] = (n1[i] + n2[i]) / 2;

    }
}

void imprimir_notas(float n1[], float n2[], float media [], int n){

    int i, aluno = 1;

    for(i=0;i<10;i++){

        printf("Aluno %d:", aluno);
        printf(" nota 1: %.2f", n1[i]);
        printf("\n nota 2: %.2f", n2[i]);
        printf("\n media: %.2f", media[i]);

     aluno++;

     printf("\n\n");

    }
}

int main(){

    int n = 10;
    float n1[n], n2[n], media[n];

    ler_notas(n1, n2, n);

    calcular_media(n1, n2, media, n);

    imprimir_notas(n1, n2, media, n);

    return 0;
}
