#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <point.h>

float encontrarDistancia(Point a, Point b){
	float distanciaE;
	float distanciaX = (b.x - a.x);
	float distanciaY = (b.y - a.y);
	float distanciaZ = (b.z - a.z);

	distanciaE = sqrt( pow(distanciaX, 2) + pow(distanciaY, 2) + pow(distanciaZ, 2) );

	return distanciaE;
}