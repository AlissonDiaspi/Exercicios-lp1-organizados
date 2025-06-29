/******************************************************************************

FOLHA DE PAGAMENTO 2:
Deve apresentar reservas mensais para pagamentos dos direitos do trabalhador;
Deve apresentar reservas mensais para pagamentos de impostos e multas no caso de demissão;
Deve apresentar os impostos e taxas pagos pelo setor do comércio;
Deve incluir versão 1 da atividade de Folha de pagamento;
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

double salarbruto(int simnao, double salariobruto, double valealimento, double salariobase){
     if(simnao == 1){
       
       salariobruto = salariobase+valealimento + (salariobase*6)/100;
       return salariobruto;
     }
     else{
          salariobruto = salariobase+valealimento;
          return salariobruto;
     }
     
}

 double salarimp(double salarioimp, int simnao, double  salariobase){
     if(simnao == 1){
       
        salarioimp = salariobase+(salariobase*6)/100;
        return salarioimp;
       
   } else{
      
         salarioimp = salariobase;
         return salarioimp;
            }
}

double calcdescinss(double inss, double  salarioimp){
    if(salarioimp == 1518 ){
       inss = (salarioimp*7.5)/100;
      
   } else if(salarioimp >1518 &&  salarioimp<=2793.88 ){
       inss = (salarioimp*9)/100;
       
   } else if(salarioimp>2793.88 && salarioimp<=4190.83){
       inss = (salarioimp*12)/100;
      
   } else if(salarioimp> 4190.83 && salarioimp<= 8157.41){
       inss = (salarioimp*14)/100;
       
   } else if(salarioimp>= 8157.41 && salarioimp<=13969.49){
       inss = (salarioimp*14.5)/100;
      
      return inss;
   }
}
  
   double calcdescirpf(double irpf, double salarioimp){
       if(salarioimp == 1518 ){
       irpf = (1518*7.5)/100;
   } else if(salarioimp >1518 &&  salarioimp<=2793.88 ){
      
       if(salarioimp >2259 && salarioimp <=2826.65){
            irpf = (1518*7)/100;
            irpf+= (2259-1518)*7.5/100;
        
       }
   } else if(salarioimp>2793.88 && salarioimp<=4190.83){
      
       if(salarioimp>2826.65 && salarioimp<= 3751.05){
           irpf = (1518*7)/100;
           irpf+= (2259-1518)*7.5/100;
           irpf += (3751-2826.65)*9/100;
           return irpf;
           
           
       }
   } else if(salarioimp> 4190.83 && salarioimp<= 8157.41){
      
       if(salarioimp>3751.05 && salarioimp<= 4664.68){
           irpf = (1518*7)/100;
           irpf+= (2259-1518)*7.5/100;
           irpf += (3751-2826.65)*9/100;
           irpf+= (4664.68-3751)*22.5/100;
          
           
       }
   } else if(salarioimp>= 8157.41 && salarioimp<=13969.49){
      
       if(salarioimp>4664.68){
           irpf = (1518*7)/100;
           irpf += (2259-1518)*7.5/100;
           irpf +=(3751-2826.65)*9/100;
           irpf += (4664.68-3751)*22.5/100;
           irpf += (irpf*27.5)/100;
           
       }
       return irpf;
      
   }
   }
   
   double salLiq(double salarioliquido, double salarioimp, double inss, double irpf, double planosaude, int  simnao1){
   if(simnao1 == 1){
      
      salarioliquido = salarioimp- inss - irpf - planosaude;
      
   } else{
      salarioliquido = salarioimp - inss - irpf;
   }
   return salarioliquido;
 }
   
    double calcemp(double verbarescisoria, double salariobruto, double fgts, double ferias,int simnao2){
   if(simnao2 == 1){
       verbarescisoria = salariobruto+(salariobruto/3);
       return verbarescisoria;
       
   } else{
       verbarescisoria = (fgts*40)/100; + salariobruto+(salariobruto/3) + ferias + (ferias/3);
       return verbarescisoria;
       }
   }  


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
   
   

  salariobruto = salarbruto(simnao, salariobruto,valealimento,salariobase);
  salarioimp = salarimp(salarioimp, simnao, salariobase);
        

   
   
   
   
   
   printf(" o seu salario bruto é : %.2lf\n",salariobruto);
   printf("o seu salário sem auxilio é : %.2lf\n",salarioimp);
   
   double inss = 0;
   double irpf = 0;
   double controlesindical = (salariobase*10)/100;
   
   /**************************
    calculo dos descontos
    *************************/
    
    
    
   inss =  calcdescinss( inss, salarioimp);
   irpf = calcdescirpf(irpf, salarioimp);

  
   printf("seu inss é: %lf\n",inss);
   printf("seu iprf é: %lf\n",irpf);
   
   printf("----------------------------\n");
   printf("possui plano de saúde? 1/2\n");
   int simnao1;
   scanf("%d",&simnao1);
   if(simnao1 == 1){
      printf("quanto o plano de saude?\n");
      scanf("%lf",&planosaude);
       
   }
   
   
   salarioliquido =  salLiq( salarioliquido,  salarioimp,  inss,  irpf,  planosaude, simnao1);
   
   if (salarioliquido<1518){
       printf("impossivel receber esse salario\n");
       
   } else {
       printf("seu salário liquido é: %.2lf\n",salarioliquido);
   }
   
   /*****************************
        PARTE EMPRESARIAL
   ****************************/
   
   double encargosocial = (salarioliquido*37)/100;
   double verbarescisoria = 0;
   double fgts = (salariobruto*8)/100;
   double ferias = salariobruto + (salariobruto/3) ;
   double decimoterceiro = salariobruto;
   int simnao2;
   printf("foi demissão justa causa?1 para sim e 2 para não\n");
   scanf("%d",&simnao2);
   
    verbarescisoria =   calcemp( verbarescisoria,  salariobruto,  fgts, ferias, simnao2);
       
       double reservadireito = fgts + ferias + decimoterceiro;
       double reservaimpostos = encargosocial+verbarescisoria+ salariobruto;
    printf(" A empresa possui para reserva de direitos: %.2f\n",reservadireito);
    printf("Em caso de demissão, a empresa possui para reserva de impostos e multa: %.2f",reservaimpostos);
    
    
    
   
  
    
    
    
     
    
    
    
    
       
    return 0;
}