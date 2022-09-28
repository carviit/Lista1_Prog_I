#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int vetor[10], i;

    for(i=0;i<=9;i++){

    vetor[i] = (rand() % 11) + 10;

    }

    for(i=0;i<=9;i++){

    printf("vetor[%d] = %d\n", i,vetor[i]);

    }

    return 0;
}
