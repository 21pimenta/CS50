/********
   Excercise on using math, if else prep. Found on page 53 of the Cheng book. 
   PimentaDriverTest .c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
     // find if a person is old enough to drive 
     // declare variables
     char name [32]; 
     int age; 
     
     // get the user input
     printf("What's your name?\n");
     scanf("%s", &name);
     printf("How old are you?\n");
     scanf("%d", &age);
     
     if (age > 15)  { 
         printf ("%s, you can get a license.\n", name);
         printf ("Stay safe!\n");
     }
     
     else {
         printf("Sorry, %s, you are too young to get a license.\n", name);
     }
     return 0;
 }
