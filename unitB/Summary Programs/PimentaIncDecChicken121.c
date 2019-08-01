/********
   Use increment and decrement operators - copied off Chicken p. 121
   PimentaIncDecChicken121.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    int ctr = 0;
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("BOOM. Cue explosion and distant screaming.\n");
    
    return 0;
}
