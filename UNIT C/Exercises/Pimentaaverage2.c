/********
   Excercise on averages. Found on page 49 of the Cheng book. 
   Pimentaaverage.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
 {
     // declare variables 
     double num1, num2, num3, //three numbers
            average;
     
     // enter the user input
     printf("Welcome to the Average Calculator\n");
     printf("Please enter 3 numbers\n");
     scanf("%lf", &num1, &num2, &num3);
   
     
     // calculate the average
     average = (num1+num2+num3) /3;
     // display output
     printf("The average is %lf\n", average);
     return 0;
     
 }

