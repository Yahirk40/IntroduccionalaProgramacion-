#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("Teclea un valor para x: ");
	scanf("%f",&x);
	if(x<=0)
{ y=(x*x)-x;
	}	
	else {
		y= -(x*x)+(3*x);
	}
	printf("El valor para Y es de: %f ",y);
	
	system("pause");
	return 0;
}
