/********
   Conversion character and variable practice.  
   PimentaVariablesPractice.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    //Set up and define variables. 

    char name;
    int firstInitial, middleInitial;
    int number_of_pizza_slices;
    int number_of_salads;
    int number_of_drinks;
    float pizza_slice = 3.89;
    float salad = 5.28;
    float drink = 1.50;

    //The information for the first customer
    firstInitial = 'J';
    middleInitial = 'P';

    number_of_pizza_slices = 2;
    number_of_salads = 0;
    number_of_drinks = 2;
    
 
    printf ("%c%c wants %d pizza slices, %d salads, and %d drinks.\n", name, number_of_pizza_slices, number_of_salads, number_of_drinks);
    printf ("The total cost for the order is $%.2f\n\n", number_of_pizza_slices*pizza_slice + number_of_salads*salad + number_of_drinks*drink);
    
     //The information for the second customer
    firstInitial = 'A';
     middleInitial = 'P';

    number_of_pizza_slices = 1;
    number_of_salads = 1;
    number_of_drinks = 1;
    
 
    printf ("%c%c wants %d pizza slices, %d salads, and %d drinks.\n", name, number_of_pizza_slices, number_of_salads, number_of_drinks);
    printf ("The total cost for the order is $%.2f\n\n", number_of_pizza_slices*pizza_slice + number_of_salads*salad + number_of_drinks*drink);
    
         //The information for the third customer
    firstInitial = 'N';
    middleInitial = 'H';

    number_of_pizza_slices = 5;
    number_of_salads = 0;
    number_of_drinks = 2;
    
 
    printf ("%c%c wants %d pizza slices, %d salads, and %d drinks.\n", name, number_of_pizza_slices, number_of_salads, number_of_drinks);
    printf ("The total cost for the order is $%.2f\n\n", number_of_pizza_slices*pizza_slice + number_of_salads*salad + number_of_drinks*drink);
    
         //The information for the fourth customer
    firstInitial = 'H';
    middleInitial = 'S';

    number_of_pizza_slices = 0;
    number_of_salads = 1;
    number_of_drinks = 0;
    
 
    printf ("%c%c wants %d pizza slices, %d salads, and %d drinks.\n", name, number_of_pizza_slices, number_of_salads, number_of_drinks);
    printf ("The total cost for the order is $%.2f\n\n", number_of_pizza_slices*pizza_slice + number_of_salads*salad + number_of_drinks*drink);
             
             //The information for the fifth customer
    firstInitial = 'Z';
     middleInitial = 'M';

    number_of_pizza_slices = 1;
    number_of_salads = 0;
    number_of_drinks = 3;
    
 
    printf ("%c%c wants %d pizza slices, %d salads, and %d drinks.\n", name, number_of_pizza_slices, number_of_salads, number_of_drinks);
    printf ("The total cost for the order is $%.2f\n\n", number_of_pizza_slices*pizza_slice + number_of_salads*salad + number_of_drinks*drink);
    
             //The information for the sixth customer
    firstInitial = 'L';
     middleInitial = 'P';

    number_of_pizza_slices = 1;
    number_of_salads = 0;
    number_of_drinks = 1;
    
 
    printf ("%c%c wants %d pizza slices, %d salads, and %d drinks.\n", name, number_of_pizza_slices, number_of_salads, number_of_drinks);
    printf ("The total cost for the order is $%.2f\n\n", number_of_pizza_slices*pizza_slice + number_of_salads*salad + number_of_drinks*drink);
    
              //The information for the seventh customer
    firstInitial = 'L';
     middleInitial = 'T';

    number_of_pizza_slices = 5;
    number_of_salads = 0;
    number_of_drinks = 7;
    
 
    printf ("%c%c wants %d pizza slices, %d salads, and %d drinks.\n", name, number_of_pizza_slices, number_of_salads, number_of_drinks);
    printf ("The total cost for the order is $%.2f\n\n", number_of_pizza_slices*pizza_slice + number_of_salads*salad + number_of_drinks*drink);
    
    return 0;
    
  
    
}

