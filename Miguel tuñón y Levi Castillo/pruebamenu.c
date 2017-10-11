#include<stdio.h>
#define CLV 452
#define SLDI 2000
void main ()
{
	int op,ctr,r;
	float ct,cnt,rt,rtr;
	
	do
	{system("cls");
			
	printf("Ingrese la clave\n");
	scanf("%d",&ctr);
	
	if(ctr==CLV)
	{ 
	printf("1-Ingrese en cuenta\n");
	printf("2-Retiro\n");
	printf("3-Ver saldo\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("Ingrese la cantidad de dinero\n");
			scanf("%f",&ct);
			
			cnt=ct+SLDI;
			
			printf("El saldo inicial es:%d\n",SLDI);
			printf("El saldo actual es:%.2f\n",cnt);
		break;
		case 2:
			printf("Ingrese la cantidad a retirar\n");
			scanf("%f",&rt);
			
			if(rt>SLDI)
			{
				printf("No cuenta con suficiente saldo\n");
			}else{
				rtr=SLDI-rt;
				
				printf("El saldo a retirar es:%.2f\n",rt);
				printf("El saldo actual es:%.2f\n",rtr); 
			}
		break;
		case 3:
			printf("El saldo es:%d\n",SLDI);
		break;
		default:
		printf("Opcion no valida\n");		
	}
	
    }else{
    	printf("Cuenta bloqueada\n");
	}
	printf("1-Desea continuar\n");
	printf("0-Desea salir\n");
	scanf("%d",&r);
  }
  while(r!=0);
 
}
