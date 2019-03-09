#include <stdio.h>
#include <conio.h>
#include <locale.h>

//En un supermercado, se realizan descuentos por la compras a partir de unas bolitas 
//de colores: verde 20%, amarilla 25%, negra 30%; la blanca no aplica ningún descuento. 
//E.P. que lea el importe de la compra y el color de la bolita, determine e imprima 
//cuanto debe pagar un cliente.

//Autor: Programadores Empedernidos

int main (){
	setlocale(LC_ALL, "");
	
	//variables
	int bolita;
	float compra;
	
	//entrada
	printf("¿cuánto compraste?\n");	
	scanf("%f", &compra);
	
	//menú de selección de bolitas
	printf("Ok, ahora, escoge una bolita!\n1)Verde\n2)Amarillo\n3)Negra\n4)Blanca\n");
	printf("Escoge escribiendo el número de la bolita: ");
	scanf("%d", &bolita);
	
	//casos de las bolitas - salida
	switch(bolita){
		case 1: 
			compra = compra * .8;
			printf("Escogiste la bolita verde, tienes un 20%% de descuento\nTu compra es de %.2f pesos", compra);
			break;
		case 2: 
			compra = compra * .75;
			printf("Escogiste la bolita amarilla, tienes un 25%% de descuento\nTu compra es de %.2f pesos", compra);
			break;
		case 3: 
			compra = compra * .7;
			printf("Escogiste la bolita negra, tienes un 30%% de descuento\nTu compra es de %.2f pesos", compra);
			break;
		case 4: 
			printf("Escogiste la bolita blanca, no hay descuento\n Tu compra es de %f pesos", compra);
			break;
		default:
			printf("No escogiste un número válido");
			break;
	}
	return 0;	
}
