#include <stdio.h>
#include <stdlib.h>

main()
{
    float v,i,r;
    printf("\nHola, Vamos a calcular la resistencia electrica\n");
    printf("\n¿Cual es el voltaje(Volts)? \n");
    scanf("%f",&v);
    printf("\n¿Cual es el amperaje (en Amperes)? \n");
    scanf("%f",&i);
    r=v/i;
    printf(" \nEl valor de la resistencia es de %.1f Ohms \n" ,r);
  
  system("PAUSE");	
  return 0;
}
