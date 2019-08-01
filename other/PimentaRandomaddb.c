/********
   Exercise 26 pg 104 cheng book PART B. Ask the user a total of ten addition problems. At the end of 10th question, print a message to tell th euser how many problems were answered correctly. If the user has more than 8 right, give them a compliment. For fewer than 6 right, give an encouragement. Not thate the user should only have one chance to answer each question. 
   PimentaRandomaddb.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

    int main() {
        
    int x, y, response, right, i;
        
    right=0;
        
    srand(time(NULL));
        
    for(i=1; i<=10; i++){
        x=1+rand()%10;
        y=1+rand()%10;
        printf("(%d) What is %d + %d?\n", i, x, y);
        scanf("%d", &response);
        if(response==(x+y)){
            right++;
        }
    }
    
    printf("You answered %d questions correctly!\n", right);
    if(right > 8){
        
        printf("Congratulations! You're really good at addition!\n");
    }
    
    if (right < 6){
        printf("You should practice your addition!\n");
    }
    return 0;
}

