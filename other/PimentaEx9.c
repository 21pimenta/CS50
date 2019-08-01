/********
   Ex. 9 pg 101 cheng book. Prints out even numbers from 2 - 16. Modeled after the oddnum program on pg 81 cheng book. 
   PimentaEx9.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    int i;
    int n = 16;
    
    i = 2;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");
    return 0;
}
