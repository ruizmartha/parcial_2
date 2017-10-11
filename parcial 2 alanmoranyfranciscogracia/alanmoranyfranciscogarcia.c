#include<stdio.h>
void main(){
	int cant_primos=0 , contador=0 , n=0 ,i=0,primos=0;
	printf("ingrese la cantidad de primos\n");
	scanf("%d",&cant_primos);
	n=2;

	while(primos<cant_primos)
	{
		contador=0;
		for(i=2 ; i<n ; i++)
		{
			if(n%i==0)
			contador++;
		}
	

     	if(contador==0){
		 
		printf("%d\n",n);
		primos++;
	}
	n++;
}

}
