
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // gets utilizo para dar um "scanf" na variavel sem que ao ter espaços o programa encerre
    char nome[20];
    
   
    // dar input na string
    printf(" qual o seu nome? ");
    gets(nome);
    
    printf("seu nome é : %s \n",nome);
      printf("------------------------\n");
    
    
    // tamanho da string(nome) 
    // utilizei a função strlen()
    int tamanhoNome = strlen(nome);
    printf("tamanho do nome: %d\n",tamanhoNome);
    
   
        
   
      printf("------------------------\n");
   // apresentando a string individualmente
   // utilizei o putchar e a regra que quando a string termina, ela retorna \0
   int i =0;
   while(nome[i] != '\0'){
       if(nome[i++] != ' '){
          
           putchar(nome[i-1]);
          
       }
       else{
           putchar('\n');
           printf("\n");
           
       }
   }
   printf("\n");
   printf("------------------------\n");
   printf("\n");
   // String invertida 
   // utilizando essa maneira de for, quando i = 20 por ex, a letra apresentada será a letra que ocupa o espaço 20
   printf("string ao contrario: \n");
   for(int i = tamanhoNome ;i>=0;i--){
      
       putchar(nome[i]);
       
       
       
       
   }
   printf("\n");
   printf("------------------------");
   printf("\n");
   // string um caracter
    printf("string com um caracter:\n");
   for(int i = 0; i<tamanhoNome;i++){
      
       printf("%c\n",nome[i]);
   }
  

    return 0;
}
