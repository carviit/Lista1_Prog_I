/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista de Exercícios 01 - Exercício 01 a)
*/

// Programa para ler a idade de discentes e calcular a média, utilizando for - 30 pessoas

#include <stdio.h>
#include <locale.h>

int main(){

    //Ativação da biblioteca para utilizar acentos da Língua Portuguesa

    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis

    int idade, pessoas, retorno, soma=0;
    float media;

    //Entrada de dados

    for(pessoas=1;pessoas<=30;pessoas++){

        printf("Digite a idade do discente: ");
        fflush(stdin);
        retorno = scanf("%d", &idade); // Variável retorno para verificar se foi digitado número, caracteres ou cadeia de caracteres

        if(idade<=0 || retorno == 0 ){ //Garante que o usuário não digite números negativos,zero, caracteres ou cadeia de caracteres.

            printf("\nA idade não pode ser letra(s), número negativo e nem ser igual a \"0\"\n\n");

            pessoas--; // Decrementação para garantir o ciclo for de 30 idades digitadas.
            idade=0; // Variável idade igual a (0) para não atrapalhar a soma das idades.
        }

        soma+=idade; // Cálculo da soma das idades dos 30 discentes.
    }

    //Cálculo da média de idade dos discentes

    media = (float)soma / 30;

    //Exibição do resultado do cálculo da média

    printf("\nA média de idade entre os discentes é igual a \"%.2f ano(s)\"\n", media);

    return 0;
}
