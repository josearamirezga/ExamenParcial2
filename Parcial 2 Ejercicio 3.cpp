// Ejercicio 3 Mitad de piramide
// Programa que muestre la mitad de una piramide de numeros

//NOTA: USAR DOS BUCLES FOR ANIDADOS.

#include <stdio.h>

int main(){
	int i, j, PISOS;
	/* printf("Escriba la cantidad de lineas que quiere que tenga la piramide: \n");	
	scanf("%d",&PISOS); */
	
	PISOS = 60;
	
	// Aqui se escribe la cantidad de PISOS (MENOS QUE 60 Y EN PANTALLA COMPLETA).
	
	
	for (i = 0; i<=PISOS; i ++){
		
		for (j = 1; j <= i; j++){
			
			printf("%d ", j);
		}
		printf("\n");
	}
	
}
