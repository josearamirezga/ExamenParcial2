// Ejercicio 5 Año bisiesto

// Realizar un programa de C que: Pida por teclado un año entero (dato entero)

//Mostrar por pantalla si: Es bisiesto o no.

// Nota: son bisiestos todos los años multiplos de 4, excepto aquellos que son multiplos de 100, pero no de 400.


#include <stdio.h>

int main(){
	
	int INPUT = 0;
	
	printf("Escribe el año: \n");
	scanf("%d", &INPUT);
	
	if ((INPUT%4 == 0) && !(INPUT%100 == 0)||(INPUT%400 == 0) ){
		
		printf("El año %d es bisiesto.\n", INPUT);
		
	} else	{
		
		printf("El año %d NO es bisiesto.\n", INPUT);		

	}
	return 0;
}
