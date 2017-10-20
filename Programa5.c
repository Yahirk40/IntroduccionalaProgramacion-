#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  enum tipo_grados{
       Centigrados=1,
       Farenheid=2
       
       
       
       };
       enum tipo_grados tipo;
       float magnitud,res;
       
       printf("Este es un programa para convertir\n grados Farenheid y Centigrados a su equivalente en el otro\n");
       printf(" \n¿Que clase de grados desea convertir? \n");
       printf("\t1-Centigrados\n");
       printf("\t2-Farenheid \n");
       scanf("%d",&tipo);
       printf("\nIngrese la magnitud de los grados: \n");
       scanf("%f",&magnitud);
       
       switch (tipo)
       {
              case Centigrados:
                   res= ((9*magnitud)/5)+32;
                   
                   printf( "\nLa magnitud ingresada es equivalente a: %f grados farenheit\n" ,res);
                   break;
                   
              case Farenheid:
                   res=((5*magnitud)-5*32)/9;
                   
                     printf( "\nLa magnitud ingresada es equivalente a: %f grados centigrados \n",res);
                     break;
                     
              
                   }
  system("PAUSE");	
  return 0;
}
