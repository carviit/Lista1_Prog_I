#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vet1 [10], vet2 [10], vetresultante[10], i;

    for(i=0;i<=9;i++){

        printf("Digite o valor do Vetor1 [%d]:  ", i);
        scanf("%d", &vet1[i]);
        printf("\n");
    }

    printf("==================================");
    printf("\n\n");

    for(i=0;i<=9;i++){

        printf("Digite o valor do Vetor2 [%d]:  ", i);
        scanf("%d", &vet2[i]);
        printf("\n");
    }

    for(i=0;i<=9;i++){

        vetresultante[i] = vet1[i] * vet2[i];
    }

    printf("==================================");
    printf("\n\n");

    for(i=0;i<=9;i++){

        printf("Vetresultante[%d] = %d\n", i, vetresultante[i]);
    }

    return 0;
}
