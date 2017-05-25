#include <stdio.h>
#include <point.h>
int main(){
	Point p1, p2;
	float distancia, aux;
	printf("inserte la coordenada x del primer punto\n");
	scanf("%f", &p1.x);
	printf("\ninserte la coordenada y del primer punto\n");
	scanf("%f", &p1.y);
	printf("\ninserte la coordenada z del primer punto\n");
	scanf("%f", &p1.z);

	printf("inserte la coordenada x del segundo punto\n");
	scanf("%f", &p2.x);
	printf("\ninserte la coordenada y del segundo punto\n");
	scanf("%f", &p2.y);
	printf("\ninserte la coordenada z del segundo punto\n");
	scanf("%f", &p2.z);


	distancia = encontrarDistancia(p1, p2);

	printf("la distancia entre los dos puntos es: %f \n", distancia);


	//printf("\ninserte la coordenada z del segundo punto\n");
	//scanf("%f", &aux);





	
}