/*En un concurso se solicitará a un número no determinado de personas, que intenten adivinar la longitud 
exacta en metros de un vehículo. Cada persona tiene una sola oportunidad para participar. E.P. que permita 
leer las longitudes propuestas por dichas personas y que determine la diferencia con la longitud correcta 
que es 3.85 mts. También, debe capturar las propuestas de todos los que quieran participar y, cuando ya 
no haya más participantes, imprimir tanto el número del participante más cercano a la longitud correcta,
como la longitud propuesta por dicho participante. Además, se imprimirá el número total de participantes. 
Utilizar sólo estructuras repetitivas do-while.*/
 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MTS 3.85
int main (){
	
	char participantes;
	int part=0, posganador;
	float metros, ganador, dif, ini;
	do{
		part++;
		
		printf("Cuantos metros calculas que mide el carro?\n");
		scanf("%f", &metros);
		dif = MTS - metros;
		dif = fabs(dif);
		
		if (part == 1){
			ganador = dif;
			posganador = part;
		}
		if (dif < ganador){
			posganador = part;
			ganador = dif;
		}
		
		printf("Hay más participantes? (S/N)\n");
		fflush(stdin);
		participantes = getchar();
		
		
	}
	while(participantes == 'S');
	
	printf("El ganador es %d con una diferencia de %f metros\n", posganador, ganador);
	printf("Participaron un total de %d", part);
	return 0;
}
