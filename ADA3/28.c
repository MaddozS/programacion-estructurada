
//E.P. que determine e imprima si el car�cter c�digo asociado a un
//c�digo introducido por teclado, corresponde a un car�cter alfab�tico,
//d�gito, de puntuaci�n, especial o no imprimible.

//Autores = programadores empedernidos.


#include <stdio.h>
#include <ctype.h> //libreria para usar las funciones
#include <conio.h>

void main ()
{
	int c;
	printf("Ingrese un caracter\n");
	c = getchar();
	//se usa getchar para saber que tecla se presiona
	
	//se verifica que tipo de caracter es la tecla presionada
	if(isdigit(c))
	{
		printf("\nEl caracter ingresado es un numero"); 
	}
	else if(isalpha(c))
	{
		printf("\nEl caracter ingresado es alfabetico");
	}
	else if(ispunct(c))
	{
		printf("\nEl caracter ingresado es de puntuacion");
	}
	else if (isprint(c))
	{
		printf("\nEl caracter ingresado es especial");
	}
	else {
		printf("\nEl caracter ingresado no se imprime");
	}
	
}
