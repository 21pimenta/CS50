/********
   Exercise 24 pg 104 cheng book. To generate and print 20 random integer numbers in the range [6,15]
   PimentaRandomint.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main() 
{
    int x, y;
    
    //put in a loop
     srand(time(NULL));
    for(y >= 1; y <= 19; y++) {
    
   
    x = 6 + rand() % 10;
    printf("%d\n", x);
    
    }
    return 0;
}
    
    
    
