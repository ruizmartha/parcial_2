	#include <stdio.h>

void main ()
{
 int clave,c=3,opcion,ingreso,saldo=2000 , menu , ingresar , retirar , consultar ;
 while (clave!=1029 && c>=1)
  {
  c--;
  printf ("nIntroduce tu clave de acceso (4 cifras)");
  scanf ("%i",&clave);
  if (clave!=1029)
   {
   if (c!=0)
   printf ("nTe quedan %i intentos",c);
   else
   printf ("nLo siento, no has introducido la clave correcta");
   }
  else
  {
  do
  {
  printf ("n");
   opcion=menu ();
   switch (opcion)
    {
    case 1:
    saldo=ingresar (saldo);
    printf ("nEl saldo final de su cuenta son %i dolar",saldo);
    break;
    case 2:
    saldo=retirar(saldo);
    break; 
    case 3:
    consultar (saldo);
    break;
    case 4:
    printf ("nHa elegido la opcion cancelar, Adios");
    break;
    }
   }while (opcion!=4);
   }
 }
}
 


