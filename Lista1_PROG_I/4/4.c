#include <stdio.h>
#include <locale.h>

/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 22.1.8120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 4
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int alunos, n;
    float n1=0, n2=0, n3=0, n4=0, ma=0, mturma=0, soman=0, somaturma= 0;

    printf("Digite a quatidade de alunos: ");
    scanf("%d", &alunos);

    for(n=1;n<=alunos;n++){

        printf("\nDigite a NOTA 1: ");
        scanf("%f", &n1);

        printf("\nDigite a NOTA 2: ");
        scanf("%f", &n2);

        printf("\nDigite a NOTA 3: ");
        scanf("%f", &n3);

        printf("\nDigite a NOTA 4: ");
        scanf("%f", &n4);

        soman = n1+n2+n3+n4;
        ma = soman / 4;

            if(ma>=6){

            printf("\nA média do aluno foi \"%.2f\" portanto está APROVADO!\n", ma);

            } else{

                printf("\nA média do aluno foi \"%.2f\" portanto está REPROVADO!\n", ma);
            }

        somaturma += soman;

    }

    mturma = somaturma / alunos;

    printf("\nA média da turma é igual à %.2f\n", mturma);


    return 0;
}
