/********
   How to use conditionals. Copied from pg 118 chicken book. 
   PimentaConditionalsCopy.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    // Define the integer to hold the user's guess and then get it from the user
    
    int numPick;
    printf("Pick an integer between 1 and 100\n");
    printf("(The higher the better!)\n");
    scanf(" %d", &numPick); // remember for an int, you do need the &
    
    printf("%d %s divisible by 2.", numPick, (numPick % 2 == 0) ? ("is") 
    : ("is not"));
    printf("\n%d %s divisible by 3.", numPick, (numPick % 3 == 0) ? 
    ("is") : ("is not"));
    printf("\n%d %s divisible by 4.", numPick, (numPick % 4 == 0) ? 
    ("is") : ("is not"));
    printf("\n%d %s divisible by 5.", numPick, (numPick % 5 == 0) ? 
    ("is") : ("is not"));
    printf("\n%d %s divisible by 6.", numPick, (numPick % 6 == 0) ? 
    ("is") : ("is not"));
    printf("\n%d %s divisible by 7.", numPick, (numPick % 7 == 0) ? 
    ("is") : ("is not"));
    printf("\n%d %s divisible by 8.", numPick, (numPick % 8 == 0) ? 
    ("is") : ("is not"));
    printf("\n%d %s divisible by 9.", numPick, (numPick % 9 == 0) ? 
    ("is") : ("is not"));
    
    return 0;
}
