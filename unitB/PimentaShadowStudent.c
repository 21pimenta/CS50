/********
   Write a program to meet new shadow students!  
   PimentaShadowStudent.c
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
    
    printf ("Hello, %s, please only use one word answers until we get to the knock knock joke! It's really important you do that, otherwise none of this will work. Thanks!\n", &name ); 
    printf ("What school do you come from? Use an acronym.\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("%s\n sounds really cool.\n");
    printf ("Do you like St. Francis?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("What's your favorite hobby?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("Did you eat a SF cookie yet? They're super good.\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("Nice! What's your favorite subject?\n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("Really? Me too! Why did you choose to shadow at SF? Sum up your reason using just one word. If that's impossible, just type any letter and we'll move to the next question. \n");
    scanf("%s", &name);      //accept the user's unput of a string
    printf ("Cool! Hey, I have a joke. Remember to use multiple words now. Knock knock!\n");
    scanf("%s, %s", &name, &name);      //accept the user's unput of a string
    printf ("Cow says.\n");
    scanf("%s, %s, %s", &name, &name, &name);      //accept the user's unput of a string
    printf ("No, a cow says moooo!\n");
    printf ("That was a pretty bad joke, sorry. Have a good day!\n"); 

    return 0;
}
