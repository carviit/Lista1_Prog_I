/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 02 - Exercício 06
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void strinv(char str[]){

    int comprimento, i;

    comprimento = strlen(str) - 1;

    printf("\n");

    for(i=comprimento;i>=0;i--){

        printf("%c", str[i]);

    }

    printf("\n");

}

int main(){

    char palavra [1000];

    printf("Digite a palavra: ");
    scanf("%s", &palavra);

    strinv(palavra);

    return 0;
}
