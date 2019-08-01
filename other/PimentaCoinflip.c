/********
   Exercise 29 pg 104 cheng book. write a program to simulate the flipping of a coin 10,000 times and print the simulation result similar to the one shown below
   PimentaCoinflip.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
main ()
{
    int face, // face in each roll
    flipcount, // flip side number
    freqhead=0, freqtail=0;

    srand(time(NULL)); // seed the random number generator
    // use a loop to roll 6000 times
    for (flipcount = 1; flipcount <= 10000; flipcount++) {
        // generate a random face, either heads or tails
        face = 1 + srand() % 2;
        // record the face in a frequency variable
        switch(face) {
            case 1:
                freqhead += 1;
                break;
            case 2:
                freqtail += 1;
                break;

        }
    }
    // display the frequency for each face
    printf(" Face        Frequency\n");
    printf(" Heads            %d\n", freqhead);
    printf(" Tails            %d\n", freqtail);

    return 0;
}

