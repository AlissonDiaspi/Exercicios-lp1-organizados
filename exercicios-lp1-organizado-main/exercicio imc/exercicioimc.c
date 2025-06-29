/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


int main()
{
    float peso = 0, altura = 0;
    printf("digite seu peso:");
    scanf("%f",&peso);
    printf("digite sua altura:");
    scanf("%f",&altura);
    printf("seu peso é :%.2f, e sua altura é %.2f\n",peso,altura);
    float imc = 0;
    imc = peso/ (altura*altura);
    
    if(imc<18.5){
        printf("baixo peso");
    } else if(imc>18.5 && imc<=24.9){
        printf("peso normal");
    } else if(imc>=25 && imc<=29.9){
        printf("sobrepeso");
    } else if(imc>=30 && imc<=34.9 ){
        printf("obesidade grau 1 ");
    } else if(imc >=35 && imc <=39.9){
        printf("obesidade grau 2");
    } else{
        printf("obesidade grau 3");
    }
    

    return 0;
}
