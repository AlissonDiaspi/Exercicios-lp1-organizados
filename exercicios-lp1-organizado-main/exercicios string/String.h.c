
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[20];
    char string1[20];
    char string2[20];
    char string3[40]; 

    // utilizando a strlen
    printf("Qual o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")];

    printf("\nSeu nome é: %s\n", nome);
    int tamanhoString = strlen(nome);
    printf("Tamanho do nome: %d\n", tamanhoString);

    // utilizando a  strcpy() 
    printf("\nDigite algo para copiar: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")];

    strcpy(string2, string1); // Copia string1 para string2
    printf("String original: %s\n", string1);
    printf("String copiada: %s\n", string2);

    // utilizando a  strcmp
    printf("\nDigite a primeira string para comparar: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("Digite a segunda string para comparar: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';

    int resultadoComparacao = strcmp(string1, string2);
    printf("Resultado da comparação (strcmp): %d\n", resultadoComparacao);
    if (resultadoComparacao == 0) { // se forem iguais, o programa retorna 0
        printf("As strings são iguais.\n");
    } else if (resultadoComparacao < 0) {
        printf("'%s' vem antes de '%s' \n", string1, string2); // string 1 antes de string 2
    } else {
        printf("'%s' vem depois de '%s' \n", string1, string2); // string 1 depois de string 2 
    }

    // utilizando a  strcat
    printf("\nDigite a primeira string para juntar: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; // utilizei esse algoritmo para tirar a quebra de linha do fgets

    printf("Digite a segunda string para juntar: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; // // utilizei esse algoritmo para tirar a quebra de linha do fgets

    strcpy(string3, string1); // Copia a primeira string para string3
    strcat(string3, string2); // Concatena string2 em string3

    printf("Strings concatenadas: %s\n", string3);

    return 0;
}