#include <stdio.h>
#include <conio.h>

int main()
{
	float n1, n2, n3, suma, resta, mul, div;
	
    printf("Dame los numeros\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
	
	//Suma
	suma=n1+n2+n3;
	//resta
	resta=n1-n2-n3;
	//multiplicacion
	mul=n1*n2*n3;
	//division e imprimir si todos los numeros son diferentes de cero
	if(n2 == 0 || n3 == 0){
		printf("Has ingresado un 0, no se puede hacer la divison\n");
		printf("La suma de los 3 numeros es: %.3f, su resta es: %.3f y su multiplicacion es %.3f", suma, resta, mul);
	}
	else{
		div = n1/n2/n3;
		printf("La suma de los 3 numeros es: %f, su resta es: %f, su multiplicacion es %f y su division es %f", suma, resta, mul, div);
	}
    
    return 0;
}
