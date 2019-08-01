/********
   Copied program from pg 71. Calculate the gross pay, deduced tax, and net pay. The formula for the gross pay depends on t <= 8 or t > 8 hours
   PimentaWageIf.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
     // declare variables
     double t, grosspay, netpay, tax;
     
     // get user input for the hours worked
     printf("Welcome to the Wage Calculator\n");
     printf("Please enter the hours worked.\n");
     scanf("%lf", &t);
     
     // process the payment
     if(t <= 8) { // when time t is less or equal to 8 hours
         grosspay = 20 * t;
     }
     else { //when time t is greater than 8hours 
         grosspay = 30*t - 80;
     }
     tax = 0.3*grosspay;
     netpay = grosspay - tax;
     
     //display the payment as output
     printf("    gross pay: $%.2lf\n", grosspay);
     printf(" deducted tax: $%.2lf\n", tax);
     printf("      net pay: $%.2lf\n", netpay);
     return 0;
 }
