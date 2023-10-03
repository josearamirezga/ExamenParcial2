// Ejercicio 1 Operaciones aleatorias
// Programa que: Obtenga un numero random entre 1 y 5, dependiendo de este numero hace una operacion
// Obtiene otros 2 valores para realizar la operacion 
// Mostrar para cada operación el resultado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int RANDOP, VAL1, VAL2, RANDLIM, RESULT;
	
	RANDLIM = 5;
	srand(time(NULL));
	
	RANDOP = 0;
	
	while (1) {
		
		RANDOP = (rand()%RANDLIM) + 1;
		RESULT = 0;
		
		VAL1 = (rand()%RANDLIM) + 1;
		VAL2 = (rand()%RANDLIM) + 1;
		
		switch(RANDOP){
			case 1:
				printf("La suma es: \n");
				RESULT = VAL1 + VAL2;
				printf("%d + %d = %d \n",VAL1, VAL2, RESULT);
				break;
			case 2:
				printf("La resta es: \n");
				RESULT = VAL1 - VAL2;
				printf("%d - %d = %d \n",VAL1, VAL2, RESULT);
				break;
			case 3:
				printf("La multiplicacion es: \n");
				RESULT = VAL1 * VAL2;
				printf("%d * %d = %d \n",VAL1, VAL2, RESULT);
				break;
			case 4:
				printf("La division es: \n");
				RESULT = VAL1/VAL2;
				printf("%d / %d = %d \n",VAL1, VAL2, RESULT);
				break;
			case 5:
				printf("La opcion es 5, terminado el programa.");
				return 0;
				break;
		}
		
	}
	
}
