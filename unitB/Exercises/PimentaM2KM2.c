/********
   Cheng Book - pg 43, 3.6 excercise 4
   PimentaM2MK2.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    /* declare variables */
    double m; /* miles */
    double k; /* kms */
    
    /* get users input */
    printf ("How many miles do you want to convert to kilometers?\n");
    scanf("%lf", &m); // accep the user's input of an integer
    
    // calculation
    k=1.609*m;
    
    
    
    // program output 
    printf ("%lf miles = %lf kilometers\n", m, k);
    
    
    return 0;
    
}
