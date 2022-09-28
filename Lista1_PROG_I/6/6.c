#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 22.1.8120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 6
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, j, expo=1;
    float x, resultado=0, fatorial, cima;

    printf("Digite o angulo em radianos: ");
    scanf("%f", &x);

    for(i=1;i<=5;i++){

        fatorial = 1;

        for(j=1;j<=expo;j++){

           fatorial*=j;

            if(i%2==0){

                resultado = resultado - pow(x, expo) / fatorial;

            } else{

               resultado = resultado + pow(x, expo) / fatorial;
            }

        }

        expo+=2;
    }


    printf("\nO seno de %.2f é igual a %.2f\n", x, resultado);

    return 0;

}
