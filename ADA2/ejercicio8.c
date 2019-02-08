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
	if (n1 >= 0){
		mult = n2 * n3;
		printf("El primer numero fue positivo, el producto de los otros dos es %.2f", mult);
	} 
	else {
		suma = n2 + n3 ;
		printf("El primer numero no fue positivo, la suma de los otros dos es %.2f", suma);
	}
     
    return 0;
}
