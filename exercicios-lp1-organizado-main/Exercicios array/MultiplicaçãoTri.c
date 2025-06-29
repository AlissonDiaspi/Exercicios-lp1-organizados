
#include <stdio.h>

int main()
{
    // mulitplicação de matrizes tridimensionais
    // nesse algoritmo, ja deixei definido as posições das matrizes
    int matrizA[2][2][2];
    int matrizB[2][2][2];
    int resultado[2][2][2];
    
    // adicionando valores na matriz A
    for(int i = 0;i<2;i++){
        for(int j =0;j<2;j++){
            for(int k = 0;k<2;k++){
                printf("quais valores quer adicionar na matriz?\n");
                scanf("%d",&matrizA[i][j][k]);
            }
        }
    }
    // adicionando valores na matriz B
     for(int i = 0;i<2;i++){
        for(int j =0;j<2;j++){
            for(int k = 0;k<2;k++){
                printf("quais valores quer adicionar na matriz?\n");
                scanf("%d",&matrizB[i][j][k]);
            }
        }
    }
    // inicializando a o resultado das matrizes
     for(int i = 0;i<2;i++){
        for(int j =0;j<2;j++){
            for(int k = 0;k<2;k++){
               resultado[i][j][k] = 0;
            }
        }
    }
    //multiplicando as matrizes
     for(int i = 0;i<2;i++){
        for(int j =0;j<2;j++){
            for(int k = 0;k<2;k++){
               resultado[i][j][k] += matrizA[i][j][k] * matrizB[i][j][k];
            }
        }
    }
     for(int i = 0;i<2;i++){
        for(int j =0;j<2;j++){
            for(int k = 0;k<2;k++){
               printf("%d ",resultado[i][j][k]);
            }
        }
        printf("\n");
    }
    
    return 0;
}