//Programa que lee las utilidades mensuales de una cadena de 5 tiendas
//y que determina e imprime cuantas tiendas tuvieron utilidades mayor a
//los $ 2,000,000.
//Autor: Programadores Emperdernidos. Fecha: 10/02/19
//Version: 1.0.
#include <stdio.h>

int main(){
	//Inicializacion de las variables.
	int Contador, Utilidades, Acumulador;
	Contador=1;
	Acumulador=0;
	
	//Proceso de lectura de las utilidades
	while(Contador<=5){
		printf("Tienda no. %d\n", Contador);
		printf("Ingrese las utilidades > ");
		scanf("%d", &Utilidades);
		printf("\n");
		
		if (Utilidades>2000000){
			Acumulador=Acumulador+1;
		}
		
		Contador++;
	}
	
	//Salida
	printf("%d tiendas tuvieron utilidades mayor a $2,000,000.", Acumulador);
	
	return 0;
}
