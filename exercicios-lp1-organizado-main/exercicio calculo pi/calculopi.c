#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

int main()
{
     srand(time(NULL));
    double dentroFora = 0;
    double calculoPi;
    double totalTentativas = 0;
    double x,y;
    double ladoQuadrado;
    double somaPontos;
   
   printf("informe o lado do quadrado");
   scanf("%lf",&ladoQuadrado);
   double areaQuadrado = ladoQuadrado*ladoQuadrado;
  
   double raio = ladoQuadrado/2;
   double areaCirculo = (raio*raio)*3.14;
    printf("area do quadrado: %.2lf\n",areaQuadrado);
    printf("area do circulo: %.2lf\n",areaCirculo);
   
   int quantidade;
   printf("quantas vezes quer gerar os números");
   scanf("%d",&quantidade);
   
   for(int i = 0;i<quantidade;i++){
       x = rand()%100;
       y = rand()%100;
       printf("%lf\n",x);
       printf("%lf\n",y);
       
       somaPontos = (x*x) + (y*y);
       if(somaPontos <= areaCirculo){
         dentroFora+=1;  
       }
      totalTentativas+=1;
      
      
      
       
   }
   printf("%lf\n",dentroFora);
   printf("%lf\n",totalTentativas);
   calculoPi = 4*(dentroFora/totalTentativas);
   printf("calculo pi: %.4lf",calculoPi);
   
   return 0;
}
