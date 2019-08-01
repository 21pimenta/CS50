/********
   pg 133 cheng book, ex 6. make a guessing game where the uesr inputs a number from 1-50 to guess which one it is. 
   PimentaCh6Ex6Version2.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int guessgame(){

 
     int rand_num, user_num;
     string_t yn;
     yn = "y";
     
     while (yn == "y"){
         printf("guess number between 1-50.\n");
         rand_num = 1 + rand()%50;
         
         printf("enter initial guess\n");
         scanf("%d", &user_num);
         
         while (user_num != rand_num) {
             
             if (user_num < rand_num){
                 printf("too low! guess again.\n");
             }
             if (user_num > rand_num){
                 printf("That's too high! guess again.\n");
             }
             scanf("%d", &user_num);
         }
         printf("Correct! You guessed the right number!\n");
         
         printf("Do you want to guess again? Press y for yes and n for no.\n");
         scanf("%d", &yn);
     }
     return 0;
 }
     
     
     int main(){
         guessgame();
         return 0;
     }
 
   
