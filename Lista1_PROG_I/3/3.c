#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    int x = 0, y = 0;

    do{
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &x);

        printf("\nDigite outro n�mero inteiro: ");
        scanf("%d", &y);

        printf("\n");

    } while(x==y);

    return 0;
}
