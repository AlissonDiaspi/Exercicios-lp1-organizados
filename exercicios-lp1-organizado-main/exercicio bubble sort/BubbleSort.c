
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Bubble sort corrigido
    char sort[10];
    int length;
    
    printf("Enter your name: \n");
    fgets(sort, sizeof(sort), stdin);
    
    // utilizei esse algoritmo para remover a linha que o fgets pode colocar
    length = strlen(sort);
    if (sort[length-1] == '\n') {
        sort[length-1] = '\0';
        length--;
    }
    
    // Bubble Sort
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (sort[j] > sort[j+1]) {
                
                char placeholder = sort[j]; // placeholder segura o j que é maior e o sort na posição j recebe o j menor 
                sort[j] = sort[j+1];
                sort[j+1] = placeholder;
            }
        }
    }
    
    // para imprimir os caracteres, utilizei o %d pois o programa ja converte o respectivo caracter em valor inteiro
    printf("characters: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", sort[i]);
    }
    printf("\n");
    
    return 0;
}