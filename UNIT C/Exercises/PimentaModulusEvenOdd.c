/********
   Excercise 9 page 63 Cheng book. Find whether a number is odd or even. 
   PimentaModulusEvenOdd.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
     int number; 
     
     // get the user input
     printf("Please enter a number and we'll help you figure out if it's odd or even.\n");
     scanf("%d", &number);
    
     
     if (number%2 == 0)  { 
         printf ("%d is an even number.\n", number);
     }
     
     else {
         printf("%d is an odd number.\n", number);
     }
     return 0;
 }
