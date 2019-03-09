
#include <stdio.h>
/*
Nombre: laboratorio4_ejercicio1.c
Autor: Programadores empedernidos
Descripcion:
La posici�n de un robot m�vil se controla por medio de comandos num�ricos introducidos por el teclado de acuerdo a la tabla siguiente. Inicialmente 
el robot se encuentra en la posici�n (x=0, y=0). E.P. que determine e imprima la posici�n del robot despu�s de N movimientos. El n�mero de movimientos
totales se debe solicitar al inicio.  Utilizar s�lo estructuras repetitivas for. 

Comando num�rico          Acci�n
        6           Aumenta coordenada x por 1
		4			Reduce coordenada x por 1
		8			Aumenta coordenada y por 1
		2			Reduce coordenada y por 1


Fecha: 14feb2019
Versi�n: 1.0rev */

int main (){
	//declaracion de las variables
	int n, comando, x=0, y=0, error=0, i;
	//entrada: # de movimientos que va a realizar el robot, se usa DO-WHILE para repetir la lectura de la varible n en caso de que sea invalido
	do{
		printf("cuantos movimientos haras\n");
		scanf("%d", &n);
		if(n<=0){
			printf("debes hacer al menos un movimiento\n");
		}
	}
	while (n<=0);
	
	//impresion del pseudomenu
	printf("Moverte 1 en X - Pulsa 6\n");
	printf("Moverte -1 en X - Pulsa 4\n");
	printf("Moverte 1 en Y - Pulsa 8\n");
	printf("Moverte -1 en Y - Pulsa 2\n");
		
		
	//proceso: ciclo for en el cual se leera el tipo de movimiento que hara el robot
	for (i = 1; i<=n; i++){
		//DO-WHILE en caso de que sea incorrecto el tipo de movimiento que realizara el robot
		do{
			printf("Movimiento #%d: ", i);
			fflush(stdin);
			scanf("%d", &comando);
			
			switch(comando){
				//en cada case se reinicia la variable de error para que no cause problemas en el siguiente paso
				case 6:
					x++;
					error=0;
					break;
				case 4:
					x--;
					error=0;
					break;
				case 8:
					y++;
					error=0;
					break;
				case 2:
					y--;
					error=0;
					break;
				default:
					error=1;
					printf("El comando no es v�lido, ingresa uno que sea valido");
					break;				
			}	
		}
		while(error == 1);
	}
	
	//salida, se imprime la posicion de robot en coordenadas
	printf("Estas en la coordenada (%d,%d)", x,y);
	
	return 0;
}

/*Observaciones
Funciona perfectamente, excelente documentacion, permite al sistema recuperarse 
en caso de un movimiento invalido

Revisado por: Equipo Picateclas

*/
