/*
Problema: E.P. que lea 25 números (N) y que imprima los que sean iguales a
cero.

Autores: Programadores Empedernidos.
*/

#include <stdio.h>

int main (){
	
	//variables
	int n, i=1;
	float numero;
	
	//ciclo do while que se se usa para volver a preguntar la variable n en caso de que no sea válida (0 o negativos)
	do{
		//ENTRADA
		printf("Cu%cntos n%cmeros vas a leer?: ", 160, 163);
		scanf("%d", &n);
		
		if(n <=0){
			printf("debe ingresar una cantidad v%clida\n\n", 160);
		}
	}
	while(n <=0);
	
	//Ciclo para preguntar los números
	while(i<=n){
		//PROCESO
		printf("Dame el n%cmero #%d: ", 163, i);
		scanf("%f", &numero);
		
		if(numero == 0){
			//SALIDA
			printf("Este n%cmero es igual a cero\n", 163);
		}
		i++;
	}
	
	return 0;
}
