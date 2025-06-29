/*************************
 arredondar em duas casa decimaias para cima 
 calcular imposto de renda 
 calcular as somas com vale transporte e auxilio alimentação
 calcular os descontos do salário
 mostrar o salário liquido
 inss é em cima do salario sem auxilio
 irpf é em cima do salario sem auxilio
 perguntar se possue plano de saude
 
 ************************/



#include <stdio.h>

int main()
{
   double salariobase = 0;
   double planosaude = 0;
   double salarioliquido = 0;
   double valealimento = 0;
   double valetransporte = 0;
   int simnao;
   double salariobruto = 0;
   double salarioimp = 0;
   printf("qual o salário?\n");
   scanf("%lf",&salariobase);
   printf("qual o vale alimento?\n");
   scanf("%lf",&valealimento);
   printf("possui vale transporte?1/2\n");
   scanf("%d", &simnao);
   if(simnao == 1){
       salariobruto = salariobase+valealimento + (salariobase*6)/100;
       salarioimp = salariobase+(salariobase*6)/100;
   } else{
       salariobruto = salariobase+valealimento;
        double salarioimp = salariobase;
   }
   
   
   
   
   printf(" o seu salario bruto é : %.2lf\n",salariobruto);
   printf("o seu salário sem auxilio é : %.2lf\n",salarioimp);
   
   double inss = 0;
   double irpf = 0;
   double controlesindical = (salariobase*10)/100;
   
   /**************************
    calculo dos descontos
    *************************/
   if(salarioimp == 1518 ){
       inss = (salarioimp*7.5)/100;
       irpf = (1518*7.5)/100;
   } else if(salarioimp >1518 &&  salarioimp<=2793.88 ){
       inss = (salarioimp*9)/100;
       if(salarioimp >2259 && salarioimp <=2826.65){
            irpf = (1518*7)/100;
            irpf+= (2259-1518)*7.5/100;
        
       }
   } else if(salarioimp>2793.88 && salarioimp<=4190.83){
       inss = (salarioimp*12)/100;
       if(salarioimp>2826.65 && salarioimp<= 3751.05){
           irpf = (1518*7)/100;
           irpf+= (2259-1518)*7.5/100;
           irpf += (3751-2826.65)*9/100;
           
           
       }
   } else if(salarioimp> 4190.83 && salarioimp<= 8157.41){
       inss = (salarioimp*14)/100;
       if(salarioimp>3751.05 && salarioimp<= 4664.68){
           irpf = (1518*7)/100;
           irpf+= (2259-1518)*7.5/100;
           irpf += (3751-2826.65)*9/100;
           irpf+= (4664.68-3751)*22.5/100;
           
       }
   } else if(salarioimp>= 8157.41 && salarioimp<=13969.49){
       inss = (salarioimp*14.5)/100;
       if(salarioimp>4664.68){
           irpf = (1518*7)/100;
           irpf+= (2259-1518)*7.5/100;
           irpf +=(3751-2826.65)*9/100;
           irpf+= (4664.68-3751)*22.5/100;
           irpf = irpf*27.5/100;
       }
   }
  
   printf("seu inss é: %lf\n",inss);
   printf("seu iprf é: %lf\n",irpf);
   
   printf("----------------------------\n");
   printf("possui plano de saúde? 1/2\n");
   int simnao1;
   scanf("%d",&simnao1);
   
   
   if(simnao1 == 1){
      printf("quanto o plano de saude?\n");
      scanf("%lf",&planosaude);
      salarioliquido = salarioimp- inss - irpf - planosaude;
   } else{
      salarioliquido = salarioimp - inss - irpf;
   }
   
   
   
   if (salarioliquido<1518){
       printf("impossivel receber esse salario\n");
       
   } else {
       printf("seu salário liquido é: %.2lf\n",salarioliquido);
   }
   
   
   
   
       
    

    return 0;
}