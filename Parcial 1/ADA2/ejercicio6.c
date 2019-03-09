#include <stdio.h>
#include <conio.h>

int main()
{
	float c, f;
	
    printf("Dame la temperatura en grados centigrados\n");
	scanf("%f", &c);
	//conversion
	f = (c * 1.8) + 32;
	
	printf("%.2f grados centigrados equivalen a %.2f grados Fahrenheit", c, f);
     
    return 0;
}
