#include <stdio.h>
#include <conio.h>

/*
Nombre: 34.c
Autor: Programadores empedernidos
Descripcion: E.P. que lea 100 n�meros (N) y que los imprima.
Fecha: 09feb2019
Versi�n: 1.0 */

int main(int argc, char *argv[]) {
	/*se definen las variables*/
	int n;
	int i = 0; 
	/*entrada: Se solicitan los 100 numeros */
	printf("Introduce 100 n�meros: \n");
	do{
		printf("%i/100 %c ",i+1,62);
		scanf("%i",&n);
		/*salida: Imprime el mismo n�mero que se ingreso */
		printf("\n [%i] \n\n",n);
		i++;
	}
	while(i<100);
	
	return 0;
}
