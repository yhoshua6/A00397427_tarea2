/** @file complexMath.c
 *  @brief Definicion de las funciones para complexMath
 *
 *  Este archivo contiene la implementacion de las funciones de complexMath
 *
 *  @author Josué Hernández Mateo
 *  @bug No known bugs.
 */

#include <stdio.h>
#include <stdlib.h>
#include "complexMath.h"

void getCNumbersOp(struct ComplexNumber *number1, struct ComplexNumber *number2, char *operator, char *argv[])
{
	number1->real = atof(argv[1]);
	number1->img  = atof(argv[2]);
	number2->real = atof(argv[3]);
	number2->img  = atof(argv[4]);
	*operator = argv[5][0];
}

void setCNumber(struct ComplexNumber *ptr, float real, float img){
	ptr->real = real;
	ptr->img = img;
}

void printCNumber(struct ComplexNumber *ptr){
	printf("\n\t%1.2f %1.2fi\n", ptr->real, ptr->img);
}

void printOperation(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator)
{
	printCNumber(number1);
	printf("   %c", operator);
	printCNumber(number2);
	printf("    ________________");
	printCNumber(result);
}

int doCNumbersOp(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator)
{
	switch(operator){
		case '+':
			addCNumbers(result, number1, number2);
			break;
		case '-':
			subCNumbers(result, number1, number2);
			break;
		case 'x':
			mulCNumbers(result, number1, number2);
			break;
		case '/':
			divCNumbers(result, number1, number2);
			break;
		default:
			printf("ERROR: Operator %c not defined!\n", operator);
	}
}

void addCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2){
	result->real = number1->real + number2->real;
	result->img = number1->img + number2->img;
}

void subCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2){
	result->real = number1->real - number2->real;
	result->img = number1->img - number2->img;
}

void mulCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2){
	result->real = (number1->real * number2->real) + (-1)*(number1->img * number2->img);
	result->img = (number1->real) * number2->img + (number1->img * number2->real);
}

void divCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2){
	result->real = ((number1->real * number2->real) + number1->img * number2->img) / (number2->real * number2->real + number2->img * number2->img);
	result->img = (number1->img * number2->real - number1->real * number2->img) / (number2->real * number2->real + number2->img * number2->img);
}

