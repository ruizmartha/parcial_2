#include<stdio.h>

void main(){
	int n,fila,resp=0,a=2;
	
	for(n=0; n<26; n++){
		for(fila=0; fila<26; fila++){
			resp=fila+a;
			
			if(resp%a==0)
			printf("%d ",resp);
		}
		a++;
		printf("\n");
	}
}
