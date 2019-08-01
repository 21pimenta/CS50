/********
   Write a program to inspire fellow students. pg 44 cheng book. 
   PimentaGeometryStudent.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main() 
{
    /* variable name can hold up to 32 characters */
    char name [32];   // declare name as an array of characters
    double surface_area, radius;
    /* get the user input */
    printf ("What's your name?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    
    /* program output*/
    
    printf ("Hello, %s\n", name ); 
    printf ("You're in geometry, right?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("Geometry sounds really fun.\n");
    printf ("Is geometry hard?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("I thought so. Look, I can find the radius of a sphere!\n"); 
    printf("Enter a whole number for the surface area.\n");
    scanf("%lf", &surface_area);
    radius = sqrt(surface_area /(4*M_PI));
    
    printf("The radius of the circle is %lf meters.\n", radius);
    printf("Have fun in geometry! Good luck.\n");
    return 0;
}
