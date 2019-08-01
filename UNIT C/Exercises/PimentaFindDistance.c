/********
   Ex 19 pg 65 Cheng book. 
   PimentaFindDistance.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main()
{

     double dA, dB, dC, x1A=2.0, y1A=3.0, x2A=4.0, y2A=5.0, x1B=4.0, y1B=3.0, x2B=6.0, y2B=5.0, x1C=1.0, y1C=3.0, x2C=4.0, y2C=2.0; 
     dA = sqrt(pow((x1A - x2A), 2)+ (pow((y1A - y2A), 2))); 
     dB = sqrt(pow((x1B - x2B), 2)+ (pow((y1B - y2B), 2)));
     dC = sqrt(pow((x1C - x2C), 2)+ (pow((y1C - y2C), 2)));
     
     printf("A) distance = %lf\n B) distance = %lf\n C) distance = %lf\n", dA, dB, dC);
     
     return 0; 
 }

    
