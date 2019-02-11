
//Leer las utilidades de una tienda cada mes y ver cuales son mayoes a 2000000 al final del año
#include <stdio.h>

int main(){
	//VARIABLES
	int Utilidades, Contador, Monto, Acum, Contador2;
	Contador=1;
	Acum=0;
	//CICLO DE CADA TIENDA
	while(Contador<=5){
		printf("Tienda no. %d", Contador);
		//VARIABLES DEL CICLO ANIDADO 
		Utilidades=0;
		Contador2=1;
		//CICLO DE CADA MES
		while (Contador2 <= 12){
			//DO WHILE EN CASO DE QUE EL VALOR NO SEA VALIDO
			do{
				printf("\nIngrese el monto de venta del mes #%d: ", Contador2);
				scanf("%d", &Monto);
				if (Monto < 0){
					printf("Monto no valido\n\n");
				}
			} 
			while (Monto < 0);
			
			Utilidades += Monto;
			Contador2++;
		}
		//COMPARACION PARA SABER CUALES SON MAYORES A 2000000
		if (Utilidades>2000000){
			Acum=Acum+1;
		}
		Contador++;
	}
	
	//SALIDA
	printf("\n%d tiendas tuvieron un  monto mayor a 2,000,000", Acum);
	
	return 0;
}
