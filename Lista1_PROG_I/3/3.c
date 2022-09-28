#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    int x = 0, y = 0;

    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &x);

        printf("\nDigite outro número inteiro: ");
        scanf("%d", &y);

        printf("\n");

    } while(x==y);

    return 0;
}
