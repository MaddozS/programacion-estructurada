/*
Problema: . E.P. que lea 50 números y que cuente e imprima cuantos son
negativos.

Autores: Programadores Empedernidos.
*/

#include <stdio.h>

int main (){
	
	//variables
	int n, i=1, cont=0;
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
		
		if(numero < 0){
			cont++;
		}
		i++;
	}
	//SALIDA
	printf("Hubo un total de %d n%cmeros negativos", cont, 163);
	return 0;
}
