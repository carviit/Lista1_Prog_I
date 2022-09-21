/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista de Exerc�cios 01 - Exerc�cio 01 a)
*/

// Programa para ler a idade de discentes e calcular a m�dia, utilizando for - 30 pessoas

#include <stdio.h>
#include <locale.h>

int main(){

    //Ativa��o da biblioteca para utilizar acentos da L�ngua Portuguesa

    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis

    int idade, pessoas, retorno, soma=0;
    float media;

    //Entrada de dados

    for(pessoas=1;pessoas<=30;pessoas++){

        printf("Digite a idade do discente: ");
        fflush(stdin);
        retorno = scanf("%d", &idade); // Vari�vel retorno para verificar se foi digitado n�mero, caracteres ou cadeia de caracteres

        if(idade<=0 || retorno == 0 ){ //Garante que o usu�rio n�o digite n�meros negativos,zero, caracteres ou cadeia de caracteres.

            printf("\nA idade n�o pode ser letra(s), n�mero negativo e nem ser igual a \"0\"\n\n");

            pessoas--; // Decrementa��o para garantir o ciclo for de 30 idades digitadas.
            idade=0; // Vari�vel idade igual a (0) para n�o atrapalhar a soma das idades.
        }

        soma+=idade; // C�lculo da soma das idades dos 30 discentes.
    }

    //C�lculo da m�dia de idade dos discentes

    media = (float)soma / 30;

    //Exibi��o do resultado do c�lculo da m�dia

    printf("\nA m�dia de idade entre os discentes � igual a \"%.2f ano(s)\"\n", media);

    return 0;
}
