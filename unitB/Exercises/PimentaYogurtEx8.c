/********
   Calculate the cost with sales tax for a yogurt shop. Refer Cheng pg 37.
   PimentaYogurtEx8.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    // declare variables
    int ounces;
    double price, taxrate, subtotal, tax, total;
    
    // fixed price and tax rate
    price = 0.39; // $1.29 per ounce
    taxrate = 0.0825;  // 8.25% (8.25 percent) sales tax
    
    // get the user input for the value of the variable cups
    // '%%' will print out one '%'  
    printf("Welcome to Jenna's FroYo Shop!\n");
    printf ("We sell frozen yogurt by the ounce, $0.39 per ounce with 8.25 sales tax.\n");
    printf("Please enter the number of ounces.\n");
    scanf("%d", &ounces);
    
    // process the order 
    subtotal = price * ounces; // cost before tax
    tax = taxrate * subtotal; //sales tax  
    total = subtotal + tax;  // total cost with tax  
    
    // display cost with output
    printf ("Subtotal: $%.2lf\n", subtotal);
    printf ("     Tax: $%.2lf\n", tax);
    printf ("   Total: $%.2lf\n", total);
    printf ("Thank you.\n");
    
    return 0;
}

    
