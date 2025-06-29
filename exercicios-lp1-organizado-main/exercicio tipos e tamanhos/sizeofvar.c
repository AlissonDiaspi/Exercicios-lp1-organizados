/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    /**************************
    tipos primitivos:
    char: é utilizado quando se quer usar apenas um caracter
    int: é utilizado quando se quer usar números inteiros sem ponto flutuante
    float: é utilizado quando se quer usar números com ponto flutuante(números menores)
    double : é utilizado quando se quer usar números com ponto flutuante(números maiores)
    void : é utilizado quando o retorno da função é vazio, ou seja, não retorna nada
    ***************************/
    int var = 10;
    float var1 = 10.0;
    double var2 = 10.0;
    char var3 = "a";
    
    
    printf("quantidade de bytes da variavel inteira: %li bytes\n",sizeof(var));
    printf("quantidade de bytests da variavel float: %li\n",sizeof(var1));
    printf("a quantidade de bytes  da variavel double: %li\n",sizeof(var2));
    printf("a quantidade de bytes da variavel char: %li\n", sizeof(var3));
    printf("void não possui tamanho definido \n");
    /**************************
     exercicio da aula anterior
    ***************************/
    int n1 = 100, n2 = 200, resp = 0;
    resp = (n1+n2)*10;
    printf("com parentesis, o programa irá resolver o calculo do parentesis primeiro\n");
    printf("exemplo:%i\n",resp);
    printf("sem parentesis, a ordem de precedência é a multiplicação ou divisão\n");
    resp = 200+10*10;
    printf("exemplo:%i\n",resp);
    printf("sem multiplicação ou divisão, a ordem segue a soma ou subtração\n");
    
    return 0;
}
