#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1,num2,resultado,d;
	char operador,salir;
Z:	printf("Primer numero: ");
	scanf("%f",&num1);
	printf("Segundo numero: ");
	scanf("%f",&num2);
	printf("Operacion (+,-,*,/): ");
	scanf("%s",&operador);
	switch(operador){
		case '+':
		resultado=num1+num2;
		break;
		case '-':
		resultado=num1-num2;
		break;
		case '*':
		resultado=num1*num2;
		break;
		case '/':
		resultado=num1/num2;
		break;
		
			
	}
	printf("Resultado: %.2f \n\n",resultado);
    printf("Desea Salir?: ");
    printf("\n1-No\n2-Si\n");
    scanf("%f",&d);
    if(d==1){
    	system("cls");
    	goto Z;
    
	}

    else if (d==2){
    	printf("Adios\n");
	}
	
system("pause");
return 0;	

}
