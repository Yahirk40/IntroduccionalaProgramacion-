#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float KWH, Costo,resta1,Adicional,a,b,c;
	printf("Hola, este es un programa para calcular tu tarifa\nmensual del servicio de luz.\n");
	printf("Porfavor introduce la cantidad de KWH consumidos:  \n");
	scanf("%f",&KWH);
	if(KWH<=50)
{
	Costo=(KWH*2.288)+52.84 ;
	}	
	else if(KWH>50 & KWH<=100)
	{
		resta1=KWH-50;
		a=(resta1*2.762);
		b=(50*2.288);
		Costo=(resta1*2.762)+(50*2.288)+(52.88);
		printf("Tarifa de los primeros 50 KWH: %.2f\n",b);
		printf("Tarifa de los KWH restantes: %.2f\n",a);
	}
	else if (KWH>100){
		Adicional=KWH-100;
		Costo=(50*2.288)+(50*2.762)+(Adicional*3.042)+(52.88);
		a=(50*2.288);
		b=(50*2.762);
		c=(Adicional*3.042);
		printf("Tarifa de los primeros 50 KWH: %.2f pesos\n",a);
		printf("\nTarifa del 51 al 100: %.2f pesos\n",b);
		printf("\nTarifa de KWH adicionales: %.2f pesos\n",c);
		
		
		
	}
	else {
		printf("No consumiste energia electrica");
	}
	printf("\nCargo fijo mensual: 52.84 pesos\n");
	printf("\nTotal a pagar: %.2f pesos\n",Costo);
	
	system("pause");
	return 0;
}
