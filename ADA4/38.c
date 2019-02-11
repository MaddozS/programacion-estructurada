// Programa que lee el nombre, sueldo e hijos de un trabajador y los imprime.
#include <stdio.h>
#include <wchar.h>

int main(){
// Declaracion de variables

	int Hijos, Sueldo, Contador;
	char Nombre[50];
	Contador=1;
	
//	Ciclo While para leer el nombre, sueldo e hijos.

	while(Contador<=20){
		printf("Introduzca su nombre\n");
		scanf("%s", &Nombre);
		printf("Introduzca su sueldo\n");
		scanf("%d", &Sueldo);
		printf("Introduzca cu\240ntos hijos tiene\n");
		scanf("%d", &Hijos);
		
		if (Sueldo>1000){
			if(Hijos>=3 && Hijos<=7){
				printf("%s tiene %d hijos y gana $ %d\n", Nombre, Hijos, Sueldo);
			}
		}
		Contador++;
	}

return 0;
}
