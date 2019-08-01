/********
   Ex 18 pg 102 cheng book. PART ONE. Calculate the values for the math formula y=  2x - 4
   PimentaCh5Ex18PARTONE.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    // declare variables
    double x, x0, xf, xstep, y;
    
    printf("   X             Y\n");
    printf("---------------------\n");
    x0 = -1.0;
    xf = 5.0;
    xstep = 0.25;
    for(x = x0; x <= xf; x += xstep) {
        y = 2*x-4;
        printf("%5.2lf %12.2lf\n", x, y);
    }
    printf("---------------------\n");
    return 0;
}

 
