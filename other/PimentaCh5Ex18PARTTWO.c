/********
   Ex 18 pg 102 cheng book. PART TWO. Calculate the values for the math formula y= -x^2 + 5*x - 6
   PimentaCh5Ex18PARTTWO.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>

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
        y = pow(-1, 2) + 5*x - 6;
        printf("%5.2lf %12.2lf\n", x, y);
    }
    printf("---------------------\n");
    return 0;
}
