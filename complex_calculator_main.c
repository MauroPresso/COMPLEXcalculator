#include <stdio.h>
#include <math.h>
#include "complex_calculator_lib.h"

int main()
{
	struct num_complejo complejoZ;
	struct num_complejo complejoW;
	
	// Ingresando valores
	printf("Ingrese la parte real del numero complejo Z: ");
	scanf("%f",&complejoZ.parte_real);
	printf("Ingrese la parte imaginaria del numero complejo Z: ");
	scanf("%f",&complejoZ.parte_imaginaria);
	printf("Ingrese la parte real del numero complejo W: ");
	scanf("%f",&complejoW.parte_real);
	printf("Ingrese la parte imaginaria del numero complejo W: ");
	scanf("%f",&complejoW.parte_imaginaria);
	
	// Llamando a las funciones y guardando retornos de las funciones en variables.
	struct num_complejo sumaCompleja;
	sumaCompleja=suma_complejo(complejoZ,complejoW);
	printf("\nLa suma de los numeros complejos Z y W es: %0.4f + (%0.4f) i",sumaCompleja.parte_real,sumaCompleja.parte_imaginaria);
	
	struct num_complejo restaCompleja;
	restaCompleja=resta_complejo(complejoZ,complejoW);
	printf("\nLa resta de los numeros complejos Z y W es: %0.4f + (%0.4f) i",restaCompleja.parte_real,restaCompleja.parte_imaginaria);
	
	struct num_complejo multCompleja;
	multCompleja=mult_complejo(complejoZ,complejoW);
	printf("\nLa multiplicacion de los numeros complejos Z y W es: %0.4f + (%0.4f) i",multCompleja.parte_real,multCompleja.parte_imaginaria);
	
	struct num_complejo divCompleja;
	divCompleja=div_complejo(complejoZ,complejoW);
	printf("\nLa division de los numeros complejos Z y W es: %0.4f + (%0.4f) i",divCompleja.parte_real,divCompleja.parte_imaginaria);
	
	float moduloZ;
	moduloZ=modulo(complejoZ);
	printf("\nEl modulo del numero complejo Z es : %0.4f",moduloZ);
	
	float moduloW;
	moduloW=modulo(complejoW);
	printf("\nEl modulo del numero complejo W es : %0.4f",moduloW);

    return 0;

}

// En este otro archivo ".c" se encuentra mi main.