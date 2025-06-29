
#include <stdio.h>
#include <stdlib.h>

 double calcRazao(double valorEtanol, double valorGasolina, double valorGnv, double razaopreco){
      razaopreco  = (valorGasolina/valorEtanol)/valorGnv;
     return razaopreco;
}

double valeApenaGas(double consumokwidgas,double razaoconsumogas, double valorGasolina){
     razaoconsumogas = consumokwidgas/valorGasolina;
    
     return razaoconsumogas;
     
}
double valeApenaEta(double consumokwideta,double razaoconsumoeta,double valorEtanol){
    
     razaoconsumoeta = consumokwideta/valorEtanol;
     return razaoconsumoeta;
     
}
double valeApenaGnv(double consumokwidgnv, double razaoconsumognv, double valorGnv){
    
     razaoconsumognv = consumokwidgnv/valorGnv;
     return razaoconsumognv;
     
}

int main()
{
     /*******
     entrei com o consumo de um kwid
     *****/
    double valorGasolina;
    double valorEtanol;
    double valorGnv;
    double razaopreco;
    
    double consumokwidgas = 14.9;
    double consumokwideta = 10.3;
    double consumokwidgnv = 18.5;
    
    printf("qual o valor do Etanol?\n");
    scanf("%lf",&valorEtanol);
    printf("qual o valor da Gasolina??\n");
    scanf("%lf",&valorGasolina);
    printf("qual o valor do gnv?\n");
    scanf("%lf",&valorGnv);
    
    razaopreco =(calcRazao( valorEtanol,  valorGasolina,  valorGnv,  razaopreco));
    
    
   
    printf("razão de preço: %lf\n",razaopreco);
    
    /********
     mostrar quem vale mais a pena
     ************/
     double razaoconsumogas;
     double razaoconsumoeta;
     double razaoconsumognv;
    
   razaoconsumogas = valeApenaGas(consumokwidgas, razaoconsumogas, valorGasolina);
   razaoconsumoeta = valeApenaEta(consumokwideta, razaoconsumoeta, valorEtanol);
   razaoconsumognv = valeApenaGnv(consumokwidgnv,razaoconsumognv,valorGnv);
   
    
    
    if(razaoconsumogas> razaoconsumognv && razaoconsumogas> razaoconsumoeta){
        printf("é melhor abastecer com gasolina");
    }
    else if(razaoconsumoeta> razaoconsumogas && razaoconsumoeta> razaoconsumognv){
        printf("é melhor abastecer com etanol");
    }
     else{
         printf("é melhor abastecer com Gnv");
     }
    
   
    
     
     
    
    return 0;
}




