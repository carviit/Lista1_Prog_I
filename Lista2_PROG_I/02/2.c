/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 02 - Exercício 2
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int dado(){

    int nsorteado;

    nsorteado = (rand() % 6) + 1;

    return nsorteado;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    srand (time(NULL));

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
    int p1, p2, p3, p4, p5, p6;
    int i;

    for(i=0;i<1000000;i++){

        switch(dado()){

            case 1:
            n1++;
            break;

            case 2:
            n2++;
            break;

            case 3:
            n3++;
            break;

            case 4:
            n4++;
            break;

            case 5:
            n5++;
            break;

            case 6:
            n6++;
            break;
        }
    }

    p1 = (n1 / 1000000.0) * 100.0;
    p2 = (n2 / 1000000.0) * 100.0;
    p3 = (n3 / 1000000.0) * 100.0;
    p4 = (n4 / 1000000.0) * 100.0;
    p5 = (n5 / 1000000.0) * 100.0;
    p6 = (n6 / 1000000.0) * 100.0;

    printf("Número [1], apareceu [%d] vezes isso é igual a [%d%%]", n1, p1);
    printf("\nNúmero [2], apareceu [%d] vezes isso é igual a [%d%%]", n2, p2);
    printf("\nNúmero [3], apareceu [%d] vezes isso é igual a [%d%%]", n3, p3);
    printf("\nNúmero [4], apareceu [%d] vezes isso é igual a [%d%%]", n4, p4);
    printf("\nNúmero [5], apareceu [%d] vezes isso é igual a [%d%%]", n5, p5);
    printf("\nNúmero [6], apareceu [%d] vezes isso é igual a [%d%%]\n", n6, p6);

    return 0;
}
