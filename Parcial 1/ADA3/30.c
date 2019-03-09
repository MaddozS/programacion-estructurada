//E.P. que lea un n�mero entero obtenido al lanzar un dado de seis
//caras e imprimir el n�mero en letras de la cara opuesta. En las caras
//opuestas de un dado de seis caras est�n los n�meros: 1-6, 2-5 y 3-4.
//Si el n�mero del dado capturado es menor que 1 o mayor que 6, se
//mostrar�: �Un DADO no tiene ese n�mero�. (utilizar switch)


//Autores = programadores empedernidos.

#include <stdio.h> 
#include <conio.h>
int main () 
{
	int lado; 
	
	//Se pregunta el lado obtenido
	printf( "\nDime el numero del lado que te toco del dado: " ) ;
	scanf( "%d", &lado) ; 
	
	//se compara en cada caso el numero del obtenido del dado
	switch (lado) 
	{
		case 1: 
			printf( "La cara opuesta es seis" ) ;
			break;
		case 2: 
			printf( "La cara opuesta es cinco" ) ;
			break;
		case 3:
			printf( "La cara opuesta es cuatro" ) ;
			break;
		case 4: 
			printf( "La cara opuesta es tres" ) ;
			break;
		case 5: 
			printf( "La cara opuesta es dos" ) ;
			break;
		case 6:
			printf( "La cara opuesta es uno" ) ;
			break;
		default:
			printf( "\nUn DADO no tiene ese numero" ) ; 
			break;
	}
	
	return 0 ;
}
	
 



