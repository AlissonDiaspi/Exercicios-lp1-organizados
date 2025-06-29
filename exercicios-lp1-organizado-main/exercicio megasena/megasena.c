/******************************************************************************
Desafio da mega sena:
números inteiros de 1 a 60
entrar com 6 números
pesquisar o sortear
utilizar while


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


 /*******
         para não repetir números
        ********/

void numRepeat(int quantidade[6], int dezena){
    for(int j = 0;j<6;j++){
        
        if(quantidade[j] == dezena){
            printf("números repetidos não são permitidos");
            break;
        
        }
        else if(quantidade[j] != dezena && j<=5 ){
            if(j == 5 ){
                quantidade[j] = dezena;
            }
        }
    }
}
/*******
        parte dos números "aleatorios"(Não existe aleatorio)
        ********/  
    
int randomNum(bool resultado, int numRandom, int listaRandom[6] ){
    resultado = true;
            while(resultado){
                numRandom = rand()%60+1;
                for(int j = 0;j<6;j++){
                        if(listaRandom[j] == numRandom){
                            break;
                        }
                        else if(listaRandom[j]!= numRandom && j<=5){
                            if(j == 5){
                                listaRandom[j] = numRandom;
                            }
                        }
        }
    return numRandom;
    }
}    

int main()
{
     srand(time(NULL));
    bool dezenaCerta;
    int dezena;
    int quantidade[6];
    dezenaCerta= true;
    int numRandom;
    int listaRandom[6];
    int acertos = 0;
    bool resultado;
     clock_t inicio = clock();
    for(int i = 0;i<6;i++){
        /*******
         para ver se está entre 1 e 60
        ********/
 
    while(dezenaCerta){
        printf("entre com a dezena");
        scanf("%i",&dezena);
        if(dezena>60 || dezena<1){
             printf("apenas valores de 1 a 60");
            }
        else{
             break;
        }
    }
   
     
  numRandom = randomNum(resultado,  numRandom,  listaRandom );
    
        
}
    
    
    for(int i = 0 ;i<6;i++){
        for(int j = 0;j<6;j++){
        if(listaRandom[j] == quantidade[i]){
            acertos+=1;
            
        }
        }
        if(acertos == 6){
            printf("você ganhou o jogo!\n");
            break;
        
        }
        else{
            acertos = 0;
        }
        clock_t fim = clock();
        
         double tempo_decorrido = (fim - inicio) / (double)CLOCKS_PER_SEC;
         printf("%lf",tempo_decorrido);
        
    }
    
    
    
    
   
   
    
   
   
    
    
    

    
    

    return 0;
}