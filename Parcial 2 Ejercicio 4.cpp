// Ejercicio 4 Intercambio de valores

// Programa que: Pida valores enteros por teclado con variables v1, v2 y v3

// Intercambie los valores de v1 a v2, v2 a v3 y v3 a v1

// Mostrar por pantalla los valores contenidos en las variables.

#include <stdio.h>

int main(){
	
	int V1 = 0, V2 = 0, V3 = 0;
	int AUX = 0;
	
	printf("Escriba tres valores enteros: \n");
	scanf("%d",&V1);
	scanf("%d",&V2);
	scanf("%d",&V3);
	
	printf("\nLas variables son: \nV1 = %d,\nV2 = %d,\nV3 = %d", V1, V2, V3);
	
	printf("\nMezclando");
	AUX = V1;
	
	V1 = V3;
	V3 = V2;
	V2 = AUX;
	
	printf("\nEl nuevo orden es: \nV1 = %d,\nV2 = %d,\nV3 = %d", V1, V2, V3);
	return 0;
}
