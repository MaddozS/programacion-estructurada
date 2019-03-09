
/*Para un estudio se requiere calcular el salario mensual promedio de programadores junior en empresas 
tecnológicas, se visitarán 10 empresas y en cada una se encuestará a un número diferente de programadores.
E.P. que determine e imprima el salario mensual promedio de todos los programadores.  Utilizar estructuras 
repetitivas while o do-while.*/

#include <stdio.h>
#include <conio.h>
int main(){
	
	int mes, i=1, semestre1=0, semestre2=0, n;
	scanf("%d", &n);
	while (i <= n){
		do{
			printf("En que mes naciste? (escribelo con numero)\n");
			scanf("%d", &mes);
			if(mes >=1 && mes <=6){
				semestre1++;
			}
			else if (mes > 6 && mes <= 12){
				semestre2++;
			}
			else{
				printf("Mes no v%clido", 160);
			}
		}
		while(mes<1 && mes>12);
		i++;
	}
	
	printf("Hay un total de %d que nacieron en el primer semestre del a%co\n", semestre1, 164);
	printf("Hay un total de %d que nacieron en el segundo semestre del a%co", semestre2, 164);
	
	return 0;
}
