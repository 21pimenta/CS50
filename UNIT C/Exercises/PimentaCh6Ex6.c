/********
   pg 133 cheng book, ex 6. make a guessing game where the uesr inputs a number from 1-50 to guess which one it is. 
   PimentaCh6Ex6.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
 {
   
void correctMessage(void);

     
     int x, answer;
     
     srand(time(NULL));
     x = 1 * rand() % 50;

     
     printf("I have a number between 1 and 50.\n");
     printf("Guess what it is!\n");
     printf("Enter your first guess.\n");
     scanf("%d", &answer); // user's answer
     
     while (answer != x) {
         if (answer >= x) {
             printf("That's too high :( \n");
         }
         if (answer <= x) {
             printf("Too low.\n");
         }
 }
 correctMessage();
 return 0;
 }
  // function to print a random message for a correct answer
 void correctMessage(void) {
     printf("Yes! You got the number!\n");
     }
     
     
 
 
