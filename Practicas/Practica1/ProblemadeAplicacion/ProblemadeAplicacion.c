/* Este es un programa para calcular el volumen de un fluido en pozos profundos*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, ds,p, h, r ;
    const float g=9.81;
    const float pi=3.1415;
    printf("Hola, Vamos a calcular\n el volumen de agua  en el pozo\n\n");
    printf("Porfavor teclea el valor de presion que\n te proporciono el sensor: ");
    scanf("%f",&p);
    printf("Teclea el valor de la densidad \ndel fluido que contiene el pozo(kg/m^3): ");
    scanf("%f",&ds);
    h=(p)/(ds*g);
    printf("La altura del pozo es: %f metros ",h);
  printf("¿Cual es el radio del pozo?  ");
  scanf("%f",&r);
  v=h*pi*r*r;
  printf("El volumen de agua contenido en el pozo es de: %f Litros ",v);
  system("PAUSE");	
  return 0;
}
