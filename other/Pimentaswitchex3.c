/********
   Example of using switch. Copied from pg 79 of the cheng book, ex 5.4
   Pimentaswitchex3.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

main ()
{
    char grade;
    double score;
    
    // prompt user to enter a grade
    printf("Enter a grade [A, B, C, D, F]: ");
    scanf("%c", &grade);
    switch(grade) {
        case 'A': 
            score = 4.0;
        break;
        case 'B': 
            score = 3.0;
        break;
        case 'C':
            score = 2.0;
        break;
        case 'D': 
            score = 1.0;
        break;
        case 'F':
            score = 0.0;
        break;
        default: // entered any other character
            score = -1;
        printf("Invalid grade '%c'\n", grade);
        break;
    }
    // display the grade an score
    if(score != -1){
        printf("The score for the grade '%c' is %.2f\n", grade, score);
    }
    return 0;
}
