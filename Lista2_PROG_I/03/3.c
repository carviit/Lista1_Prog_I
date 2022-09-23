#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    srand(time(NULL));

    int i;
    int n [10];

    for(i=0;i<=9;i++){

        n[i] = (rand() % 11) + 10;

    }

    for(i=0;i<=9;i++){

        printf("n[%d] = %d\n", i, n[i]);
    }

    return 0;
}
