#include <stdio.h>
#include <conio.h>

int main()
{
	float n1, n2, n3, mult, suma;
	
    printf("Dame los 3 numeros\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);

	//comparacion
	if (n1 > n2){
		if(n1 > n3){
			printf("El mayor numero es %f", n1);
		}
		else{
			printf("El mayor numero es %f", n3);
		}
	} 
	else {
		if(n2 > n3){
			printf("El mayor numero es %f", n2);
		}
		else{
			printf("El mayor numero es %f", n3);
		}
	}
     
    return 0;
}
