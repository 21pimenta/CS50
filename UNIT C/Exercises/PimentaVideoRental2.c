/********
   Exercise 6 pg 101 Cheng Book. Process the rental of movies with the user input for the number of movies to be rented. 
   The price for renting a movie is $3.99. 
   If a customer rents three or more movies, the prices is 3.49 per movie. 
   The sales tax is 8.5 percent. 
   PimentaVideoRental2.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {    
     /* Declare the variables. */
    
    // declare variables price and cost
    double price, cost, num, subtotal, tax, total;
    
    // initialize rentals and price
  
    printf("Welcome to my Video Rental Shop! Enter the number of movies you would like to rent, please.\n");
     scanf("%lf", &num);
     
     if(num >= 3) { 
         price = 3.49;
     }
     else {
         price = 3.99;
     }
     subtotal = num*price;
     tax = 0.085*subtotal;
     total = subtotal+tax;
    

    printf ("%lf movie rentals cost $%.2lf \n", num, total);
    return 0;
}
    

