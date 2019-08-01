/********
   Cheng book - pg 44. 
   Pimentaicecream.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    
    // Hi parents! To start, press the run button and follow instructions.
//    Also, remember, do NOT write anything in the middle of my code or mess it up. have a nice day.
    
    // declare variables 
    int ounces;
    double price, taxrate, discount, adjustedSubtotal, subtotal, tax, total;
    
    // fixed price and tax rate 
    price = 0.47; // $0.47 per ounce
    taxrate = 0.0825; // 8.25% sales taxrate
    discount = 0.1; // 10% discount
    
    // get the user's input 
    // %% will print out one '%' 
    
    printf("Welcome to Jenna's Ice Cream Shop!\n");
    printf ("We sell ice cream by the ounce, $0.47 per ounce with 8.25 percent sales tax.\n");
    printf("Please enter the number of ounces.\n");
    scanf("%d", &ounces);
    
    // process order
    subtotal = price * ounces; // cost before tax
    discount = 0.1 * subtotal;  // amt of discount
    adjustedSubtotal = subtotal - discount;  // new subtotal w discount
    tax = taxrate * subtotal;  // add in tax 
    total = adjustedSubtotal + tax;  // final cost
    
    // display cost with output
    printf ("Subtotal: $%.2lf\n", subtotal);
    printf ("     Tax: $%.2lf\n", tax);
    printf ("Discount: $%.2lf\n", discount);
    printf ("   Total: $%.2lf\n", total);
    printf ("Thank you for choosing Jenna's Ice Cream Shop! Have a nice day.\n");
    
    return 0;
}
    
