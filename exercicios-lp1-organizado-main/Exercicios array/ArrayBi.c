
#include <stdio.h>
#include<stdlib.h>
#include <time.h>


int main()
{
    clock_t inicio = clock();
    double tempo = 0;
    int vetorSimula[10];
    int somatoria = 0;
    int linhasA = 2;
    int colunasA = 2;
    
    
     // adicionando valores ao array
     for(int i = 0; i<linhasA*colunasA;i++){
         printf("adicione valores a sua matriz");
         scanf("%d",&vetorSimula[i]);
         somatoria+= vetorSimula[i];
     }
     // utilizarei o i*colunasA + j pois cada linha possui elementos em sua coluna, e o algoritmo das matrizes mostra que i*n serve para chegar na linha i, o +j ajeita o valor dentro da coluna
      
   for(int i = 0;i<linhasA;i++){
       for(int j = 0;j<colunasA;j++){
           printf("%d ",vetorSimula[i*colunasA+j]);
           
       }
       printf("\n");
   }
    printf("somatoria: %d\n",somatoria);
    clock_t fim = clock();
    tempo = (double)(fim-inicio)/CLOCKS_PER_SEC;
    printf("tempo: %lf ",tempo);
    

    return 0;
}
