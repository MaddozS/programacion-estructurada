#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Nombre: 43.c
Autor: Programadores empedernidos
Descripcion: E.P. que lea 250 n�meros y que determine e imprima cuantos son 
			positivos y cuantos son negativos.
Fecha: 09feb2019
Versi�n: 1.0 */

int main(int argc, char *argv[]) {
	/*se definen las variables*/
	int n,positivos=0,negativos=0,cero=0;
	int i = 0; 
	/*entrada: Se solicitan los 250 numeros */
	printf("Introduce 250 numeros: \n");
	while (i<250){
		printf("%i/250 %c ",i+1,62);
		scanf("%i",&n);
		// n = i-50; //para pruebas
		/*proceso: Se verifica si el n�mero es positivo o negativo*/
		if (n<0){
			negativos++;
		} else {
			if (n>0){
				positivos++;
			}else{
				cero++;
				
			};
		};
		i++;
	};
	/*salida: Se impime cuantos numeros cumplen la condicion*/
	system("cls");
	printf("\nDe los numeros ingresados:\n\n %c %i son positivos\n %c %i son negativos\n %c %i son cero",62,positivos,62,negativos,62,cero);

	
	return 0;
}

