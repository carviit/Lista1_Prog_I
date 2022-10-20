#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void eh_multiplo(int a, int b, int *resp){

        if(a % b == 0){

            *resp = 1;
        }

        else{

            *resp = 0;
        }

    }

int main(){

    setlocale(LC_ALL, "Portuguese");

    int x, y, i, *vet, resp;

    printf("Digite um valor inteiro de X: ");
    scanf("%d", &x);

    printf("\nDigite um valor inteiro de Y: ");
    scanf("%d", &y);

    vet = (int*)malloc(y * sizeof(int));

    printf("\n");

        for(i=0;i<y;i++){

            printf("Digite o valor de Vet[%d] = ", i);
            scanf("%d", &vet[i]);

        }

        for(i=0;i<y;i++){

            eh_multiplo(vet[i], x, &resp);

            if (resp == 1) {
                
                printf("\n%d é múltiplo de %d\n", vet[i], x);
            }

            else{

                 printf("\n%d não é múltiplo de %d\n", vet[i], x);
            }

        }
        
        free(vet);

    return 0;
}

