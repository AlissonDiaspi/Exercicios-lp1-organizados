
#include <stdio.h>
#include <stdlib.h>

double somanum(double n1, double n2, double soma){
    soma = n1+n2;
    return soma;
}

double subtracaonum(double n1, double n2, double subtracao){
    subtracao = n1-n2;
    return subtracao;
}

double multiplicacaonum(double n1, double n2, double multiplicacao){
    multiplicacao = n1*n2;
    return multiplicacao;
}

double divisaonum(double n1, double n2, double divisao){
    divisao = n1/n2;
    return divisao;
    
}



int main()
{
    double n1;
    double n2;
    int quantOp;
    int qualOp;
    int qualvies;
    double soma;
    double subtracao;
    double multiplicacao;
    double divisao;
    int somab;
    int subtracaob;
    int multiplicacaob;
    int divisaob;
    double tercNum;
      
    
    printf("qual o primeiro número?");
    scanf("%lf",&n1);
    printf("qual o segundo número?");
    scanf("%lf",&n2);
    
    printf("é operação com um ou dois operadores? 1 para um e 2 para dois\n");
    scanf("%i",&quantOp);
    
    if(quantOp == 1  ){
        printf("qual operação?\n");
        printf("1 para soma \n 2 para subração \n 3 para multiplicação \n 4 para divisão\n");
        scanf("%d",&qualOp);
        
        switch(qualOp){
        case 1: soma = somanum( n1,  n2,  soma);
                printf("%.2lf",soma);
                break;
        case 2: 
                subtracao = subtracaonum( n1,  n2,subtracao);
                printf("%.2lf",subtracao);
                break;
        case 3 : 
                multiplicacao = multiplicacaonum( n1,  n2,  multiplicacao);
                printf("%.2lf",multiplicacao);
                break;
        case 4 : 
                divisao = divisaonum( n1,  n2, divisao);
                printf("%.2lf",divisao);
                break;
        default: 
            printf("digite um valor valido!");
            break;
            }
    
    }
    else if(quantOp == 2){
        printf("quer utilizar qual viés de operação?\n 1 para o viés da soma \n 2 para o viés da subtracao\n 3 para o viés da multiplicacao \n 4 para o viés da divisão\n");
        scanf("%i",&qualvies);
        
        if(qualvies == 1  ){
            printf("quer acessar soma com quem?\n 1 para subração \n 2 para multiplicação \n 3 para divisão\n");
            scanf("%i",&somab);
            printf("quem será o terceiro número que você irá utilizar na conta?\n");
            scanf("%lf",&tercNum);
            switch(somab){
                case 1 :
                    subtracao = n1+n2 - tercNum;
                    printf("%.2lf",subtracao);
                    break;
                case 2 : 
                    multiplicacao = n1+n2 * tercNum;
                    printf("%.2lf",multiplicacao);
                    break;
                case 3:
                    divisao = n1+ n2/tercNum;
                    printf("%.2lf",divisao);
                    break;
                default:
                    printf("digite um caso valido!");
                    break;
                
            }
        }
        else if(qualvies == 2){
            printf("quer acessar subtração com quem?\n 1 para adição \n 2 para multiplicação \n 3 para divisão\n");
            scanf("%i",&subtracaob);
            printf("quem será o terceiro número que você irá utilizar na conta?\n");
            scanf("%lf",&tercNum);
            switch(subtracaob){
                case 1 : 
                    soma = n1-n2 + tercNum;
                    printf("%.2lf",soma);
                    break;
                case 2 :
                    multiplicacao = n1-n2 * tercNum;
                    printf("%.2lf",multiplicacao);
                    break;
                case 3:
                    divisao = n1-n2/tercNum;
                    printf("%.2lf",divisao);
                    break;
                default:
                    printf("digite um valor valido!");
                    break;
                    
            } 
        }
        else if(qualvies == 3 ){
            printf("quer acessar multiplicação com quem?\n 1 para soma \n 2 para subtração \n 3 para divisão\n");
            scanf("%i",&multiplicacaob);
            printf("quem será o terceiro número que você irá utilizar na conta?\n");
            scanf("%lf",&tercNum);
            switch(multiplicacaob){
                case 1 : 
                    soma = n1*n2 + tercNum;
                    printf("%.2lf",soma);
                    break;
                case 2:
                    subtracao = n1*n2 - tercNum;
                    printf("%.2lf",subtracao);
                    break;
                case 3: 
                    divisao = n1*n2/tercNum;
                    printf("%.2lf",divisao);
                    break;
                default:
                    printf("digite um valor valido!");
                    break;
                    
            }
        }
        else if(qualvies == 4 ){
            printf("quer acessar divisão com quem?\n 1 para soma \n 2 para subtração\n 3 para multiplicação\n");
            scanf("%i",&divisaob);
            printf("quem será o terceiro número que você irá utilizar na conta?\n");
            scanf("%lf",&tercNum);
            switch(divisaob){
                case 1 : 
                    soma = n1/n2 + tercNum;
                    printf("%.2lf",soma);
                    break;
                case 2 :
                    subtracao = n1/n2 - tercNum;
                    printf("%.2lf",subtracao);
                    break;
                case 3 : 
                    multiplicacao = n1/n2 *tercNum;
                    printf("%.2lf",multiplicacao);
                    break;
                default:
                    printf("digite um valor valido");
                    break;
            }
        }
    }
    else{
        printf("digite um valor de 1 a 4!");
    }
    
   
    

    
   

    return 0;
}