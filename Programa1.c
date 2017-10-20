#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float x,y,a,b,res;
    printf("Hola este es un programa\n que nos ayudara a resolver\n la ecuacion (x+y)*(x+y)*(a-b)\n para cualquier valor de las variables.\n\n");
    printf("Teclea un valor para x:\n  ");
    scanf("%f",&x);
    printf("Teclea un valor para y:\n  ");
    scanf("%f",&y);
    printf("Teclea un valor para a:\n ");
    scanf("%f",&a);
    printf("Teclea un valor para b:\n  ");
    scanf("%f",&b);
     
     res=(x+y)*(x+y)*(a-b);
     
     printf("El resultado es: %.1f ",res);
    
  
  system("PAUSE");	
  return 0;
}
