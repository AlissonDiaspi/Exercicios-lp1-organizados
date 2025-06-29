#include <stdio.h>

int main()
{
    printf("número de bits de int :%ld\n",sizeof(int));
    printf("número de bits de long:%ld\n",sizeof(long));
    printf("número de bits de short:%ld\n",sizeof(short));
    printf("número de bits de signed:%ld\n",sizeof(signed));
    printf("número de bits de unsigned:%ld\n",sizeof(unsigned));
    printf("-------------------------------------------------\n");
    printf("provando\n");
    for(int varint = 1;varint>0;varint++){
        printf("%d",varint);
    }
    
    
    
    return 0;
}
