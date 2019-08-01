/********
   Exercise 26 pg 104 cheng book PART A. Generate two random integers ranging from 1 to 10 using the functions rand() and srand(). Prompt the user to enter the sunof the two numbers. If the user enters the correctanswer, print correct. 
   If it is wrong, print incorrect try again and allow the user to enter another answer until it is right. 
   PimentaRandomadda.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main() 
{
    int x, y, answer;
    
    srand(time(NULL)); 
    x = 1 + rand() % 10;
    y = 1 + rand() % 10;
    
    printf("What is %d + %d? ", x, y);
    scanf("%d", &answer);
    
    while(answer != (x+y)) {
        printf("Incorrect. Please try again.\n");
        printf("What is %d + %d? ", x, y);
        scanf("%d", &answer);
    }
    printf("Correct!\n");
    return 0;
}
