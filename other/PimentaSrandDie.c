/********
   copy of program pg 97 cheng book. roll a six sided die 6000 times randomly, calculate the frequency for each face. 
   PimentaSrandDie.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
main ()
{
    int face, // face in each roll
    rollcount, // roll count number
    freq1=0, freq2=0, freq3=0, freq4=0, freq5=0, freq6=0;
    
    srand(time(NULL)); // seed the random number generator
    // use a loop to roll 6000 times
    for (rollcount = 1; rollcount <= 6000; rollcount++) {
        // generate a random number in [1, 6] 
        face = 1 + rand() % 6;
        // record the face in a frequency variable
        switch(face) {
            case 1: 
                freq1 += 1;
                break;
            case 2: 
                freq2 += 1;
                break;
            case 3: 
                freq3 += 1;
                break;
            case 4: 
                freq4 += 1;
                break;
            case 5: 
                freq5 += 1;
                break;
            case 6: 
                freq6 += 1;
                break;
        }
    }
    // display the frequency for each face
    printf(" Face        Frequency\n");
    printf("  1            %d\n", freq1);
    printf("  2            %d\n", freq2);
    printf("  3            %d\n", freq3);
    printf("  4            %d\n", freq4);
    printf("  5            %d\n", freq5);
    printf("  6            %d\n", freq6);
    return 0;
}
            
