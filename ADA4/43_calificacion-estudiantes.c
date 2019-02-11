#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Nombre: 44_calificación-estudiantes.c
Autor: Programadores empedernidos
Descripcion: Los estudiantes de Ingeniería presentaron un examen de admisión con
			100 preguntas.  E.P. que lea el nombre y el número de respuestas 
			correctas para cada una de las 50 personas que presentaron y que
			determine e imprima para cada uno su nombre y su calificación
			basados en la siguiente tabla:
			Respuestas Correctas Calificación Obtenida
			30 > R <= 50 					50
			50 > R <= 60 					60
			60 > R <= 65 					70
			65 > R <= 75 					80
			75 > R <= 90 					90
				 R > 90 					100
Fecha: 09feb2019
Versión: 1.0 */

int main(int argc, char *argv[]) {
	/*se definen las variables*/
	char nombre_alumno[50][50];
	char nombre_aux[50];
	int respuestas_correctas[50],calificacion[50];
	int i = 0; 
	/*entrada: Se solicitan los nombres y califiaciones */
	while (i<50){
		printf("%i/50 Nombre: ",i+1);
		gets(nombre_alumno[i]);
		// numeros[i] = i-50; //para pruebas
		printf("%i/50 Respuestas correctas: ",i+1);
		scanf("%i",&respuestas_correctas[i]);
		/*proceso: Se calcula la calificacion*/
		if (respuestas_correctas[i]>90){
			calificacion[i]=100;
		}else{
			if (respuestas_correctas[i]>75){
				calificacion[i]=90;
			}else{
				if(respuestas_correctas[i]>65){
					calificacion[i]=80;
				}else{
					if(respuestas_correctas[i]>60){
						calificacion[i]=70;
					}else{
						if(respuestas_correctas[i]>50){
							calificacion[i]=60;
						}else{
							if(respuestas_correctas[i]>30){
								calificacion[i]=50;
							}else{
								calificacion[i]=0;
							};
						};
					};
				};
			};
		};
		printf("%s: %i\n",nombre_aux,calificacion[i]);
		i++;
	};
	
	
	return 0;
}

