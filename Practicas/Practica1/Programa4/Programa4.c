#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float segundos_totales,horas,minutos,segundos,m;
    
    printf("Este programa convertira \n el numero de segundos ingresados\n a horas, minutos y segundos\n");
    printf("\nIngresa el valor de los segundos totales: \n");
    scanf("%f",&segundos_totales);
    m=segundos_totales/60;
    if(m<60){
             horas=0;
             minutos=m;
             segundos=120%60;
             
             }
             else if( m>=60){
                 horas=m/60;
                  minutos=m%60;
                  segundos=m%60;    
                               
                  }      
             
                  
             printf(" Horas: %f \n Minutos: %f \n Segundos: %f \n ",horas,minutos,segundos);
                   
    
    
  
  system("PAUSE");	
  return 0;
}
