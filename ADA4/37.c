//Codigo que lee números e imprime cuántos son positivos
//Fecha: 10/02/19
//Autor: Programadores Empedernidos.
//Version: 1.0.
//Nombre: 37.c
#include <stdio.h>

int main(){
//	Declaracion e inicializacion de variables.

	int contador, numero, positivos;
	contador=1;
	positivos=0;

//	Estructura Do - While para leer los números. 
	do{
		//Entrada
		printf("Digita un n\243mero\n");
		scanf("%d", &numero);
		
//	If para contar los numeros positivos. (proceso)
		if (numero>=0){
			positivos=positivos+1;
		}
		fflush(stdin);
		contador++;
	}
	while(contador <= 100);
	
// Salida
	printf("Has ingresado %d numeros positivos", positivos);
	return 0;
}
