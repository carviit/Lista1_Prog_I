#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct{

    int dia, mes, ano;

}Data;

typedef struct{

    Data nasc;

    char nome[40];
    char curso[40];
    int idade;
    double notas[3];

}Aluno;

int main(){

        int discentes, i, j, z;
        char c;

        printf("Digite o número de discentes: ");
        scanf("%d", &discentes);

        float coeficiente[discentes], aux;

        Aluno Alunos[discentes];

        for(i=0;i<discentes;i++){

            c = getchar();

            printf("\nDigite o nome do ALUNO(A) [%d]: ", i+1);
            fflush(stdin);
            fgets (Alunos[i].nome,40,stdin);

            printf("\nDigite o curso do ALUNO(A) [%d]: ", i+1);
            fflush(stdin);
            fgets (Alunos[i].curso,40,stdin);

            printf("\nDigite a idade do ALUNO(A) [%d]: ", i+1);
            fflush(stdin);
            scanf("%d", &Alunos[i].idade);

            int peso = 2;

            aux = 0;

            for(j=0;j<3;j++){

                printf("\nDigite a nota %d do ALUNO(A) [%d]: ", j+1, i+1);
                scanf("%lf", &Alunos[i].notas[j]);

                aux += Alunos[i].notas[j] * peso;

                peso++;

            }
                coeficiente[i] = aux / 9;

            printf("\nDigite a data de nascimento do ALUNO(A) [%d] no formato dd mm aaaa: ", i+1);
            scanf("%d%d%d", &Alunos[i].nasc.dia, &Alunos[i].nasc.mes, &Alunos[i].nasc.ano);

            printf("------------------------------------------------------------------------------");
        }

        printf("\n\n------------------------Cadastro Efetuado com sucesso---------------------------\n\n");

        for(i=0;i<discentes;i++){

            printf("\nAluno(A) [%d]\n\n", i+1);

            printf("Nome...................: %s", Alunos[i].nome);
            printf("Curso..................: %s", Alunos[i].curso);
            printf("Data de nascimento.....: %d/%d/%d", Alunos[i].nasc.dia, Alunos[i].nasc.mes, Alunos[i].nasc.ano);
            printf("\nIdade..................: %d", Alunos[i].idade);
            printf("\nNota 1.................: %.2lf", Alunos[i].notas[0]);
            printf("\nNota 2.................: %.2lf", Alunos[i].notas[1]);
            printf("\nNota 3.................: %.2lf", Alunos[i].notas[2]);
            printf("\nCoeficiente............: %.2f", coeficiente[i]);

            printf("\n\n");

        }

	return 0;

}

