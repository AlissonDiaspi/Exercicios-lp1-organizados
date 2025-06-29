
#include <stdio.h>
#include <time.h>

    double funcFor(double x ,double numGigante){
        while(x<numGigante){
        printf("%f",x);
        x++;
        return x;
        
        }
        
    }

int main()
{
    
    double tempoPrograma;
    double numGigante = 0;
    double x = 0;
    
    clock_t inicioPrograma = clock();
    
   printf("entre com um número gigante\n");
  
   scanf("%lf",&numGigante);
   
   
   
   
   clock_t fimPrograma = clock();
   
    tempoPrograma = (double) (fimPrograma - inicioPrograma) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %f segundos\n", tempoPrograma);
  
  


    return 0;
}
