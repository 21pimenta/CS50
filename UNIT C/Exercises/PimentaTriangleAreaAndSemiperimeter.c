/********
   Ex 18 pg 64 Cheng book. 
   PimentaTriangleAreaAndSemiperimeter.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main()
{ 
    double area1, area2, s1, s2, a1 = 2, a2 = 3, b1 = 3, b2 = 4, c1 = 4, c2 = 5;
    s1 = (a1+b1+c1) / 2;
    area1 = sqrt(s1*(s1-a1)*(s1-b1)*(s1-c1));
    s2 = (a2+b2+c2) / 2;
    area2 = sqrt(s2*(s2-a2)*(s2-b2)*(s2-c2));
    
    printf("In A) the area of the triangle is %lf\nIn B) the area of the triangle is %lf\n", area1, area2);
    return 0;
}
    
    
    
