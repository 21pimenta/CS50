/********
   Page 75 cheng book, program 5.2 exercise on if, else, and if else. 
   PimentaWageIfElseExercise.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    // declare variables
    double t, grosspay, netpay, tax;
    
    //get the user input for the hours worked
    printf("Welcome to the Wage Calculator\n");
    printf("Please enter the hours worked\n");
    scanf("%lf", &t);
    
    //process the payment
    if(0 <= t && t <= 8) { //when 0 <= t <= 8
        grosspay = 20*t;
    }
    else if (8 < t && t <= 24) { 
        grosspay = 30*t - 80;
    }
    else {
        printf("Invalid time\n");
        return 0;
    }
    tax = 0.3*grosspay;
    netpay = grosspay - tax;
    
    // display the payment as output
    printf("    gross pay: $%.2lf\n", grosspay);
    printf(" deducted pay: $%.2lf\n", tax);
    printf("      net pay: $%.2lf\n", netpay);
    return 0;
}
