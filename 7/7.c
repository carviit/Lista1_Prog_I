#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 22.1.8120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 7
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, j, expo=0, sinal = -1;
    float x;
    double resultado = 0, fatorial=1;

    printf("Digite o valor de x em radianos: ");
    scanf("%f", &x);


    for(i=0;i<=5;i++){

        fatorial = 1;

        for(j=1;j<=expo;j++){

            fatorial*=j;
        }

        sinal*=-1;
        resultado += sinal*pow(x, expo) / fatorial;

        expo+=2;

    }

    printf("\nO cosseno de %.4f é igual a %.5f\n", x, resultado);


    return 0;
}
