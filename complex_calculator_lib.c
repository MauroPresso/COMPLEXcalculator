/**
 * @file lib.c
 * @brief Implementación de funciones para operaciones con números complejos.
 *
 * Este archivo contiene el desarrollo de las funciones declaradas en `lib.h`.
 * Permite realizar operaciones básicas como suma, resta, multiplicación, división
 * y cálculo del módulo de números complejos.
 */

#include <stdio.h>
#include <math.h>
#include "complex_calculator_lib.h"

/**
 * @brief Suma dos números complejos.
 *
 * Esta función toma dos números complejos y devuelve su suma.
 *
 * @param z Primer número complejo.
 * @param w Segundo número complejo.
 * @return La suma de los números complejos `z` y `w`.
 */
struct num_complejo suma_complejo(struct num_complejo z, struct num_complejo w)
{
    struct num_complejo suma;
    suma.parte_real = z.parte_real + w.parte_real;
    suma.parte_imaginaria = z.parte_imaginaria + w.parte_imaginaria;
    return suma;
}

/**
 * @brief Resta dos números complejos.
 *
 * Esta función toma dos números complejos y devuelve su resta.
 *
 * @param z Primer número complejo.
 * @param w Segundo número complejo.
 * @return La resta de los números complejos `z` y `w`.
 */
struct num_complejo resta_complejo(struct num_complejo z, struct num_complejo w)
{
    struct num_complejo resta;
    resta.parte_real = z.parte_real - w.parte_real;
    resta.parte_imaginaria = z.parte_imaginaria - w.parte_imaginaria;
    return resta;
}

/**
 * @brief Multiplica dos números complejos.
 *
 * Esta función toma dos números complejos y devuelve su producto.
 *
 * @param z Primer número complejo.
 * @param w Segundo número complejo.
 * @return El producto de los números complejos `z` y `w`.
 */
struct num_complejo mult_complejo(struct num_complejo z, struct num_complejo w)
{
    struct num_complejo multiplicacion;
    multiplicacion.parte_real = (z.parte_real * w.parte_real) - (z.parte_imaginaria * w.parte_imaginaria);
    multiplicacion.parte_imaginaria = (z.parte_real * w.parte_imaginaria) + (z.parte_imaginaria * w.parte_real);
    return multiplicacion;
}

/**
 * @brief Divide dos números complejos.
 *
 * Esta función toma dos números complejos y devuelve el resultado de la división.
 *
 * @param z Primer número complejo (numerador).
 * @param w Segundo número complejo (denominador).
 * @return El cociente de los números complejos `z` y `w`.
 * @note Asegúrate de que el módulo de `w` no sea cero antes de usar esta función.
 */
struct num_complejo div_complejo(struct num_complejo z, struct num_complejo w)
{
    struct num_complejo division;
    division.parte_real = ((z.parte_real * w.parte_real) + (z.parte_imaginaria * w.parte_imaginaria)) /
                          (pow(w.parte_real, 2) + pow(w.parte_imaginaria, 2));
    division.parte_imaginaria = ((z.parte_imaginaria * w.parte_real) - (z.parte_real * w.parte_imaginaria)) /
                                (pow(w.parte_real, 2) + pow(w.parte_imaginaria, 2));
    return division;
}

/**
 * @brief Calcula el módulo de un número complejo.
 *
 * Esta función toma un número complejo y devuelve su módulo.
 *
 * @param z Número complejo.
 * @return El módulo del número complejo `z`.
 */
float modulo(struct num_complejo z)
{
    float modulo_z;
    modulo_z = sqrt(pow(z.parte_real, 2) + pow(z.parte_imaginaria, 2));
    return modulo_z;
}

// En este archivo ".c" desarrollo mis funciones.
