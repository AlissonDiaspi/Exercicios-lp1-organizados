
#include <stdio.h>

int main()
{ 
  int inteiro = 0;
  char caracter = 'a';
  double Double = 0.0;
  float Float = 0.0;
  short Short = 0;
  unsigned Unsigned = 0;
  long Long = 0;
  signed Signed = 0;
  
    printf("Char: %ld bytes\n", sizeof(char));
    printf("Int: %li bytes\n", sizeof(int));
    printf("Float: %ld bytes\n", sizeof(float));
    printf("Double: %ld bytes\n", sizeof(double));
    printf("Short: %ld bytes\n", sizeof(short));
    printf("Unsigned: %ld bytes\n", sizeof(unsigned));
    printf("Long: %ld bytes\n", sizeof(long));
    printf("Signed: %ld bytes\n", sizeof(signed));
    printf("----------------------------------\n");
    /***************************
     Teste: se passar o número, ele mostra o quanto falta para 0, ou mostra 0, ou o a IDE sugere outro número por meio de um warning
     **************************/ 
    inteiro = 2147483648;
    printf("%i\n", inteiro);
    
    Long = 121234325712129832289;
    printf("%li\n",Long);
    
    Float = 3402823466000000000000000000000000000001;
    printf("%f\n",Float);
    
    Double = 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
    printf("%f\n",Double);
    
    Short =  32768;
    printf("%d\n",Short);
    
    Unsigned = 4294967296;
    printf("%d\n",Unsigned);
    
    Signed = 2147483648;
    printf("%d",Signed);
  

    return 0;
}