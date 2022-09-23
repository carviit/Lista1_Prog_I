/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 02 - Exercício 01
*/

#include <stdio.h>
#include <locale.h>

int contaimpar(int n1, int n2){

    int nimpares, i;

    for(i=n1;i<=n2;i++){

        if(i % 2 != 0){

            nimpares++;
        }
    }

    return nimpares;
}

int main (){

    setlocale(LC_ALL, "Portuguese");

    int x, y, maior, menor;

    printf("Digite o valor de N1: ");
    scanf("%d", &x);

    printf("\nDigite o valor de N2: ");
    scanf("%d", &y);

    if(x>y){

        maior = x;
        menor = y;

    }else{

        maior = y;
        menor = x;
    }

    printf("\nO número de inteiros ímpares entre [%d] e [%d] = %d\n", menor, maior, contaimpar(menor,maior));

    return 0;
}
