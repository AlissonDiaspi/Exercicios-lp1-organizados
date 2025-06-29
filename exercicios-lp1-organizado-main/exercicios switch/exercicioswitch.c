/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dia;
    
    printf("digite um valor de 1 a 8 para os dias da semana\n");
    scanf("%i",&dia);
    
    switch(dia){
        case 1:
            printf("domingo\n");
            break;
        case 2:
            printf("segunda");
            break;
        case 3:
            printf("terça");
            break;
        case 4:
            printf("quarta");
            break;
        case 5:
            printf("quinta");
            break;
        case 6: 
            printf("sexta");
            break;
        case 7: 
            printf("sabado");
            break;
        case 8: 
            printf("domingo");
            break;
        default:
        printf("digite um valor de 1 a 8");
        break;
    }

    return 0;
}