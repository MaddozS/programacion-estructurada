#include <stdio.h>
#include <conio.h>

int main()
{
	int n1,n2,n3,n4,n5;
	float r1,r2,r3;
    printf("Dame los numeros enteros\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);

    
    printf("Dame los numeros reales\n");
	scanf("%f", &r1);
	scanf("%f", &r2);
    scanf("%f", &r3);

    printf("los numeros son enteros son %d, %d, %d, %d, %d", n1, n2, n3, n4, n5);
    printf("los numeros son reales son %f, %f, %f", r1, r2, r3);

    
    return 0;
}
