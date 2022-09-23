#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i, j, mat1[3][3] = {11,12,13,14,15,16,17,18,19};

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat1[i][j] = rand() % 6;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%5d ", mat1[i][j]);
        printf("\n");
    }

    printf("\n--> %d\n", RAND_MAX);

    return 0;
}
