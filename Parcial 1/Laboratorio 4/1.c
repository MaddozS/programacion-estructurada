
#include <stdio.h>

int main (){
	
	int n, comando, x=0, y=0, error=0, i;
	do{
		printf("cuantos movimientos haras\n");
		scanf("%d", &n);
		if(n<=0){
			printf("debes hacer al menos un movimiento\n");
		}
	}
	while (n<=0);
	
	printf("Moverte 1 en X - Pulsa 6\n");
		printf("Moverte -1 en X - Pulsa 4\n");
		printf("Moverte 1 en Y - Pulsa 8\n");
		printf("Moverte -1 en Y - Pulsa 2\n");
		
	for (i = 1; i<=n; i++){
		
		do{
			printf("Movimiento #%d: ", i);
			fflush(stdin);
			scanf("%d", &comando);
			
			switch(comando){
				case 6:
					x++;
					error=0;
					break;
				case 4:
					x--;
					error=0;
					break;
				case 8:
					y++;
					error=0;
					break;
				case 2:
					y--;
					error=0;
					break;
				default:
					error=1;
					printf("El comando no es válido, ingresa uno que sea valido");
					break;				
			}	
		}
		while(error == 1);
	}
	
	printf("Estas en la coordenada (%d,%d)", x,y);
	
	return 0;
}
