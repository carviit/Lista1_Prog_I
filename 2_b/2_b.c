/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 22.1.8120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 2_b)
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int masculino = 0, feminino = 0, naobinario = 0, outros = 0;
    char g = 67;

        while(g != 81){

            printf("Digite seu gênero \"M\" para Masculino \"F\" para Feminino \"N\" para Não Binário \"O\" para Outros: ");
            fflush(stdin);
            g = getchar();

                if(g != 77 && g != 70 && g != 79 && g != 78 && g != 109 && g != 110 && g != 111 && g != 102 && g != 81){

                    printf("\n\t\t****ATENÇÃO ** -Gênero inválido digite novamente- ** ATENÇÃO****\n\n");
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

                        else if(g == 'O' || g == 'o'){

                        outros++;
                    }
        }

        printf("\nMasculino = %d\n", masculino);
        printf("Feminino = %d\n", feminino);
        printf("Não Binário = %d\n", naobinario);
        printf("Outros = %d\n", outros);

    return 0;
}
