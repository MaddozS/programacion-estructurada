//Codigo que lee números e imprime cuántos son positivos
#include <stdio.h>

int main(){
//	Declaracion e inicializacion de variables.

	int contador, numero, positivos;
	contador=1;
	positivos=0;

//	Estructura While para leer los números.

	while(contador<=100){
		printf("Digita un n\243mero\n");
		scanf("%d", &numero);
		
//	If para contar los numeros positivos.
		if (numero>=0){
			positivos=positivos+1;
		}
		fflush(stdin);
		contador++;
	}	
	
	printf("Has ingresado %d numeros positivos", positivos);
	return 0;
}
