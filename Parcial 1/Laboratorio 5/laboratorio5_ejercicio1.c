#include <stdio.h>

//Funciones
#define PI 3.1416 
float area_circulo();
float area_cuadrado();
float area_rectangulo();
float area_triangulo();
float area_trapecio();


float area, base=5.2, altura=2.2;
/*

Elaborar un programa principal con opciones para invocar a cinco funciones 
que determinen e impriman las siguientes áreas: 
a) circulo, b) cuadrado, c)rectángulo, d)triangulo rectángulo, y e) trapecio. 

Area_circulo = PI * radio * radio

Area_cuadrado = lado * lado 

Area_rectangulo = base * altura

Area_triangulo = base * altura /2 

Area_trapecio = (BaseMayor + BaseMenor) * altura /2
*/
int main (){
	
	printf("Area del circulo: %.2f unidades cuadradas\n", area_circulo());
	printf("Area del cuadrado: %.2f unidades cuadradas\n", area_cuadrado());
	printf("Area del rectangulo: %.3f unidades cuadradas\n", area_rectangulo());
	printf("Area del cuadrado: %.3f unidades cuadradas\n", area_triangulo());
	printf("Area del trapecio: %.3f unidades cuadradas\n", area_trapecio());
	
	return 0;
}

float area_circulo(){
	float radio=5;
	area=radio*radio*PI;
	return area;
}
float area_cuadrado(){
	float lado=4.4;
	area=lado*lado;
	return area;
}
float area_rectangulo(){
	area=(base*altura);
	return area;
}
float area_triangulo(){
	area = (base*altura)/2;
	return area;
}
float area_trapecio(){
	float baseMenor=4.2, baseMayor=2.2;
	area = ((baseMenor + baseMayor)*altura)/2;
	return area;
}



