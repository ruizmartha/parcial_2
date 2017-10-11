#include<stdio.h>

void main ()
{
	int a,b,ca=2000,co=1234,rlst=0;
	printf("introduzca la contraseña");
	scanf("%d",&co);
	printf("introduzca el saldo");
	scanf("%d",&ca);
	printf("introduzca el valor");
	scanf("%d",&a);
	printf("introduzca el valor");
	scanf("%d",&b);
	switch(ca)
	{
	case1:
	rlst=ca+a;
	printf("el resultado de la suma es %d %d",rlst);
	break;
	case2:
		rlst=b-ca;
		printf("el resultado a retirar es %d",rlst);
		break;
		case3:
			if(b>ca);
			printf("no cuenta con suficiente saldo");
			break;
			case4:
			printf("ver el saldo");
			break;
	deafult:
		printf("el caracter no es valido");
}
}
