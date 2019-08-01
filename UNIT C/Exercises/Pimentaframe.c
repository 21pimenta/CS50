/********
   Excercise on averages. Calculate the cost of each frame built. Found on page 49 of the Cheng book. 
   Pimentaframe.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
 {
     // declare variables
     double width, height, perimeter, area, hours, subtotal, tax, total;
     
     
     //user input
     printf("Welcome to the Frame Store.\n");
     
     printf("Enter the width in meters.\n");
     scanf("%lf", &width);
     printf("Enter the height in meters.\n");
     scanf("%lf", &height);
     printf("Enter the number of hours worked.\n");
     scanf("%lf", &hours);
     
     perimeter = 2 * (width + height);
     area = width*height;
     subtotal = 3.75 * perimeter + 8.35 * area + 16*hours;
     tax = 0.085*subtotal;
     total = subtotal + tax;
     
     //calculate cost
     printf("subtotal = $%.2lf\n", subtotal);
     printf("tax      = $%.2lf\n", tax);
     printf("total    = $%.2lf\n", total);
 
     return 0;
 }
