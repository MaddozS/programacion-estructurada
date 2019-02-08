#include <stdio.h>
#include <conio.h>

int main()
{
	char nom[100], dir[100];
    printf("Cual es tu nombre completo?\n");
    gets(nom);
    
    printf("Cual es tu direccion completa?\n");
    gets(dir);
    printf("Tu nombre es: %s y vives en %s", nom, dir);
    
    return 0;
}
