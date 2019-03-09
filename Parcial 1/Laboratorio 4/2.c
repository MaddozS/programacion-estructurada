#include <stdio.h>

int main(){
	int i, n, sencilla, doble, triple, tarjeta;
	float gasto, ventas=0, comisionTotal, comision;
	
	do{
		printf("Cuantos clientes hay: ");
		scanf("%d", &n);
		if(n<0){
			printf("No puedes ingresar esa cantidad de clientes\n\n");
		}
	}
	while(n<0);
	
	
	for(i=1; i<=n; i++){
		gasto=0;
		comision=0;
		printf("Cliente #%d\n", i);
		do{
			printf("Cuantas hamburguesas sencillas pediras?: ");
			scanf("%d", &sencilla);
			if(sencilla<0){
				printf("esa cantidad de hamburguesas no es valida\n\n");
			}
		}
		while(sencilla < 0);
		do{
			printf("Cuantas hamburguesas dobles pediras?: ");
			scanf("%d", &doble);
			if(doble<0){
				printf("esa cantidad de hamburguesas no es valida\n\n");
			}
		}
		while(doble<0);
		do{
			printf("Cuantas hamburguesas triples pediras?: ");
			scanf("%d", &triple);
			if(triple<0){
				printf("esa cantidad de hamburguesas no es valida\n\n");
			}
		}
		while(triple<0);
		
		do{
			printf("Pagaras con tarjeta? (1=Si - 0=No): ");
			scanf("%d", &tarjeta);
			if(tarjeta!=0 && tarjeta!=1){
				printf("comando no valido\n\n");
			}
		}
		while(tarjeta!=0 && tarjeta!=1);
		
		gasto = (sencilla*60.00) + (doble*80.00) + (triple*100.00);
		if(tarjeta==1){
			comision = gasto * .03;
			comisionTotal += comision;
			gasto += comision;
		}
		
		ventas += gasto;
		printf("Gastaste un total de %.2f pesos\n\n", gasto);
	}	
	
	printf("Se vendio un total de %.2f y tienes un total de %.2f de comisiones", ventas, comisionTotal);
	
	return 0;
}
