#include <stdio.h>
#include <conio.h>

/*
Nombre: 33_mayores-a-100.c
Autor: Programadores empedernidos
Descripcion: E.P. que lea 10 n�meros (N) y que determine e imprima los que
sean mayores a 100.
Fecha: 09feb2019
Versi�n: 1.0 */

int main(int argc, char *argv[]) {
	/*se definen las variables*/
	int numeros[10];
	int i = 0; 
	/*entrada: Se solicitan los 10 numeros */
	while (i<10){
		printf("%i/10: Introduce un n�mero:\n %c ",i+1,62);
		scanf("%i",&numeros[i]);
		i++;
	};
	
	printf("Los n�meros mayores a 100 son:\n");
	/*proceso: Se verifica si el n�mero es mayor a 100*/
	i = 0 ;// Se restablece el contador
	while (i<10){
		if (numeros[i]>100){
			/*salida: Se impime el n�mero si cumple la condicion*/
			printf("[%i] ",numeros[i]);
		};
		i++;
	};

	return 0;
}

