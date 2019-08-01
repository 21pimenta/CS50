/********
   Copy 4.6 pg 59 Cheng book. 
   PimentaHypotenuse.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main()
{ 
    // declare variables for the length of the hypotenuse for a right triangle
    double a = 3.0, b = 5.0, c;
    //calculate hypotenuse
    c = sqrt(pow(a,2) + pow(b,2)); 
    // display result
    printf ("The hypotenuse = %lf meters\n", c);
    
    return 0;
} 
