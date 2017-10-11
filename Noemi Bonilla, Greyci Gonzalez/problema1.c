#include <stdio.h>
void main () {
	int saldo=2000, pass=1234, op, ing=0, ret=0, cont=0;
	printf("INTRODUZCA LA CONTRASENA: \t");
	scanf("%d", &pass);
	if(pass!=1234)
	{
		while(cont<3 && pass!=1234)
		{
			printf("CONTRASENA INCORRECTA, introduzcala nuevamente \t");
	        scanf("%d", &pass);
	        cont++;
		}
	    if (cont==3)
	        {
	        	printf("CUENTA BLOQUEADA");
		    }
	}
	else if(pass==1234)
	{
	printf("\nBIENVENIDO: Presione el numero de la opcion deseada:\n");
	printf("1. Ingreso a la cuenta\n");
	printf("2. Retiro\n");
	printf("3. Ver saldo de la cuenta\n");
	printf("Opcion salida (al introducir 0, terminara el programa)\n");
	scanf("%d", &op);
	printf("\n\n");
	switch (op)
	{
	case 1:
		printf("INGRESO\n");
		printf("Dijite la cantidad que desea ingresar:\t");
		scanf("%d", &ing);
		saldo=(saldo+ing);
		printf("\nNUEVO SALDO: \t%d", saldo);
		break;
	case 2:
		printf("RETIRO\n");
		printf("Dijite la cantidad que desea retirar:\t");
		scanf("%d", &ret);
		if(saldo<ret)
		{
			printf("\nATENCION!: No cuenta con el saldo suficiente\n");
		}
		else
		{
			saldo=(saldo-ret);
			printf("\nNUEVO SALDO: \t%d", saldo);
		}
		break;
	case 3:
		printf("VER SALDO\n");
		printf("Su saldo es: \t%d", saldo);
	case 0:
		printf("\nPROGRAMA TERMINADO");
		break;
	default:
		printf("LA OPCION ELEGIDA NO ES VALIDA");
    }
    }
}
