#pragma once

/**
 * @file lib.h
 * @brief Declaración de la estructura y funciones para operaciones con números complejos.
 *
 * Este archivo contiene la definición de la estructura `num_complejo`
 * y las declaraciones de funciones que permiten realizar operaciones
 * básicas como suma, resta, multiplicación, división y cálculo del módulo
 * de números complejos.
 */

/**
 * @struct num_complejo
 * @brief Representa un número complejo.
 *
 * Un número complejo tiene una parte real y una parte imaginaria.
 */
struct num_complejo {
    float parte_real;       /**< Parte real del número complejo. */
    float parte_imaginaria; /**< Parte imaginaria del número complejo. */
};

/**
 * @brief Suma dos números complejos.
 *
 * @param z Primer número complejo.
 * @param w Segundo número complejo.
 * @return Resultado de la suma `z + w`.
 */
struct num_complejo suma_complejo(struct num_complejo z, struct num_complejo w);

/**
 * @brief Resta dos números complejos.
 *
 * @param z Primer número complejo.
 * @param w Segundo número complejo.
 * @return Resultado de la resta `z - w`.
 */
struct num_complejo resta_complejo(struct num_complejo z, struct num_complejo w);

/**
 * @brief Multiplica dos números complejos.
 *
 * @param z Primer número complejo.
 * @param w Segundo número complejo.
 * @return Resultado de la multiplicación `z * w`.
 */
struct num_complejo mult_complejo(struct num_complejo z, struct num_complejo w);

/**
 * @brief Divide dos números complejos.
 *
 * @param z Primer número complejo (numerador).
 * @param w Segundo número complejo (denominador).
 * @return Resultado de la división `z / w`.
 * @note Si el denominador tiene módulo cero, el comportamiento es indefinido.
 */
struct num_complejo div_complejo(struct num_complejo z, struct num_complejo w);

/**
 * @brief Calcula el módulo de un número complejo.
 *
 * @param z Número complejo del cual se desea calcular el módulo.
 * @return Módulo del número complejo `z`.
 */
float modulo(struct num_complejo z);

// Acá termina el archivo ".h" donde declaro mi estructura y mis funciones
