#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])

{
    float radio,altura,area,generatriz,volumen;
    
    const float pi=3.141592;
     printf("Este es un programa para calcular\n el volumen y el area de un cono.\n");
     
     printf("\n Teclea el valor del radio: \n");
     scanf("%f",&radio);
     printf("Teclea el valor de la altura del cono:\n");
     scanf("%f",&altura);
     generatriz=sqrt((radio*radio)+(altura*altura));
     volumen=(pi*radio*radio*altura)/3;
     area=2*pi*radio*(generatriz/2)+(pi*radio*radio);
     printf("\nEl volumen del cono es: %f \n",volumen);
     printf("\nEl area del cono es: %f \n",area);
     
     
     
     
     
    
    
  
  system("PAUSE");	
  return 0;
}
