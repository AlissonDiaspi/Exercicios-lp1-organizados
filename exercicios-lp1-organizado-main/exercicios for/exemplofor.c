/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    int cont= 0;
    printf("digite um número!");
    scanf("%i",&n);
    for(int i = 0;i<n;i++){
        
        for(int n1= 0; n1<n;n1++){
            printf("%i, de j:%i\n",i,n1);
             cont+=1;
            for(int n2= 0; n2<n;n2++){
                printf("valor de i: %i, valor de j: %i, valor de h: %i\n",i,n1,n2);
               cont+=1;  
            }
             cont+=1;
        }
       
    }
    printf("%i",cont);
    
    

    return 0;
}