#include <stdio.h>
#include "point.h"

int main(){
	Point p1, p2;
	float distancia;
	printf("inserte la coordenada x del primer punto\n");
	scanf("%f", &p1.coordenadaX);
	printf("\ninserte la coordenada y del primer punto\n");
	scanf("%f", &p1.coordenadaY);
	printf("\ninserte la coordenada z del primer punto\n");
	scanf("%f", &p1.coordenadaZ);

	printf("inserte la coordenada x del segundo punto\n");
	scanf("%f", &p2.coordenadaX);
	printf("\ninserte la coordenada y del segundo punto\n");
	scanf("%f", &p2.coordenadaY);
	printf("\ninserte la coordenada z del segundo punto\n");
	scanf("%f", &p2.coordenadaZ);


	distancia = encontrarDistancia(p1, p2);

	printf("la distancia entre los dos puntos es \n");






	
}