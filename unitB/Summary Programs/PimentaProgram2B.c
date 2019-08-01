/********
   Unit B: Summary Program 2 (ask user 4 questions)  
   PimentaProgram2B.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{
    /* variable name can hold up to 32 characters */
    char name [32];   // declare name as an array of characters
    char food [32];
    char animal [32];
    char music [32];
    /* get the user input */
    printf ("Please print one word answers only.\n");
    printf ("What's your name?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    
    /* program output*/
    
    
    printf ("Hello, %s.\n", name ); 
    printf ("I love food. What's your favorite food? Pizza, tacos, or cookies?\n");
    scanf("%s", &food);      //accept the user's unput of a string
    printf ("%s\n That sounds really good!\n");
    printf ("Are you more of a dog or cat person?\n");
    scanf("%s", &animal);      //accept the user's unput of a string
    printf ("Me too! I love %ss. They're so cute.\n", animal); 
    printf ("What's your favorite type of music? Country, pop, or rap?\n");
    scanf("%s", &music);      //accept the user's unput of a string
    printf ("Really? I love that music too!\n"); 
    
    printf ("It was nice talking to you. Have a nice day.\n");

    return 0;
}
