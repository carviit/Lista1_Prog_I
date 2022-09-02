#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, j, x, cima, bol=1;
    float seno, fatorial;

    printf("Digite o valor do ângulo em radianos: ");
    scanf("%d", &x);

        for(i=1;i<=20;i+2){

            cima = pow(x,i);

            fatorial = 1;

                for(j=i;j<=i;j+2){


                    fatorial*=j;
                }

        }

            printf("\nO valor de sen(%d) = %.3f\n", x, seno);

    return 0;

}
