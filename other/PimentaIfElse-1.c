/********
   Example of using if-else-if-else structure. Copied from pg 77 of the cheng book, ex 5.3
   PimentaIfElse-1.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    char grade;
    double score;
    
    // prompt the user to enter a grade
    printf("Enter the grade [A, B, C, D, F]: ");
    scanf("%c", &grade);
    if(grade == 'A') {
        score = 4.0;
    }
    else if (grade == 'B') {
        score = 3.0;
    }
    if(grade == 'C') {
        score = 2.0;
    }
    else if (grade == 'D') {
        score = 1.0;
    }
    else if (grade == 'F') {
        score = 0.0;
    }
    else { //entered any other character
        score = -1;
        printf("Invalid grade '%c'\n", grade);
    }
    // display the grade and score
    if(score != -1){
        printf("The score for the grade '%c' is %.2f\n", grade, score);
    }
    return 0;
}
