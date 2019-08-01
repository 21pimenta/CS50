/********
   Ex 20 pg 103 cheng book. Print a table similar to figure 5.16, for addition of two integer numbers from 1 to 10. 
   PimentaAdditionEx20.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>

main ()
{
    int i, j;
    
    printf("      1   2   3   4   5   6   7   8   9   10\n");
    printf("   -----------------------------------------\n");
    
    // for multiplication of i*j with both i and j from 1 to 10
    for(i=1; i<= 10; i++) {
        
        printf("%d|", i);
        for(j=1; j <=i; j++) {
            printf("%4d", i+j);
        }
        printf("\n");
    }
    printf("   -----------------------------------------\n");
    return 0;
}
    

