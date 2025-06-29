#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t inicio = clock();
    double tempo = 0;
    int volume = 2;  
    int linhas = 2;        
    int colunas = 2;       
    int tamanhoArray = volume * linhas * colunas;
    int vetorSimulaA[8];  
    int vetorSimulaB[8];  
    int resultado[8];     
    

   
    
    for (int i = 0; i < tamanhoArray; i++) {
        scanf("%d", &vetorSimulaA[i]);
       
    }

   
    
    for (int i = 0; i < tamanhoArray; i++) {
      
        scanf("%d", &vetorSimulaB[i]);
    }

   
    for (int i = 0; i < volume; i++) {        
        for (int j = 0; j < linhas; j++) {          
            for (int k = 0; k < colunas; k++) {      
               
                int indice = i * linhas * colunas + j * colunas + k;
                resultado[indice] = 0;
                
                // Multiplicação dos elementos
                // esse algoritmo acessa os elementos das matrizes e empurra para a coluna, mas como é tridimensional, adiciona a camada do volume e o empurra para o lado
                for (int l = 0; l < colunas; l++) {
                    int indiceA = i * linhas * colunas + j * colunas + l;
                    int indiceB = i * linhas * colunas + l * colunas + k;
                    resultado[indice] += vetorSimulaA[indiceA] * vetorSimulaB[indiceB];
                }
            }
        }
    }

    

    //resultado de a*b
   
    for (int i = 0; i < volume; i++) {
     
        for (int j = 0; j < linhas; j++) {
            for (int k = 0; k < colunas; k++) {
                int indice = i * linhas * colunas + j * colunas + k;
                printf("%d ", resultado[indice]);
            }
            printf("\n");
        }
    }

   
  
    clock_t fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de execucao: %lf segundos\n", tempo);

    return 0;
}