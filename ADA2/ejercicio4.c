#include <stdio.h>
#include <conio.h>

int main()
{
	float h, b, a;
	
    printf("Dame la altura del triangulo\n");
    scanf("%f", &h);

    printf("Dame la base del triangulo\n");
    scanf("%f", &b);

    a=(h * b)/2;
    
    printf("La area del triangulo es: %f", a);

    
    return 0;
}
