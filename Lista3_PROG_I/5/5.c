#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

typedef struct{

    int x;
    int y;

}Ponto;

int main(){

	setlocale(LC_ALL, "Portuguese");

	float distancia;

	Ponto coordenada;

	printf("Digite a coordenada X: ");
	scanf("%d", &coordenada.x);

	printf("\nDigite a coordenada Y: ");
	scanf("%d", &coordenada.y);

	distancia = sqrt(pow((coordenada.x - 0), 2) + pow((coordenada.y - 0), 2));

	printf("\nDistancia entre o ponto (%d,%d) e a origina (0,0) = %.2f\n", coordenada.x, coordenada.y, distancia);

	return 0;
}
