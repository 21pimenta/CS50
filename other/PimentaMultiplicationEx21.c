/********
   Ex 21 pg 103 cheng book. with nested loops to print a multiplication table. 
   PimentaMultiplicationEx21.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>

main ()
{
    int i, j;
    
    printf("    10   9   8   7   6   5    4   3   2   1\n");
    printf("   -----------------------------------------\n");
    
    // for multiplication of i*j with both i and j from 1 to 10
    for(i=10; i >= 1; i--) {
        
        printf("%d|", i);
        for(j=10; j >=i; j--) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
    printf("   -----------------------------------------\n");
    return 0;
}
