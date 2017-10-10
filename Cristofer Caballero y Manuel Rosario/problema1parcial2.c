#include<stdio.h>
void main()
{
	int num=0, a=0,b=0,c=0,d=0;
	for(a=2; a<=25; a++){
		if(a%2==0)
		printf("%d\t",a);
	}
	printf("\n");
	for(b=3; b<=25; b++){
		if(b%3==0)
		printf("%d\t",b);
	}
	printf("\n");
		for(c=4; c<=25; c++){
		if(c%4==0)
		printf("%d\t",c);
	}
	printf("\n");
		for(d=25; d<=25; d++){
		if(d%25==0)
		printf("%d\t",d);
	}
}
