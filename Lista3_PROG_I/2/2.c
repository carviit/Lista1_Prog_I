#include <stdio.h>
#include <locale.h>

int soma(int x){

    if(x==0){

        return 0;
    }

    else{

        return x + soma(x - 1);
    }

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("\nA soma de [1-%d] = %d\n", n, soma(n));

    return 0;
}
