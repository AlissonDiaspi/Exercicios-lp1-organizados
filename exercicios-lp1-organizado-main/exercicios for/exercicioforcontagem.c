
#include <stdio.h>

int main()
{
 /**************
  contagem de 0 a 10000
  **************/
  for(int i = 0;i<=10000;i++){
      printf("%i\n", i);
  }
  /**************
  contagem de 10000 a -10000
  **************/
  for(int n1 = 10000; n1>=-10000;n1--){
      printf("%i\n",n1);
  }
  /**************
  contagem de 0 a 10000 com números pares
  **************/
    for(int par = 0;par<=10000;par+=2){
        printf("%i\n", par);
    }
    /**************
  contagem de 0 a 10000 com números impares
  **************/
  for(int impar = 1; impar<10000; impar+=2){
      printf("%d\n",impar);
  }
  /**************
  contagem de -100000 a 100000 com intervalo de 3
  **************/
  for(int n3= -100000;n3<=100000;n3+=3 ){
      printf("%d\n", n3);
  }
    return 0;
}
