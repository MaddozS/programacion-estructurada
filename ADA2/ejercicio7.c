#include <stdio.h>
#include <conio.h>

int main()
{
	float area, salario;
	char nom[100];
	
    printf("Dame el nombre del trabajador\n");
	gets(nom);
	
	printf("Dame cuanto hizo en la semana\n");
	scanf("%f", &area);
	//salario
	salario = area*300;
	
	printf("El trabajador %s gano %.3f esta semana", nom, salario);
     
    return 0;
}
