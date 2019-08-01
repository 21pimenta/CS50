/********
   Example program #2 from Ch 11 of Chicken book, pg 97. Mixed with pg 57 leap year program from Cheng book for accuracy. 
   PimentaLeapYear.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
#define CURRENTYEAR 2017
int main() 
{
    
    // Hi parents! To start, press the run button and follow instructions.
//    Also, remember, do NOT write anything in the middle of my code or mess it up. thanks.
    
    int yearBorn, age;
    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);
    //This if statement can do some data validation, making sure the year makes sense
    //The statements will only execute if the year is after the current year
    
    if (yearBorn > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?\n");
        printf("Congratulations on time travel!\n");
    }
    else
    {
        age = CURRENTYEAR - yearBorn;
        printf("\nSo this year you will turn or have already turned %d on your birthday!\n", age);
        
        //The second if statement uses the modulus operator to test if the year of birth wa a Leap Year. Again, ony if it is will the code execute
        
            if (yearBorn % 4 == 0 && yearBorn % 100 != 0 || yearBorn % 400 == 0)
            {
            printf("\nYou were also born in a Leap Year -- cool!\n");
            }
    }
    return 0;
}
    
