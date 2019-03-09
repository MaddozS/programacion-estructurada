#include <stdio.h>

//Funciones
#define PI 3.1416
float area_circulo(float radio);
float area_cuadrado(float lado);
float area_rectangulo(float base, float altura);

float area, radio, lado, base, altura;
/*

Elaborar un programa principal con opciones para invocar a cinco funciones 
que determinen e impriman las siguientes �reas: 
a) circulo, b) cuadrado, c)rect�ngulo, d)triangulo rect�ngulo, y e) trapecio. 

Area_circulo = PI * radio * radio

Area_cuadrado = lado * lado 

Area_rectangulo = base * altura

Area_triangulo = base * altura /2 

Area_trapecio = (BaseMayor + BaseMenor) * altura /2
*/
int main (){
	int opcion;
	printf("Que area quieres imprimir?: (escribe el numero correspondiente)\n");
	printf("1. Circulo\n2. Cuadrado\nEscribe la opcion: ");
	scanf("%d", &opcion);
	switch (opcion)
	{
		case 1:
			printf("Hagamos un circulo, dame su radio y yo calculo el area: ");
			fflush(stdin);
			scanf("%f", &radio);
			printf("El area del circulo: %.2f unidades cuadradas\n", area_circulo(radio));
			break;
		case 2:
			printf("Hagamos un cuadrado, dame el valor de uno de sus lados y yo calculo el area: ");
			fflush(stdin);
			scanf("%f", &lado);
			printf("El area del circulo: %.2f unidades cuadradas\n", area_cuadrado(lado));
			break;
		case 3:
			printf("Hagamos un rectangulo, dame su base: ");
			fflush(stdin);
			scanf("%f", &base);
			printf("Dame su altura: ");
			fflush(stdin);
			scanf("%f", &altura);
			printf("El area del circulo: %.2f unidades cuadradas\n", area_rectangulo(base, altura));
			break;
		default:
			printf("no es válido xD");
			break;
	}
	
	return 0;
}

float area_circulo(float radio){
	area = radio * radio * PI;
	return area;
}
float area_cuadrado(float lado){
	area = lado * lado;
	return area;
}
float area_rectangulo(float base, float altura){
	area = base * altura;
	return area;
}

