
#include<stdio.h>
void main()
{
	int num, cont=1, suma=1;
	printf("introduzca un valor\n");
	scanf("%d",&num);
    for(num=1; num<=7; num++){
	   suma=num+cont;
	   printf("%d + %d = %d\n",num,cont,suma);
	   
	
       }
}
