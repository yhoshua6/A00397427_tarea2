/** @file complexMath.h
 *  @brief Declaracion de las funciones para complexMath
 *
 *  Contiene la declaración de las variables y funciones necesarias para el correcto funcionameinto de complexMath
 *
 *  @author Josué Hernández Mateo
 *  @bug No known bugs.
 */

#include <stdio.h>
#ifndef COMPLEX_MATH
#define COMPLEX_MATH


/**
 * La estructura del número complejo
 */
struct ComplexNumber{
 /*@{*/
	float real;		/**< Parte real */
	float img;		/**< Parte imaginaria */
 /*@}*/
};




/** @brief Realiza la operación dada
 * 
 *  @param *n1 Primer argumento que es un apuntador a la estructura de un numero complejo
 *  @param *n2 Segundo argumento que es un apuntador a la estructura de un numero complejo
 *  @param *operator La operación a realzar en tipo char
 *  @param *argv[] argumentos enviados en la consola
 *  @return Void
 */
void getCNumbersOp(struct ComplexNumber *n1, struct ComplexNumber *n2, char *operator, char *argv[]);
 

 /** @brief Asigna un numero complejo
 * 
 *  @param *ptr Apuntador a un numero complejo
 *  @param real Parte real
 *  @param img Parte imaginaria
 *  @return Void
 */
void setCNumber(struct ComplexNumber *ptr, float real, float img);
 
 
 /** @brief Imprime un numero complejo
 * 
 *  @param *ptr Apuntador a la estructura del numero complejo a imprimir
 *
 *  @return Void
 */
void printCNumber(struct ComplexNumber *ptr);


/** @brief Imprime la operacion realizada
 * 
 *  @param *result Aputadora a la estructura de un numero complejo que contiene el resultado
 *	@param *number1 Apuntador al primer numero comlejo
 *  @param *number2 Apuntador al segundo numero complejo
 *	@param operator Signo de la operacion
 *  @return Void
 */
void printOperation(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);


/** @brief Realiza la operación con dos numeros complejos dados
 * 
 *  @param *result Apuntador al resultado de la operación
 *  @param *number1 Apuntador a la primera estructura de numero complejo
 *  @param *number2 Apuntador a la segunda estructura de numero complejo
 *  @param *operator Operador a realizar
 *  @return int
 */
int doCNumbersOp(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);


/** @brief Suma dos números complejos
 * 
 *  @param *result Apuntador a una estructura de número complejo para el resultado
 *  @param *number1 Aputnador al primer número complejo
 *  @param *number2 Aputnador al segundo número complejo
 *  @return Void
 */
void addCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);


/** @brief Resta dos números complejos
 * 
 *  @param *result Apuntador a una estructura de número complejo para el resultado
 *  @param *number1 Aputnador al primer número complejo
 *  @param *number2 Aputnador al segundo número complejo
 *  @return Void
 */
void subCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);


/** @brief Multiplica dos números complejos
 * 
 *  @param *result Apuntador a una estructura de número complejo para el resultado
 *  @param *number1 Aputnador al primer número complejo
 *  @param *number2 Aputnador al segundo número complejo
 *  @return Void
 */
void mulCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);


/** @brief Divide dos números complejos
  * 
 *  @param *result Apuntador a una estructura de número complejo para el resultado
 *  @param *number1 Aputnador al primer número complejo
 *  @param *number2 Aputnador al segundo número complejo
 *  @return Void
 */
void divCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

#endif
