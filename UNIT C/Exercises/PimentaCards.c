/********
   Write a program that generates random cards out of a deck of 52. 
   PimentaCards.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <string.h> 
#include <time.h>
#include <stdlib.h>

int main() 
 { 
     int suit, card;
     char flag, retchar, suitText[9];
     char suit0[8] = "spades"; 
     char suit1[8] = "clubs";
     char suit2[9] = "hearts";
     char suit3[9] = "diamonds";

     srand(time(NULL));
    
        do {
     suit = rand ()%4;
     card = 2 + rand () % 14;
            
            switch (suit){
                case 0: 
                    strcpy(suitText, suit0);
                    break;
                 case 1: 
                     strcpy(suitText, suit1);
                     break;
                 case 2: 
                    strcpy(suitText, suit2);
                    break;
                 case 3: 
                     strcpy(suitText, suit3);
                     break;
             } // closes switch statement
     
         if (card<=10) { 
             printf("You have a %d of %s.\n", card, suitText);
         }
             
         if (card==11){ 
             printf("You have a jack of %s\n", suitText);
         }
         
         if (card==12){
             printf("You have a Queen of %s\n", suitText);
         }
         
         if (card==13){
             printf("You have a King of %s\n", suitText);
         }
         
         if (card==14){
             printf("You have an ace of %s\n", suitText);
         }
         
         
         printf("Would you like another card? Type y for yes, n for no.\n");
         scanf("%c%c", &flag, &retchar);
         
     } // do while loop
         while (flag=='y');
        
         
         return 0;
 } // closes program
   
    
     
