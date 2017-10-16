#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
    float i,im,t,ph,n;
  
    
    
    char nombre[50];
    char a1[50];
    char a2[50];
    printf("Ingresa tu nombre con apellido:    ");
    scanf("%s %s %s", &nombre, &a1, &a2);
    
    printf("¿Cuantas horas trabajaste en esta semana?   ");
    scanf("%f",&t);
    printf("¿Cuanto te pagan por hora?  ");
    scanf("%f",&ph);
    
  
    i= t*ph ;
    im= 0.25*i ;
    n= i-im;
    printf("\n\n hola %s  %s  %s \n\n Tu ingreso semanal fue de %.1f  pesos \n  Tienes  un impuesto de %.1f pesos \n Tu sueldo neto es de %.1f pesos. \n " ,nombre,a1,a2,i,im,n); 
    
    
    
  
  system("PAUSE");	
  return 0;
}
