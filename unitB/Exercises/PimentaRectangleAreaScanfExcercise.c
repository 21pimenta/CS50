/********
   Excercise on scanf. Found on page 33-34 of the Cheng book. Finding the area of a rectangle.
   PimentaRectangleAreaScanfExercise.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    double l, w, area; /* length, width, and area*/
    
    printf ("Please input the length and width of a rectangle in meters\n");
    scanf ("%lf%lf", &l, &w);
    
    /* calculate the area */
    area = l*w;
    
    /* display the result */ 
    printf ("The area of the rectangle is %lf square meters\n", area);
    return 0;
}
