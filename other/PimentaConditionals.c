/********
   How to use conditionals. Original program: find if someone is old enough to drink in the US. 
   PimentaConditionals.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    // Define the integer to hold the user's guess and then get it from the user
  
   int age;
    printf("Please enter your age so we can determine if you are old enough to drink in the US.\n");
    scanf(" %d", &age);
    
    printf("Since you are %d years old, you %s old enough to drink in the US.\n", age, (age >=21) ? ("are") : ("are not"));
    
    return 0;
}
