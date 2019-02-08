
/*Se desea realizar una encuesta a 45 estudiantes, E.P. que lea el mes nacimiento de cada alumno 
(usando números del 1 al 12) y determine ¿cuántos nacieron en el primer semestre del año y cuántos 
en el segundo semestre?. Además, debe validar que el número introducido, corresponda a un mes; por 
ejemplo, no se acepta 13 como mes. Si el mes es incorrecto debe solicitarlo nuevamente. Utilizar 
sólo estructuras repetitivas while.*/

#include <stdio.h>
#include <conio.h>
int main(){
	
	int mes, i=1, semestre1=0, semestre2=0, n;
	scanf("%d", &n);
	while (i <= n){
		printf("En que mes naciste? (escribelo con numero)\n");
		scanf("%d", &mes);
		do{
			if(mes >=1 && mes <=6){
				semestre1++;
			}
			else if (mes > 6 && mes <= 12){
				semestre2++;
			}
			else{
				printf("Mes no válido");
			}
		}
		while(mes<1 && mes>12);
		i++;
	}
	
	printf("Hay un total de %d que nacieron en el primer semestre del a%co\n", semestre1, 164);
	printf("Hay un total de %d que nacieron en el segundo semestre del a%co", semestre2, 164);
	
	return 0;
}
