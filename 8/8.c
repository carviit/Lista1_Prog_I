#include <stdio.h>
#include <locale.h>

/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 22.1.8120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 8
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int opc=0;
    float deposito, saque, saldo=-1;


    while(saldo<0){

    printf("Qual o seu saldo inicial na conta bancária: R$ ");
    fflush(stdin);
    scanf("%f", &saldo);

        if(saldo<0){
            printf("\n**VALOR DE SALDO INICIAL INVÁLIDO, DIGITE NOVAMENTE**\n\n");
        }

    }

    do{

    deposito = -1;
    saque = -1;


    printf("\n1 - Depósito na conta\n");
    printf("2 - Sacar dinheiro da conta \n");
    printf("3 - Fim (SAIR)\n");


    printf("\nSelecione a opção desejada: ");
    fflush(stdin);
    scanf("%d", &opc);

    switch(opc){

        case 1:

            while(deposito<0){

            printf("\nDigite o valor que você deseja depositar: R$ ");
            fflush(stdin);
            scanf("%f", &deposito);

                if(deposito<0){

                    printf("\n**VALOR DE DEPÓSITO INVÁLIDO, DIGITE NOVAMENTE**\n");
                }

            }

            saldo += deposito;

            printf("\n==============================================\n");
            printf("Você depositou R$%.2f em sua conta bancária.\n", deposito);
            fflush(stdin);
            printf("\nSaldo bancário total = R$%.2f\n", saldo);
            printf("===============================================\n");

            break;

        case 2:

            while(saque<0){

            printf("\nQual valor você deseja sacar: R$ ");
            fflush(stdin);
            scanf("%f", &saque);

                if(saque<0){

                    printf("\n**VALOR DE SAQUE INVÁLIDO, DIGITE NOVAMENTE**\n");
                }

            }
                    saldo -= saque;

                    printf("\n=========================================\n");
                    printf("Você sacou R$%.2f da sua conta bancária.\n", saque);
                    printf("\nSaldo bancário total = R$%.2f\n", saldo);
                    printf("=========================================\n");
            break;

        case 3:

            if(saldo>0){

                printf("\n=======================");
                printf("\n   CONTA OPERACIONAL\n");
                printf("=======================\n");

            }

                else if (saldo<0){

                    printf("\n======================");
                    printf("\n   CONTA NEGATIVADA\n");
                    printf("======================\n");
            }

            else{
                printf("\n========================");
                printf("\n     CONTA ZERADA\n");
                printf("========================\n");
            }

            break;

        default:

            printf("\n**OPÇÃO INVÁLIDA**\n");
    }

    }
    while(opc!=3);

    return 0;
}
