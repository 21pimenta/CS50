/********
   Nested loop example, copied from pg 91 cheng book ex 5.10
   PimentaNestedLoop.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    int i, j;
    
    printf("      1   2   3   4   5   6   7   8   9   10\n");
    printf("   -----------------------------------------\n");
    
    // for multiplication of i*j with both i and j from 1 to 10
    for(i=1; i<= 10; i++) {
        
        printf("%d|", i);
        for(j=1; j <=i; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
    printf("   -----------------------------------------\n");
    return 0;
}
    
