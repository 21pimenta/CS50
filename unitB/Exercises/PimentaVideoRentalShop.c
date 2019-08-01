/********
   Cheng Book - pg 43, 3.6 excercise 4
   PimentaVideoRentalShop.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    /* Declare the variables. */
    int rentals;
    // declare variables price and cost
    double price, cost;
    
    // initialize rentals and price
    rentals = 3; //number of rentals
    price = 3.99; // $3.99 per movie rentals
    
    //calculate the cost
    cost = price * rentals;
    // display the cost as output
    
    printf ("%d movie rentals cost $%.2lf \n", rentals, cost);
    return 0;
}
    
