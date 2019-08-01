/********
   Ex 23 pg 103 cheng book. Extra credit.  
   PimentaMultiplicationEx23.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>

main ()
{
    int space, line, n, star;
    n=6;
    // for multiplication of i*j with both i and j from 1 to 10
    for(line=1; line<=n; line++) {
 
        for (space=n-line; space>0; space--){
            printf(" ");
        }
        for(star=1; star<=2*line-1; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
