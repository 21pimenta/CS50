/********
   Excercise on using math, FINDING AREA OF A CIRCLE. Found on page 51 of the Cheng book. 
   PimentaCircleArea.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
     // declare variables
     double r, area;
     
     printf("Enter the radius of a circle in meters:\n");
     scanf("%lf", &r);
     
     // calculate the area
     area = M_PI*r*r; 
     
     // display the result
     printf("The area of the circle is %lf square meters\n", area);
     return 0;
     
 }
