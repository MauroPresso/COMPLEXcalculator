/**
 * @file main.c
 * @brief Programa principal para la calculadora de números complejos.
 *
 * Este programa permite al usuario ingresar dos números complejos y realiza
 * operaciones básicas como suma, resta, multiplicación, división y cálculo del módulo.
 */

#include <stdio.h>
#include <math.h>
#include "complex_calculator_lib.h"

/**
 * @brief Función principal del programa.
 *
 * Esta función solicita al usuario que ingrese dos números complejos y utiliza
 * las funciones de la biblioteca para realizar operaciones matemáticas con ellos.
 * Muestra los resultados de las operaciones en la consola.
 *
 * @return Devuelve 0 si el programa finaliza correctamente.
 */
int main()
{
    // Declaración de dos números complejos
    struct num_complejo complejoZ;
    struct num_complejo complejoW;

    // Ingreso de valores para el primer número complejo (Z)
    printf("Ingrese la parte real del numero complejo Z: ");
    scanf("%f", &complejoZ.parte_real);
    printf("Ingrese la parte imaginaria del numero complejo Z: ");
    scanf("%f", &complejoZ.parte_imaginaria);

    // Ingreso de valores para el segundo número complejo (W)
    printf("Ingrese la parte real del numero complejo W: ");
    scanf("%f", &complejoW.parte_real);
    printf("Ingrese la parte imaginaria del numero complejo W: ");
    scanf("%f", &complejoW.parte_imaginaria);

    // Operaciones matemáticas con los números complejos
    // Suma de números complejos
    struct num_complejo sumaCompleja = suma_complejo(complejoZ, complejoW);
    printf("\nLa suma de los numeros complejos Z y W es: %0.4f + (%0.4f) i", 
           sumaCompleja.parte_real, sumaCompleja.parte_imaginaria);

    // Resta de números complejos
    struct num_complejo restaCompleja = resta_complejo(complejoZ, complejoW);
    printf("\nLa resta de los numeros complejos Z y W es: %0.4f + (%0.4f) i", 
           restaCompleja.parte_real, restaCompleja.parte_imaginaria);

    // Multiplicación de números complejos
    struct num_complejo multCompleja = mult_complejo(complejoZ, complejoW);
    printf("\nLa multiplicacion de los numeros complejos Z y W es: %0.4f + (%0.4f) i", 
           multCompleja.parte_real, multCompleja.parte_imaginaria);

    // División de números complejos
    struct num_complejo divCompleja = div_complejo(complejoZ, complejoW);
    printf("\nLa division de los numeros complejos Z y W es: %0.4f + (%0.4f) i", 
           divCompleja.parte_real, divCompleja.parte_imaginaria);

    // Cálculo del módulo del número complejo Z
    float moduloZ = modulo(complejoZ);
    printf("\nEl modulo del numero complejo Z es: %0.4f", moduloZ);

    // Cálculo del módulo del número complejo W
    float moduloW = modulo(complejoW);
    printf("\nEl modulo del numero complejo W es: %0.4f", moduloW);

    // Finalización del programa
    return 0;
}

// En este archivo ".c" se encuentra mi main.
