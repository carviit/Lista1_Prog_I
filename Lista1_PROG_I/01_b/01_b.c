/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista de Exerc�cios 01 - Exerc�cio 01 b)
*/

// Programa para ler a idade de discentes e calcular a m�dia at� que usu�rio informe idade "-1".

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese"); // Ativa��o da Biblioteca para utiliza��o de acentos da L�ngua Portuguesa

    //Declara��o de Vari�veis

    int pessoas=0, idade=0, soma=0, retorno;
    float media;

    while(idade!=-1){ // Se idade for diferente de "-1" o bloco de comandos abaixo � executado

        printf("Digite a idade do discente: ");
        fflush(stdin);
        retorno=scanf("%d", &idade);// Vari�vel retorno recebe "0" para caracteres ou frases e "1" para n�meros.

        if(retorno==0 ||(idade<=0 && idade != -1)){ //Se retorno for igual a "0" ou seja o usu�rio inseriu caracteres ou cadeia de caracteres.

            printf("\nA idade inserida � invalida, insira novamente\n\n");
            pessoas--; //Decrementa��o no n�mero de pessoas para quando passar no bloco abaixo n�o atrapalhar na contagem
            idade=0; // Idade igual a "0" para n�o atrapalhar a soma
        }

        if(idade!=-1){ // Se idade for diferente de "-1" o bloco de comando abaixo � executado

            pessoas++; // Incrementa o n�mero de pessoas para n�meros inseridos pelo usu�rio
            soma +=idade; // Acumula na vari�vel soma a idade inserida pelo usu�rio.
        }
    }
        media = (float)soma / pessoas; // C�lculo da m�dia de idade dos discentes.

    if(media>0){ ; // Se m�dia for maior que "0" o bloco de comandos abaixo � executado

        printf("\n===============================================");
        printf("\nN�mero de discentes inseridos: %d\n", pessoas);
        printf("\nSoma das idades dos discentes inseridos: %d\n", soma);
        printf("\nM�dia da idade dos discentes: %.2f\n", media);
        printf("===============================================\n");
    }
    else{ // Se n�o, o usu�rio inseriu idades menores ou igual a "0", consequentemente o bloco abaixo � executado
        printf("\nM�dia de idade entre os discentes menor ou igual a \"0\", verifique as idades inseridas e execute o programa novamente.\n");
    }

    return 0;
}
