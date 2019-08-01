/********
   Ex 16 pg 64 Cheng book. 
   PimentaSphereArea.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main()
{ 
    double surface_area, radius;
             printf("Enter the surface area of your sphere.\n");
             scanf("%lf", &surface_area);
       
             radius = sqrt(surface_area /(4*M_PI));

             printf("The radius of the circle is %lf meters\n", radius);
    return 0;
}
