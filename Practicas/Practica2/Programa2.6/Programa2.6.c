#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float x,fx;
printf("fx=(sin(2x))-x");
for(x=0;x<=10;x=x+0.5){
	fx=(sin(2*x))-x;
	printf("\nfx=%.2f\n",fx);
}
	
	
	
	
	
	system("pause");
	return 0;
}
