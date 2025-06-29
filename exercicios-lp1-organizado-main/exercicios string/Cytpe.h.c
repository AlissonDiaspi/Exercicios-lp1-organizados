//utilizar as bibliotecas
#include <stdio.h>
#include <ctype.h>
#include<string.h>
#include <stdbool.h>
#include<stdlib.h>



int main()
{
    // biblioteca do ctype.h
    char nome[10];
    
    printf("digite uma letra\n");
    scanf("%c",nome);
   
    
    // utilizando o isupper
    if(isupper(nome[0])){
    printf(" é maiuscula\n");
    }
    else{
        printf("é minuscula\n");
    }
   
   //transformando maiscula em minuscula e vice versa
    if(isupper(nome[0])){
     
     
    printf("%c\n", tolower(nome[0]));
     
    }
    else{
        printf("%c\n",toupper(nome[0]));
    }
    // utilizando o atoi -> o programa ja compila o atoi automaticamente 
    printf("%d\n",nome[0]);
    //utilizando o atof 
    double numeroAtof = atof(nome);
    printf("%lf",numeroAtof);
    
    

    return 0;
}