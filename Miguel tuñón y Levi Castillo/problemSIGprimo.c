#include <stdio.h>
void main()
{
int n, d=1,a=0;
printf("Ingrese un numero \n");
scanf("%d",&n);
while(d<=n)
{
	if(n%d==0)
	{
		++a;
	}
	++d;
}
if(a==2)
{
	printf("Es primo");
}
else{
	printf("No es primo");
}

}



