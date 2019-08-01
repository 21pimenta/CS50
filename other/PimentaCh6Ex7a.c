/********
   Same as PimentaCopy6_5_functions.c except it prompts the multiplication of two random numbers, 1-10. Pg 133 cheng book. 
   PimentaCh6Ex7a.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void correctMessage(void);
void incorrectMessage(void);

int main() 
 {
     int x, y, answer;
     
     srand(time(NULL));
     x = 1 * rand() % 10;
     y = 1 * rand() % 10;
     
     printf("What is %d x %d? ", x, y);
     scanf("%d", &answer);
     
     while (answer != (x*y)) {
         incorrectMessage();
         printf("What is %d x %d? ", x, y);
         scanf("%d", &answer);
 }
 correctMessage();
 return 0;
 }
  // function to print a random message for a correct answer
 void correctMessage(void) {
     switch(rand()%3) {
         case 0: printf("Correct!\n");
             break;
         case 1: printf("Great job!\n");
             break;
         case 2: printf("Nice!\n");
             break;
     }
 }
 // function to print a random message for an incorrect answer
 void incorrectMessage(void) {
     switch(rand()%3) {
         case 0: printf("No!\n");
             break;
         case 1: printf("No, no, no!\n");
             break;
         case 2: printf("WRONG\n");
             break;
     }
 }
 
     
