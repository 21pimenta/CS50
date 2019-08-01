/********
   Exercise 25 pg 104 cheng book. To generate and print 20 random floating point numbers in the range [-2,2]
   PimentaRandomfloat.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main() 
{
    double x, y, x1, x2;
    x1= -2.0;
    x2 = 2.0;
    srand(time(NULL));
    for(y >= 1; y <= 19; y++) {
    x=x1+rand()*(x2-x1)/RAND_MAX;
    
    printf("%.2lf\n", x);
    
    }
    return 0;
}
    
