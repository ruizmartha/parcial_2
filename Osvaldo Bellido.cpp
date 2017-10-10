#include<stdio.h>
#include<conio.h>
main()
{
	int s=0,a=2;
	for(a=2;a<30;a+=3)
	{
		printf("%d",a);
		if(a%5==0)
		s+=a;
	}
	printf("nnt los numeros de 2 en 2 es %d",s);
	getch();
}
