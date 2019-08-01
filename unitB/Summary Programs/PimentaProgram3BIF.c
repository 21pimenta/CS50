/********
   Unit B: Summary Program 3 (similar to Exercise 9 pg 44 Cheng book) with an added if statement.   
   PimentaProgram3BIF.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    // declare variables 
    int ounces;
    double price, taxrate, discount, adjustedSubtotal, subtotal, tax, total;
    
    // fixed price and tax rate 
    price = 0.50; // $0.50 per ounce
    taxrate = 0.08; // 8% sales taxrate
    
    
    // get the user's input 
    // %% will print out one '%' 
    
    printf("Welcome to Jenna's Ice Cream Center!\n");
    printf ("We sell ice cream by the ounce, $0.50 per ounce with 8 percent sales tax. You will get a 20 percent discount if you purchase more than five ounces!\n");
    printf("Please enter the number of ounces.\n");
    scanf("%d", &ounces);
    
         if(ounces >= 5) { 
         discount = 0.2 * subtotal;
     }
     else {
         discount = 0.0;
     }
    // process order
    subtotal = price * ounces; // cost before tax
    
    adjustedSubtotal = subtotal - discount;  // new subtotal w discount
    tax = taxrate * subtotal;  // add in tax 
    total = adjustedSubtotal + tax;  // final cost
    
    // display cost with output
    printf ("Subtotal: $%.2lf\n", subtotal);
    printf ("     Tax: $%.2lf\n", tax);
    printf ("Discount: $%.2lf\n", discount);
    printf ("   Total: $%.2lf\n", total);
    printf ("Thank you for visiting Jenna's Ice Cream Center.\n");
    
    return 0;
}
    
    
