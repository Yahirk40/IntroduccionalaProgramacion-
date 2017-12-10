#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seleccion, total=0,total2=0,total3=0,cantidad,cantidad2,cantidad3,i,des,des2,des3,seleccion2,seleccion3,x,y;
	char decision;
	printf("\n¿Que desea Ordenar?\n");
	printf("1-Hamburgesa chica con papas y refresco $20\n2-Hotdog y Refresco $18\n3-Ensalada Rusa $15\n");
	scanf("%d",&seleccion);
	printf("¿Cantidad?: ");
	scanf("%d",&cantidad);
	switch (seleccion){
		case 1: total=20*cantidad;
		break;
		case 2: total=18*cantidad;
		break;
		case 3: total=15*cantidad;
		break;
	    }
		
	    
	printf("\nDesea Ordenar Algo mas?\n");
	printf("\n1-SI\n2-NO\n");
	scanf("%d",&des);
	if(des==1){
		printf("\nQue mas desea ordenar?\n");
		printf("1-Hamburgesa chica con papas y refresco $20\n2-Hotdog y Refresco $18\n3-Ensalada Rusa $15\n");
	    scanf("%d",&seleccion2);
  	    printf("¿Cantidad?: ");
	    scanf("%d",&cantidad2);
    	switch (seleccion2){
	 	 case 1: total2=20*cantidad2;
		 break;
	 	 case 2: total2=18*cantidad2;
		 break;
		 case 3: total2=15*cantidad2;
		 break;
		
		
	              }
	              printf("\n¿Desea Ordenar algo mas?\n");
	              printf("\n1-SI\n2-NO\n");
	              scanf("%d",&des2);
	              if(des2==1){
	              	     printf("\nQue mas desea ordenar?\n");
		                 printf("1-Hamburgesa chica con papas y refresco $20\n2-Hotdog y Refresco $18\n3-Ensalada Rusa $15\n");
	                     scanf("%d",&seleccion3);
  	                     printf("¿Cantidad?: ");
	                     scanf("%d",&cantidad3);
    	                  switch (seleccion3){
	 	                   case 1: total3=20*cantidad3;
		                   break;
	 	                   case 2: total3=18*cantidad3;
		                   break;
		                   case 3: total3=15*cantidad3;
		                   break;
		                   }
		                    y=total+total2+total3;
		                  printf("El total a pagar es de: $ %d \n\n",y);
	              	
				        }
				  else if( des2==2){
				  	    x=total+total2;
				  		printf("El total a pagar es: $ %d \n\n",x);
				  }
	              
	              

	}
	  else if(des==2){
		printf("El total a pagar es: $ %d \n\n",total);
	}
	

	
	
		
		
	
	
	
	
	
	system("PAUSE");
	return 0;
}
