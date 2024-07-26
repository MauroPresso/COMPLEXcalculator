#pragma once

// Declaro la estructura del complejo:
struct num_complejo
{
	float parte_real;
	float parte_imaginaria;
};

// Declaro mis funciones:
// Suma:
struct num_complejo suma_complejo(struct num_complejo z, struct num_complejo w);
// Resta:
struct num_complejo resta_complejo(struct num_complejo z, struct num_complejo w);
// Multiplicacion:
struct num_complejo mult_complejo(struct num_complejo z, struct num_complejo w);
// Division:
struct num_complejo div_complejo(struct num_complejo z, struct num_complejo w);
// Modulo:
float modulo(struct num_complejo z);

// Acá termina el archivo ".h" donde declaro mi estructura y mis funciones