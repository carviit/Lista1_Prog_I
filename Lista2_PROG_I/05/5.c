#include <stdio.h>

int main(){

    float n1 [10], n2 [10], media [10];
    int i, aluno = 1;

    for(i=0;i<=9;i++){

        printf("Digite a NOTA 1 do ALUNO %d: ", aluno);
        scanf("%f", &n1[i]);

        printf("Digite a NOTA 2 do ALUNO %d: ", aluno);
        scanf("%f", &n2[i]);

        aluno++;

        printf("\n");

        media[i] = ( n1[i] + n2[i] ) / 2;
    }

    aluno = 1;

    for(i=0;i<=9;i++){

        printf("Aluno %d: ", aluno);
        printf("\n nota 1: %.2f", n1[i]);
        printf("\n nota 2: %.2f", n2[i]);
        printf("\n media: %.2f", media[i]);

        printf("\n\n");

        aluno++;
    }

    return 0;
}
