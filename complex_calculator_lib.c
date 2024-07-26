#include <stdio.h>
#include <math.h>
#include "complex_calculator_lib.h"

// Desarrollo mis funciones:
struct num_complejo suma_complejo(struct num_complejo z, struct num_complejo w)
{
	struct num_complejo suma;
	suma.parte_real = z.parte_real + w.parte_real;
	suma.parte_imaginaria = z.parte_imaginaria + w.parte_imaginaria;
	return suma;
}

struct num_complejo resta_complejo(struct num_complejo z, struct num_complejo w)
{
	struct num_complejo resta;
	resta.parte_real = z.parte_real - w.parte_real;
	resta.parte_imaginaria = z.parte_imaginaria - w.parte_imaginaria;
	return resta;
}

struct num_complejo mult_complejo(struct num_complejo z, struct num_complejo w)
{
	struct num_complejo multiplicacion;
	multiplicacion.parte_real = (z.parte_real * w.parte_real) - (z.parte_imaginaria * w.parte_imaginaria);
	multiplicacion.parte_imaginaria = (z.parte_real * w.parte_imaginaria) + (z.parte_imaginaria * w.parte_real);
	return multiplicacion;
}

struct num_complejo div_complejo(struct num_complejo z, struct num_complejo w)
{
	struct num_complejo division;
	division.parte_real = ((z.parte_real * w.parte_real) + (z.parte_imaginaria * w.parte_imaginaria))/(pow(w.parte_real,2) + pow(w.parte_imaginaria,2));
	division.parte_imaginaria = ((z.parte_imaginaria * w.parte_real) - (z.parte_real * w.parte_imaginaria))/(pow(w.parte_real,2) + pow(w.parte_imaginaria,2));
	return division;
}

float modulo(struct num_complejo z)
{
	float modulo_z;
	modulo_z = sqrt(pow(z.parte_real,2)+pow(z.parte_imaginaria,2));
	return modulo_z;
}

// En este arhivo ".c" desarrollo mis funciones.