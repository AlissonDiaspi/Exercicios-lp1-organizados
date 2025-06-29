#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t inicio = clock();
    double tempo = 0;
    
    int vetorSimulaA[4];  // Matriz A (2x2)
    int vetorSimulaB[4];  // Matriz B (2x2)
    int resultado[4];     // Matriz Resultado (2x2)
    int somatoria = 0;
    int linhasA = 2;
    int colunasA = 2;
    int linhasB = 2;
    int colunasB = 2;

    
    // adicionando na matriz A
    for (int i = 0; i < linhasA * colunasA; i++) {
        
        scanf("%d", &vetorSimulaA[i]);
        somatoria += vetorSimulaA[i];
    }

    // adicionando na matriz B
    printf("\nPreencha a Matriz B (2x2):\n");
    for (int i = 0; i < linhasB * colunasB; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetorSimulaB[i]);
    }

    // multiplicando a e b
    // o algoritmo que utilizei: vetorSimulaA[i * colunasA + k], ele  Acessa o elemento A[i][k].
    // vetorSimulaB[k * colunasB + j], ele  Acessa o elemento B[k][j], então multiplica esses dois acessos
    // o i*colunas acessa os elementos da linha e o + k empurra os elementos para coluna
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            resultado[i * colunasB + j] = 0;  // inicializei a matriz com 0
            for (int k = 0; k < colunasA; k++) {
                resultado[i * colunasB + j] += vetorSimulaA[i * colunasA + k] * vetorSimulaB[k * colunasB + j];
            }
        }
    }

    

   

    
    // i*colunas + j -> acessa os elementos da linha e o j empurra para coluna
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d ", resultado[i * colunasB + j]);
        }
        printf("\n");
    }

    
    

   
    clock_t fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de execucao: %lf segundos\n", tempo);

    return 0;
}