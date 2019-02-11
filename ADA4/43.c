#include <stdio.h>
#include <conio.h>

/*
Nombre: 43_negativos-o-positivos.c
Autor: Programadores empedernidos
Descripcion: E.P. que lea 250 números y que determine e imprima cuantos son 
			positivos y cuantos son negativos.
Fecha: 09feb2019
Versión: 1.0 */

int main(int argc, char *argv[]) {
	/*se definen las variables*/
	int numeros[250],positivos=0,negativos=0,cero=0;
	int i = 0; 
	/*entrada: Se solicitan los 250 numeros */
	printf("Introduce 250 números: \n");
	while (i<250){
		printf("%i/250 %c ",i+1,62);
		scanf("%i",&numeros[i]);
		// numeros[i] = i-50; //para pruebas
		/*proceso: Se verifica si el número es positivo o negativo*/
		if (numeros[i]<0){
			negativos++;
		} else {
			if (numeros[i]>0){
				positivos++;
			}else{
				cero++;
				
			};
		};
		i++;
	};
	/*salida: Se impime cuantos numeros cumplen la condicion*/
	printf("De los números ingresados:\n %c %i son positivos\n %c %i son negativos\n %c %i son cero",62,positivos,62,negativos,62,cero);

	
	return 0;
}

