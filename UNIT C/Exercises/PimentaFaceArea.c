/********
   Excercise 8 page 63 Cheng book. Finding the face area of a washer. 
   PimentaFaceArea.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
    // declare variables
     double r1, r2, area;
     
     // calculate the area
     r1 = 1.5;
     r2 = 2.5;
     area = M_PI*r2*r2 - M_PI*r1*r1;
     
     // display the result
     printf("The face area of the washer is %lf square centimeters\n", area);
     return 0;
     
 }
