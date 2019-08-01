/********
   Excercise on scanf. Found on page 35 of the Cheng book. Greeting the user to computing. 
   PimentaGreetingTheUser.c
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
    
    printf ("Hello %s\n", name); 
    printf ("Welcome to the wonderful computing world.\n");
    printf ("Enjoy your computing!\n");
    return 0;
}

