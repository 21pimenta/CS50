/********
   Write a program to inspire fellow students. pg 44 cheng book. 
   PimentaInspireEx7.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    /* variable name can hold up to 32 characters */
    char name [32];   // declare name as an array of characters
    
    /* get the user input */
    printf ("What's your name?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    
    /* program output*/
    
    printf ("Hello, %s\n", name ); 
    printf ("I enjoy computing, what type of hobbies do you like?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("%s\n sounds really fun.\n");
    printf ("What would you like to do in the future?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("You should definitely try and be a %s. \n Good luck! \n", name); 

    return 0;
}


    
