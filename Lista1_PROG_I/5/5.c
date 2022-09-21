#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 22.1.8120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 5
*/

int main(){

    system("cls");

    int x, i, j, fatorial;
    float cima, euler=1.0;

    printf("Digite o valor de \"x\": ");
    scanf("%d", &x);

    for(i=1;i<=10;i++){

        cima = pow(x,i);
        fatorial= 1;

        for(j=1;j<=i;j++){

            fatorial *= j;
        }

     euler += cima / fatorial;

    }

    printf("\nO valor de e^%d = %.2f\n", x, euler);

    return 0;
}
