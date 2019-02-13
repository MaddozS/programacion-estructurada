// Programa que  lee el nombre, el sueldo y el número de hijos de los 20 empleados de la tlapalería “El Sapo Verde”, 
//y que determine e imprima el nombre de los empleados con salario mayor a $ 1,000.- y que
//tengan entre 3 y 7 hijos.
//Autor: Programadores Emperdernidos. Fecha: 10/02/19.
// Version: 1.0
//Nombre: 38.c
#include <stdio.h>
#include <wchar.h>

int main(){
// Declaracion de variables. *entrada*

	int Hijos, Sueldo, Contador;
	char Nombre[50];
	Contador=1;
	
//	Ciclo While para leer el nombre, sueldo e hijos. *proceso*
	do{
		printf("Introduzca su nombre\n");
		scanf("%s", &Nombre);
		do{
			printf("Introduzca su sueldo\n");
			scanf("%d", &Sueldo);
			if(Sueldo < 0){
				printf("Sueldo no v\240lido, ingrese otro");
			}
		}
		while(Sueldo < 0);
		
		do{
			printf("Introduzca cu\240ntos hijos tiene\n");
			scanf("%d", &Hijos);
			if(Hijos < 0){
				printf("como va ser que tienes hijos negativos");
			}
		}
		while(Hijos < 0);
		
		if (Sueldo>1000){
			if(Hijos>=3 && Hijos<=7){
				printf("%s tiene %d hijos y gana $ %d\n", Nombre, Hijos, Sueldo);
			}
		}
		Contador++;	
	}
	while(Contador <= 20);
	
return 0;
}
