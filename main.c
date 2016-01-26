/** @file main.c
 *  @brief Archivo principal que muestra el funcionamiento de complexMath
 *
 *  This contains the prototypes for the console
 *  driver and eventually any macros, constants,
 *  or global variables you will need.
 *
 *  @author Josué Hernández Mateo
 *  @bug No known bugs.
 */


#include <stdio.h>
#include "complexMath.h"


/** @brief Esta funcion imprime la forma de uso
 * 
 *  En caso de ingresar alguna instruccion incorrecta se mostrara la forma correcta del uso de complexMath
 *
 *  @return Void
 */
void printUsage();



/** @brief El programa principal que muestra el uso de complexMath
 * 
 *  @param argc Apuntador a la estructura resultado de tipo ComplexNumber
 *  @param *argv[] Argumentos recibidos
 *  @return 0
 */
int main (int argc, char *argv[]){
	struct ComplexNumber number1, number2, result;
	char operator=0;
	
	if(argc < 6){
		printUsage();
		return -1;
	}
	
	getCNumbersOp(&number1, &number2, &operator, argv);
	doCNumbersOp(&result, &number1, &number2, operator);
	printOperation(&result, &number1, &number2, operator);

	return 0;
}

void printUsage(){
	printf("Usage:\n");
			printf("$complexMath op1 operator op2\n \
	operator:\n \
	 + addition\n \
	 - substraction\n \
	 x multiplcation\n \
	 / division\n \
	 \%% modulus\n \
	\n \
	op1:\n \
	 realPart imaginaryPart\n \
	op2:\n \
	 realPart imaginaryPart\n\n \
	 e.g.: (4 + 5i)(1 + 3i)\n \
	 complexMath 4 5 * 1 3\n\n");
}


