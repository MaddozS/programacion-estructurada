#include <stdio.h>
#include <conio.h>

/*
Nombre: 33.c
Autor: Programadores empedernidos
Descripcion: E.P. que lea 10 n�meros (N) y que determine e imprima los que
sean mayores a 100.
Fecha: 09feb2019
Versi�n: 1.0 */

int main(int argc, char *argv[]) {
	/*se definen las variables*/
	int n;
	int i = 0; 
	/*entrada: Se solicitan los 10 numeros */
	do {
		printf("%i/10: Introduce un numero:\n %c ",i+1,62);
		scanf("%i",&n);
		/*proceso: Se verifica si el n�mero es mayor a 100*/
		if (n>100){
			/*salida: Se impime el n�mero si cumple la condicion*/
			printf("\n [%i] es mayor a 100\n\n",n);
		};
		i++;
	} while (i<10);

	return 0;
}

