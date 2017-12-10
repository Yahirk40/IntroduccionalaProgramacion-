#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,d,e,p;
	printf("¿Cuales son tus 5 calificaciones? ");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5 ;
	if(p>=6)
	{
		printf("Estas Aprobado, Tu promedio es: %.1f \n",p);
		
	}
	else {
		printf(" Estas Reprobado, Tu promedio es %.1f \n\n\n\n",p);
		
	}
	system("pause");
	return 0;
}
