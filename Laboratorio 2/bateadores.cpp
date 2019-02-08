// Un beisbolista tiene cuatro oportunidades de batear en un juego. 
// Por cada turno al bate, se registra si el batazo del jugador es "hit", "out" o "base por bola".
// Se quiere saber, en un juego, cu�ntas veces el jugador batea un "hit", cu�ntas veces es "out" 
// y cu�ntas veces recibe "base por bola". Adem�s, se desea calcular el porcentaje de bateo por 
// juego del jugador, lo cual se calcula dividiendo el n�mero de veces que batea un hit, entre 
// las oportunidades de bateo que no son "base por bola". E.P. que calcule e imprima lo siguiente:

//Autor: Programadores Empedernidos.

//a) Cu�ntas veces se batea un hit, cu�ntas veces un out y cu�ntas veces base por bola,

//b) Cu�l es el porcentaje de bateo del juego para el jugador. 

#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");

	int Choice, Out, Hit, Base, x;
	float PERCENT;
	
// Primera oportunidad
	
	printf("Primer bateo");
	printf("\n1)Hit");
	printf("\n2)Out");
	printf("\n3)Base por bola\n");
	scanf("%d", &Choice);

	Hit=0;
	Out=0;
	Base=0;

		
	if (Choice==1){
	Hit=Hit+1;
	} else if (Choice==2){
	Out=Out+1;
	} else if (Choice==3){
	Base=Base+1;
	} else{
	printf("No v�lido.");
	}
	
// Segunda oportunidad

	printf("\nSegundo bateo");
	printf("\n1)Hit");
	printf("\n2)Out");
	printf("\n3)Base por bola\n");
	scanf("%d", &Choice);
		
	if (Choice==1){
	Hit=Hit+1;
	} else if (Choice==2){
	Out=Out+1;
	} else if (Choice==3){
	Base=Base+1;
	} else{
	printf("No v�lido.");
	}
	
// Tercera Oportunidad

	printf("\nTercer bateo");
	printf("\n1)Hit");
	printf("\n2)Out");
	printf("\n3)Base por bola\n");
	scanf("%d", &Choice);
		
		
	if (Choice==1){
	Hit=Hit+1;
	} else if (Choice==2){
	Out=Out+1;
	} else if (Choice==3){
	Base=Base+1;
	} else{
	printf("No v�lido.");
	}

//Cuarta Oportunidad

	printf("\nCuarto Bateo");
	printf("\n1)Hit");
	printf("\n2)Out");
	printf("\n3)Base por bola\n");
	scanf("%d", &Choice);
		
	if (Choice==1){
	Hit=Hit+1;
	} else if (Choice==2){
	Out=Out+1;
	} else if (Choice==3){
	Base=Base+1;
	} else{
	printf("No v�lido.");
	}
	
// C�lculo de el porcentaje de bateo
	x=(4-Base)
	PERCENT=Hit/x;
	
// Impresi�n de los resultados
	printf("\nEl jugador bateo: ");
	printf("\n%d hits", Hit);
	printf("\n%d outs", Out);
	printf("\n%d bases por bola", Base);
	printf("\nEl porcentaje del jugador es de: \n%f %", PERCENT);
	
	return 0;
}
	
