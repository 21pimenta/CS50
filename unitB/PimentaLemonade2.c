/********
   Calculate the cost with sales tax for a lemonade shop. Cheng book pg 37.
   PimentaLemonade2.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main()
{
    // declare variables
    int cups;
    double price, taxrate, subtotal, tax, total;

    // fixed price and tax rate
    price = 1.29; // $1.29 per cups
    taxrate = 0.0825;  // 8.25% (8.25 percent) sales tax

    // get the user input for the value of the variable cups
    // '%%' will print out one '%'
    printf("Welcome to Jenna's Lemonade Shop!\n");
    printf ("We sell lemonade by the cup, $1.29 per cup with 8.25%% sales tax.\n");
    printf("Please enter the number of cups.\n");
    scanf("%d", &cups);

    // process the order
    subtotal = price * cups; // cost before tax
    tax = taxrate * subtotal; //sales tax
    total = subtotal + tax;  // total cost with tax

    // display cost with output
    printf ("Subtotal: $%.2lf\n", subtotal);
    printf ("     Tax: $%.2lf\n", tax);
    printf ("   Total: $%.2lf\n", total);
    printf ("Thank you.\n");

    return 0;
}


