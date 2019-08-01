/********
   Lemonade exercise copied from pg 85 cheng book. 
   PimentaLemonadewithLoops.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    // declare variables
    int cups;
    double price, taxrate, subtotal, tax, total;
    char flag = 'y';
    char retchar;
    
    // fixed price and tax rate
    price = 1.29;
    taxrate = 0.0825;
    
    // get the user input for the value of the variable cups
    // '%%' will print out one '%'
    printf("Welcome to Jenna's Lemonade Shop 2.0!\n");
    printf("We sell lemonade by the cup, $1.29 per cup with 8.25%% sales tax.\n");
    while(flag == 'y') {
        printf("Please enter the number of cups.\n");
        scanf("%d", &cups);
        
        // process the order
        subtotal = price * cups;
        tax = taxrate * subtotal;
        total = subtotal + tax;
        
        printf("Subtotal: $%.2lf\n", subtotal);
        printf("     Tax: $%.2lf\n", tax);
        printf("   Total: $%.2lf\n", total);
        printf("Thank you. \n\n");
        
        printf("Would you like to order more lemonade? Type y for yes.\n");
        scanf("%c%c", &retchar, &flag);
    }
    printf("\nThank you for shopping here, have a nice day!\n\n");
    return 0;
}
