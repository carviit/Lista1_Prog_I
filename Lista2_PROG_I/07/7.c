/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 2 - Exerc�cio 7
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int m[3][6], i, j, num;

    srand(time(NULL));

    for(i=0;i<3;i++){

        for(j=0;j<6;j++){

            m[i][j] = rand() % 20;
        }
    }

    printf("Matriz 3x6 com n�meros de 0 a 20 ale�torios\n\n");

    printf("========================\n");
    for(i=0;i<3;i++){

        for(j=0;j<6;j++){

            printf("%3d ", m[i][j]);
        }

        printf("\n");
    }
    printf("========================\n\n");

    printf("Digite um n�mero para multiplicar todos os elementos da matriz acima: ");
    scanf("%d", &num);

    for(i=0;i<3;i++){

        for(j=0;j<6;j++){

            m[i][j] = num * m[i][j];
        }
    }

    printf("\nResultado da Matriz ap�s a multiplica��o de todos os elementos por %d\n\n", num);
    printf("========================\n");
    for(i=0;i<3;i++){

        for(j=0;j<6;j++){

            printf("%3d ", m[i][j]);
        }

        printf("\n");
    }
    printf("========================\n");


    return 0;
}
