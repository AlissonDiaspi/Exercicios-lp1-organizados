
#include <stdio.h>

int main()
{
    double valorGasolina;
    double valorEtanol;
   
    
    printf("qual o valor do etanol?\n");
    scanf("%lf",&valorEtanol);
    printf("qual o valor da gasolina?\n");
    scanf("%lf",&valorGasolina);
     double razao = valorEtanol/valorGasolina;
     
     if(razao< 0.7){
         printf("é melhor usar etanol\n");
         
     }
     else if(razao == 0.7){
         printf("use etanol para o bem do planeta\n");
         
     }
     else{
         printf("é melhor usar gasolina\n");
     }
     
        printf("valor da porcentagem: %.2lf", razao);
   
             

    return 0;
}
