// Ejercicio 5 A�o bisiesto

// Realizar un programa de C que: Pida por teclado un a�o entero (dato entero)

//Mostrar por pantalla si: Es bisiesto o no.

// Nota: son bisiestos todos los a�os multiplos de 4, excepto aquellos que son multiplos de 100, pero no de 400.


#include <stdio.h>

int main(){
	
	int INPUT = 0;
	
	printf("Escribe el a�o: \n");
	scanf("%d", &INPUT);
	
	if ((INPUT%4 == 0) && !(INPUT%100 == 0)||(INPUT%400 == 0) ){
		
		printf("El a�o %d es bisiesto.\n", INPUT);
		
	} else	{
		
		printf("El a�o %d NO es bisiesto.\n", INPUT);		

	}
	return 0;
}
