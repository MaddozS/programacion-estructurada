#include <stdio.h>
#include <conio.h>

/*
Nombre: 34_imprime-100-numeros.c
Autor: Programadores empedernidos
Descripcion: E.P. que lea 100 números (N) y que los imprima.
Fecha: 09feb2019
Versión: 1.0 */

int main(int argc, char *argv[]) {
	/*se definen las variables*/
	int N[100];
	int i = 0; 
	/*entrada: Se solicitan los 100 numeros */
	printf("Introduce 100 números: \n");
	while (i<100){
		printf("%i/100 %c ",i+1,62);
		scanf("%i",&N[i]);
		// N[i] = i+1; //para pruebas
		i++;
	};
	
	printf("Los números son:\n");
	i = 0 ;// Se restablece el contador
	int aux = 1; //Auxiliar para hacer saltos de linea
	while (i<100){
		/*salida: Se impime el número si cumple la condicion*/
		printf("[%i] ",N[i]);
		if (aux==10){
			printf("\n");
			aux = 0;
		};
		i++;
		aux++;
	};
	
	return 0;
}
