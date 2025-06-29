/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int d1 = 1 ,d2= 1,d3 = 1;
    int c2,c3 = 0;
    int c1 = 3;
    printf("você jogara essa rodada com 3 discos!\n");
    printf("****************Jogada um********************\n");
    for(int jogada1 = 0;jogada1<1;jogada1++){
            c3 = d1;
            printf("coluna 3 com: %d discos\n",c3);
        }
    printf("****************Jogada dois********************\n");
    for(int jogada2 = 0;jogada2<1;jogada2++){
            c2 = d2;
            printf("coluna 3 com: %d discos\n",c3);
            printf("coluna 2 com: %d discos\n",c2);
             
        }
        printf("****************Jogada três********************\n");
    for(int jogada3 = 0;jogada3<1;jogada3++){
            c3 = 0;
            c2+=d1;
            printf("coluna 2 com: %d discos\n",c2);
        }
        printf("****************Jogada quatro********************\n");
    for(int jogada4 = 0;jogada4<1;jogada4++){
            c3 = d3;
            printf("coluna 2 com: %d discos\n",c2);
            printf("coluna 3 com: %d discos\n",c3);
        }
        printf("****************Jogada cinco********************\n");
    for(int jogada5 = 0;jogada5<1;jogada5++){
          c1 = d1;
          c2 = d2;
          printf("coluna 1 com: %d discos\n", c1);
          printf("coluna 2 com: %d discos\n",c2);
          printf("coluna 3 com: %d discos\n",c3);
          }
          printf("****************Jogada seis********************\n");
    for(int jogada6 = 0;jogada6<1;jogada6++){
        c3 = d2+d3;
        c2 = 0;
        printf("coluna 1 com: %d discos\n",c1);
        printf("coluna 3 com: %d discos\n",c3);
        }
        printf("****************Jogada sete********************\n");
    for(int jogada7 = 0;jogada7<1;jogada7++){
        c3 = d1+d2+d3;
        c1 = 0;
        printf("coluna 3 com: %d discos\n",c3);
        }
    printf("perfect!\n");
    printf("*****************************************************\n");
    
    /*************************************
     TORRE DE HANOI Com 4 discos
    *************************************/
    c1 = 4;
    int d4 = 1;
    printf("você jogará com quatro discos!\n");
    printf("****************Jogada um********************\n");
    for(int jogada41 = 0; jogada41<1;jogada41++){
     c3 = d1;
     printf("coluna 3 com: %d discos\n",c3);
   }
   printf("****************Jogada dois********************\n");
    for(int jogada42 = 0; jogada42<1;jogada42++){
        c2 = d2;
        printf("coluna 3 com: %d discos\n",c3);
        printf("coluna 2 com: %d discos\n",c2);
    }
    printf("****************Jogada três********************\n");
    for(int jogada43 = 0; jogada43<1;jogada43++){
     c3 = 0;
     c2 = d1+d2;
     printf("coluna 2 com: %d discos\n",c2);
    
    }
    printf("****************Jogada quatro********************\n");
    for(int jogada44 = 0; jogada44<1;jogada44++){
        c3 = d3;
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
    }
    printf("****************Jogada cinco********************\n");
    for(int jogada45 = 0; jogada45<1;jogada45++){
        c1 = d1+d4;
        c2 = d3;
        printf("coluna 1 com: %d discos\n",c1);
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
    }
    printf("****************Jogada seis********************\n");
    for(int jogada46 = 0; jogada46<1;jogada46++){
        c3= d2+d3;
        c2 = 0;
        printf("coluna 1 com: %d discos\n",c1);
        printf("coluna 3 com: %d discos\n",c3);
    }
    printf("****************Jogada sete********************\n");
    for(int jogada47 = 0; jogada47<1;jogada47++){
        c3 = d1+d2+d3;
        c1 = d4;
        printf("coluna 3 com: %d discos\n",c3);
        printf("coluna 1 com: %d discos\n",c1);
    }
    printf("****************Jogada oito********************\n");
    for(int jogada48 = 0; jogada48<1;jogada48++){
        c2 = d4;
        c1 = 0;
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
        
    }
    printf("****************Jogada nove********************\n");
    for(int jogada49 = 0; jogada49<1;jogada49++){
        c2 = d4+d1;
        c3 = d2+d3;
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
        
    }
    printf("****************Jogada dez********************\n");
    for(int jogada410 = 0; jogada410<1;jogada410++){
        c1 = d2;
        c3 = d3;
        printf("coluna 1 com: %d discos\n",c1);
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
    }
    printf("****************Jogada onze********************\n");
    for(int jogada411 = 0; jogada411<1;jogada411++){
        c1 = d2+d1;
        c2 = d4;
        printf("coluna 1 com: %d discos\n",c1);
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
        
    }
    printf("****************Jogada doze********************\n");
    for(int jogada412 = 0; jogada412<1;jogada412++){
        c2 = d4+d3;
        c3 = 0;
        printf("coluna 1 com: %d discos\n",c1);
        printf("coluna 2 com: %d discos\n",c2);
        
    }
    printf("****************Jogada treze********************\n");
    for(int jogada413 = 0; jogada413<1;jogada413++){
        c3 = d1;
        c1 = d2;
        printf("coluna 1 com: %d discos\n",c1);
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
    }
    printf("****************Jogada quatorze********************\n");
    for(int jogada414 = 0; jogada414<1;jogada414++){
        c2 = d4+d3+d2;
        c1 = 0;
        printf("coluna 2 com: %d discos\n",c2);
        printf("coluna 3 com: %d discos\n",c3);
    }
    printf("****************Jogada quinze********************\n");
    for(int jogada415 = 0; jogada415<1;jogada415++){
        c2 = d4+d3+d2+d1;
        c3 = 0;
        printf("coluna 2 com: %d discos\n",c2);
    }
    printf("perfect");
       
   

    return 0;
}
