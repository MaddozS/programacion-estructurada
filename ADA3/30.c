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
			printf( "Tiene cuatro letras la cara opuesta al 1" ) ;
			break;
		case 2: 
			printf( "Tiene cinco letras la cara opuesta al 2" ) ;
			break;
		case 3:
			printf( "Tiene seis letras la cara opuesta al 3" ) ;
			break;
		case 4: 
			printf( "Tiene cuatro letras la cara opuesta al 4" ) ;
			break;
		case 5: 
			printf( "Tiene tres letras la cara opuesta al 5" ) ;
			break;
		case 6:
			printf( "Tiene tres letras al cara opuesta al 6" ) ;
			break;
		default:
			printf( "\nUn DADO no tiene ese numero" ) ; 
			break;
	}
	
	return 0 ;
}
	
 



