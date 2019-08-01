/********
   Ex 19 pg 102 cheng book. Display the total amount of money with the interest compunded annually from 1 to 30 years.  The user enters the principal and rate of interest. 
   The mathematical relationship is as follows, y = p(1+r)^n
   PimentaInterestEx19.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>

main ()
{
    double p, r, x, x0, xf, xstep, y;

    x0 = 1;
    xf = 30;
    xstep = 1;
    
    printf("What is the principal?\n");
    scanf("%lf", &p);
    printf("What is the rate of interest?\n");
    scanf("%lf", &r);
    
    
    printf("  Year          Interest\n");
    printf("------------------------\n");
    
    for(x = x0; x <= xf; x += xstep) {
        y = p*pow(1+r, x);
        printf("%5.2lf %12.2lf\n", x, y);
        
    }
    return 0;
} 
   
