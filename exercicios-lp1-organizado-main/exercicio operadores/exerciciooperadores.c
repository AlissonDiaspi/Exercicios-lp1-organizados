/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("soma(+):%i\n ", 200+300);
printf("subtração(-):%i\n", 300-200);
printf("multiplicação(*):%i\n",200*10);
printf("divisão(/):%i\n",200/10);

printf("se o calculo tiver parentesis, o parentesis será prioridade na ordem\n");
printf("exemplo:%i\n",(100+200)*10);

printf("se o calculo não tiver parentesis, a prioridade será a multiplicação ou divisão!\n"); 
printf("exemplo:%i\n",200+100*10);

printf("se o calculo não tiver multiplicação, a ordem de precedência será soma ou subtração");

    

    return 0;
}
