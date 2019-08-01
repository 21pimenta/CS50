#include <stdio.h>
#include <math.h>

main ()
{
    int i, j, k;
    
    printf("Good job with the programming assignments\n");
    printf("   -----------------------------------------\n");
    
    // for multiplication of i*j with both i and j from 1 to 10
    for(i=1; i<= 10; i++) {
        
        printf("<<");
        for (k=1; k-i<i; k++){
            printf("  ");
        }
        for(j=i; j <=10; j++) {
            printf("***");
        }
        printf("\n");
    }
    return 0;
}
