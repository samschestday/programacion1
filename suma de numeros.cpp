#include <conio.h>
#include <stdio.h>

int main()
{
	int n1,n2,producto,resta;
	//n1 es el primer numero a ingresar//
	//n2 es el segundo numero a ingresar//
	printf("/n introduzca el primer numero (entero): " );
	scanf( "%d", &n1);
	printf("/n introduzca el segundo numero (entero): ");
	scanf("%d", &n2);
	resta = n1 - n2;
	
	
	printf("/n La resta es %d", resta);
	
	getch(); /* Pausa*/
	
	return 0;
	
}
