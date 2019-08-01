/********
   Program to play rock paper scissors with the user.
   PimentaRockPaperScissors.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

    int main() {
        int userchoice, compchoice, roundnumber, rock=1, paper=2, scissors=3, i, wins=0, losses=0, ties=0; // i is the number of rounds they choose to play

        srand(time(NULL));

        printf("We're gonna play rock paper scissors! Remember, type 1 for rock, 2 for paper, and 3 for scissors. Don't enter anything other than 1, 2, or 3.\n\n");
        printf("How many times would you like to play?\n");
        scanf("%d", &i);

        for (roundnumber = 1; roundnumber <= i; roundnumber++) {

            printf("\nRock...paper...scissors...shoot!\n");
            scanf("%d", &userchoice);

        compchoice = 1 + rand() % 3;
        printf("The computer chose %d.\n", compchoice);

            switch(userchoice) { // opens switch loop

                case 1:
                    rock; // user types 1 (rock)
                if (compchoice==1){ // if the computer chooses 1, rock
                    printf("We tied!\n"); // then you tied
                    ties++;
                    break;
                }
                else if (compchoice==2){  // if the computer chooses 2, paper
                    printf("Paper beats rock, you lose!\n"); // then paper beats rock, 2 beats 1, and you LOSEEEE
                    losses++;
                    break;
                }
                else if (compchoice==3){ // if the computer chooses 3, sckisossrs,
                    printf("Rock beats scissors, you WON!\n"); // then rock beats sckissors and the user WINNS
                    wins++;
                    break;
                }

                case 2:
                    paper; // papr
                if (compchoice==1){
                    printf("Paper beats rock, you WON!\n");
                    wins++;
                    break;
                }
                else if (compchoice==2){
                    printf("We have the same choice, we tied!\n");
                    ties++;
                    break;
                }
                else if (compchoice==3){
                    printf("Scissors cuts paper. You lost.\n");
                    losses++;
                    break;
                }

                case 3:
                    scissors; // skissorss,..
                if (compchoice==1){
                    printf("Rock crushes scissors, you lost.\n");
                    losses++;
                    break;
                }
                else if (compchoice==2){
                    printf("Scissors cut paper, you WIN!\n");
                    wins++;
                    break;
                }
                else if (compchoice==3){
                    printf("You also chose scissors, we tied!\n");
                    ties++;
                    break;
                } // close switch loop
            }
        }
        printf("\nThe user won %d/%d rounds.\n", wins, i);
        printf("The computer won %d/%d rounds.\n", losses, i);
        printf("The computer and the user tied for %d/%d rounds.\n", ties, i);
        printf("\nThank you for playing with me!\n");

// ^^^ final results and stats
    return 0;

        }


