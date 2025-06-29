/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   
    srand(time(NULL));
    clock_t inicio = clock();
    double tempo = 0;
    int vetor[30];
    
    // utilizando arrays pequenos 
    for(int i = 0;i<30;i++){
        vetor[i] = rand()%100+1;
       
    }
    for(int i = 0;i<30;i++){
        printf("número: %d\n",vetor[i]);
    }
    clock_t fim = clock();
    tempo = (double)(fim-inicio)/CLOCKS_PER_SEC;
    printf("tempo: %lf\n",tempo);
    printf("----------------------------------------- \n\n");
    
    //utilizando arrays médios
    
     inicio = clock();
    
    int vetorMedio[250];
    for(int j = 0;j<250;j++){
        vetorMedio[j] = rand()%100+1;
        
    }
     for(int j = 0;j<250;j++){
        printf("número: %d\n",vetorMedio[j]);
        
    }
     fim = clock();
    tempo = (double)(fim - inicio)/CLOCKS_PER_SEC;
    printf("tempo: %lf\n",tempo);
    printf("-----------------------------------------\n\n");
    
    //utilizando arrays maiores
    int vetorMaior[500];
    inicio = clock();
    
    
    for(int k = 0;k<500;k++){
        vetorMaior[k] = rand()%100+1;
    }
    for(int k = 0;k<500;k++){
        printf("número: %d\n", vetorMaior[k]);
    }
    fim = clock();
    tempo = (double)(fim- inicio)/ CLOCKS_PER_SEC;
    printf("tempo: %lf\n",tempo);
    
    // Conclusão: o tempo cresceu de acordo o array aumentava
    
    
    
    

    return 0;
}