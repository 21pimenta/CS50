/********
   Ex 22 pg 103 cheng book. with nested loops to print a multiplication table. 
   PimentaMultiplicationEx22.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>

main ()
{
    int i, j, k;
    
    printf("      1   2   3   4   5   6   7   8   9   10\n");
    printf("   -----------------------------------------\n");
    
    // for multiplication of i*j with both i and j from 1 to 10
    for(i=1; i<= 10; i++) {
        
        printf("%d|", i);
        for (k=1; k-i<i; k++){
            printf("  ");
        }
        for(j=i; j <=10; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
    printf("   -----------------------------------------\n");
    return 0;
}


