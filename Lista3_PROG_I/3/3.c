#include <stdio.h>
#include <locale.h>

void eh_multiplo(int a, int b, int *resp){

    int i;

    for(i=0;i<b;i++){

        if(vet[i] % a == 0){

            printf("Vet[%d] = %d é múltiplo de %d\n", i, vet[i], b);

        }

        else{

            printf("Vet[%d] = %d não é múltiplo de %d\n", i, vet[i], b);

        }

    }






}







int main(){

    setlocale(LC_ALL, "Portuguese");

    int x, y, i;

    printf("Digite um valor inteiro de X: ");
    scanf("%d", &x);

    printf("\nDigite um valor inteiro de Y: ");
    scanf("%d", &y);

    printf("\n");

    int vet[y];

    for(i=0;i<y;i++){

        printf("Digite o valor de VET[%d] = ", i);
        scanf("%d", &vet[i]);

    }


    return 0;
}
