// Ejercicio 2 M�ltiplo de un numero en una serie
// Programa que pregunte si los numeros del 1 al 100 son m�ltiplos de 3.
// Muestre por pantalla si el numero es m�ltiplo o no lo es.

#include <stdio.h>

int main(){
	int i, Multiplo, Flag;
	Multiplo = 3;
	int Limite = 100;
	
	
	for (i = 1; i <= Limite; i++){
		
		Flag = i % Multiplo;
		printf("%d  ", i);
		
		switch (Flag){
			case 0:
				printf("ES multiplo de %d", Multiplo);
				
				break;
				
			default:
				printf("NO ES multiplo de %d", Multiplo);
				
				break;
		}
		printf("\n\n");
	}
	
}
