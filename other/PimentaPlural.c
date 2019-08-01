/********
   How to make words plural or singular while using scanfs. From pg 117 chicken book. 
   PimentaPlural.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    int numPear;
    printf("How many pears did you eat?\n");
    scanf(" %d", &numPear);
        
    printf("I ate %d pear%s\n", numPear, (numPear > 1) ? ("s.") : ("."));
    
    return 0;
}
    
