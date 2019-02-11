/*
Problema: E.P. que lea las calificaciones del primer parcial de los
estudiantes de algoritmos y que cuente e imprima cuantos alumnos
obtuvieron calificación mayor a 80

Autores: Programadores Empedernidos.
*/

#include <stdio.h>

int main (){
	
	//variables
	int n, i=1, cont=0;
	float calif;
	
	//ciclo do while que se se usa para volver a preguntar la variable n en caso de que no sea válida (0 o negativos)
	do{
		//ENTRADA
		printf("Cu%cntos alumnos son?: ", 160, 163);
		scanf("%d", &n);
		
		if(n <= 0){
			printf("debe ingresar una cantidad v%clida de alumnos\n\n", 160);
		}
	}
	while(n <=0);
	
	//Ciclo para preguntar los números
	while(i<=n){
		//PROCESO
		printf("Alumno #%d, cu%cnto sacaste el primer parcial: ", i, 160);
		scanf("%f", &calif);
		
		if (calif > 80){
			cont++;	
		}
		i++;
	}
	//SALIDA
	
	printf("Hubo un total de %d alumnos que sacaron m%cs de 80", cont, 160);
	return 0;
}
