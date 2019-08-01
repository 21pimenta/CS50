/********
   Transfer the temperature from Fahrenheit to Celsius (copied from pg 90, ex. 5.9)
   PimentaCelcius.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    double x, x0, xf, xstep, y;
    
    printf("Fahrenheit  Celcius\n");
    printf("-------------------\n");
    x0 = 0.0;
    xf = 120.0;
    xstep = 10.0;
    for(x = x0; x <= xf; x += xstep) {
        y = 5*(x - 32)/9;
        printf("%5.lf %12.2lf\n", x, y);
    }
    return 0;
}

  
