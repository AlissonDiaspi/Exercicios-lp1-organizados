
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   
    // Tridimensional a partir de um array unidimensional
    clock_t inicio = clock();
    double tempo = 0;
    int vetorSimula[10];
    int somatoria = 0;
    int linhasA = 5;
    int colunasA= 3;
    int TriA = 4 ;
    //adicionando valores a matriz
    for(int i = 0;i<linhasA*colunasA*TriA;i++){
        printf("qual valor quer adicionar a matriz?\n");
        scanf("%d",&vetorSimula[i]);
        somatoria+= vetorSimula[i];
    }
    // o algoritmo para tridimensional que utilizei foi i* (coluna* o "volume") + j* volume + k
    // como são 3 dimensões, eles possuem colunas*"volume" de elementos, os quais cada linha possuem j*"volume" de elementos, e o + k é para deslocar os valores para dentro da linha
    for(int i = 0;i<linhasA;i++){
        for(int j = 0;j<colunasA;j++){
            for(int k = 0;k<TriA;k++){
              printf("%d ", vetorSimula[i*(colunasA*TriA) + j*TriA + k]);
               
            }
            printf("\n");
        }
    }
    printf("somatoria : %d\n",somatoria);
    clock_t fim = clock();
    tempo = (double)(fim-inicio)/CLOCKS_PER_SEC;
    printf("tempo:%lf ",tempo);
    
    return 0;
}