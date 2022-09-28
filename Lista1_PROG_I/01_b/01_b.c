/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 01 b)
*/

// Programa para ler a idade de discentes e calcular a média até que usuário informe idade "-1".

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese"); // Ativação da Biblioteca para utilização de acentos da Língua Portuguesa

    //Declaração de Variáveis

    int pessoas=0, idade=0, soma=0, retorno;
    float media;

    while(idade!=-1){ // Se idade for diferente de "-1" o bloco de comandos abaixo é executado

        printf("Digite a idade do discente: ");
        fflush(stdin);
        retorno=scanf("%d", &idade);// Variável retorno recebe "0" para caracteres ou frases e "1" para números.

        if(retorno==0 ||(idade<=0 && idade != -1)){ //Se retorno for igual a "0" ou seja o usuário inseriu caracteres ou cadeia de caracteres.

            printf("\nA idade inserida é invalida, insira novamente\n\n");
            pessoas--; //Decrementação no número de pessoas para quando passar no bloco abaixo não atrapalhar na contagem
            idade=0; // Idade igual a "0" para não atrapalhar a soma
        }

        if(idade!=-1){ // Se idade for diferente de "-1" o bloco de comando abaixo é executado

            pessoas++; // Incrementa o número de pessoas para números inseridos pelo usuário
            soma +=idade; // Acumula na variável soma a idade inserida pelo usuário.
        }
    }
        media = (float)soma / pessoas; // Cálculo da média de idade dos discentes.

    if(media>0){ ; // Se média for maior que "0" o bloco de comandos abaixo é executado

        printf("\n===============================================");
        printf("\nNúmero de discentes inseridos: %d\n", pessoas);
        printf("\nSoma das idades dos discentes inseridos: %d\n", soma);
        printf("\nMédia da idade dos discentes: %.2f\n", media);
        printf("===============================================\n");
    }
    else{ // Se não, o usuário inseriu idades menores ou igual a "0", consequentemente o bloco abaixo é executado
        printf("\nMédia de idade entre os discentes menor ou igual a \"0\", verifique as idades inseridas e execute o programa novamente.\n");
    }

    return 0;
}
