#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c ;
    float m,n,s ;
  c=1;
  s=0;
  m=0;
  
  label:
  printf("Teclea un numero: ");
  scanf("%f",&n);
  if (n==0){
           m=s/c;
           printf("la media es %f ",m);
           
            
            }
            else{
                 c=c+1;
                 s=n+s;
                 printf("la suma es %f ",s);
                 goto label;
                
                 }
                 
  
  system("PAUSE");	
  return 0;
}
