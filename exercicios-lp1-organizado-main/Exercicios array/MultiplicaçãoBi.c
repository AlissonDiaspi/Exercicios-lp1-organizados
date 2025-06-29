
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // gerando as matrizes bidimensionais  com os valores
   // para a aplicação dar certo, é necessário que o número de colunas da matriz A seja igual ao numero de linhas da matriz B
int linhasA;
int colunaA;
int linhasB;
int colunaB;
printf("quantas linhas você quer na matriz A?\n");
scanf("%d",&linhasA);
printf("quantas colunas você quer na matriz A?\n");
scanf("%d",&colunaA);
printf("quantas linhas você quer na matriz B\n");
scanf("%d",&linhasB);
printf("quantas colunas você quer na matriz B?\n");
scanf("%d",&colunaB);
if(colunaA> linhasB || colunaA<linhasB){
    while(colunaA>linhasB){
        printf("quantas colunas você quer na matriz A?\n");
        scanf("%d",&colunaA);
        printf("quantas linhas você quer na matriz B\n");
        scanf("%d",&linhasB);
    }
}
int matrizA[linhasA][colunaA];
int matrizB[linhasB][colunaB];
int resultado[linhasA][colunaB];

// para adicionar elementos na matriz A:
for(int i = 0;i<linhasA;i++){
    for(int j = 0;j<colunaA;j++){
        printf("adicione valores na sequencia, primeiro valor é para linha e segundo para coluna\n");
        scanf("%d",&matrizA[i][j]);
    }
}
// para adicionar elementos na matriz B:
for(int i = 0;i<linhasB;i++){
    for(int j = 0;j<colunaB;j++){
        printf("adicione valores na sequencia, primeiro valor é para linha e segundo para coluna\n");
        scanf("%d",&matrizB[i][j]);
    }
}
// inicializar a matriz do resultado
for(int i = 0;i<linhasA;i++){
    for(int j = 0;j<colunaB;j++){
        resultado[i][j] = 0;
    }
}
// multiplicar as matrizes
for(int i = 0;i<linhasA;i++){
    for(int j = 0;j<colunaB;j++){
        for(int k = 0;k<colunaA;k++){
            resultado[i][j] += matrizA[i][k] * matrizB[k][j];
        }
    }
}
for(int i = 0;i<linhasA;i++){
    for(int j = 0;j<colunaB;j++){
        printf("%d ",resultado[i][j]);
    }
    printf("\n");
}



    
    

    return 0;
}
