/********
   Cheng Book - pg 43, 3.6 excercise 3. Convert miles to kilometers. 
   PimentaMile2Kmeter.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{ 
    /* declare variables */
    double m;   /*miles*/
    double k; /* kilometers */
        
    /* intialize variable m */
    
    m = 8;
    
    /* calculate the equation */
    k = 1.609 * m;
    
    /* display output */
    printf ("miles = %lf kilometers\n", k);
    
    return 0;
}
    
    

