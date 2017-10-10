#include<stdio.h>
void main ()
{
    int num, primo, n,j;
    printf ("Introduzca numero: ");
    scanf ("%d", &num);
    n = num + 1;
    do
    {
       primo = 1;
       for (j = 2; j <= n/2 && primo; j++)
          if((n%j) == 0)
             primo = 0;  
       if (primo)
          printf("el numero primo siguiente de %d es: %d\n", num,n);    
       n++;     
    }while ( n && !primo);
}
