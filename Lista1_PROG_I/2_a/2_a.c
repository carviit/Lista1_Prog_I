/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 22.1.8120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista de Exerc�cios 01 - Exerc�cio 2_a)
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int masculino = 0, feminino = 0,   naobinario = 0, outros = 0;
    char g;
    int i;

        for(i=1;i<=3;i++){

            printf("Digite seu g�nero \"M\" para Masculino \"F\" para Feminino \"N\" para N�o Bin�rio \"O\" para Outros: ");
            fflush(stdin);
            g = getchar();

            if(g != 77 && g != 70 && g != 79 && g != 78 && g != 109 && g != 110 && g != 111 && g != 102){

                printf("\n\t\t****ATEN��O ** -G�nero inv�lido digite novamente- ** ATEN��O****\n\n");
                i--;
                outros--;
            }

            if(g == 'M' || g == 'm'){

                masculino++;
            }
                else if(g == 'F' || g  == 'f'){

                feminino++;
                }

                else if(g == 'N' || g == 'n'){

                naobinario++;
                }

            else{

                outros++;
            }

        }

        printf("\nMasculino = %d\n", masculino);
        printf("Feminino = %d\n", feminino);
        printf("N�o Bin�rio = %d\n", naobinario);
        printf("Outros = %d\n", outros);

return 0;
}
