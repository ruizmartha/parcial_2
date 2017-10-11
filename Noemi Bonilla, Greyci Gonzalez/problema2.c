#include <stdio.h>
void main () {
	int cant=0, primos=0, cont=0, i;
	printf("Introduzca un numero\n");
	scanf("%d", &cant);
	while (primos<2)
	{
		for(i=2; i<cant; i++)
		{
			if(cant+1%i==0)
			{
				cont++;
			}
			cant++;
			if (cont==2)
			{
				printf("%d", cant);
				primos++;
			}
		}
	}
}
