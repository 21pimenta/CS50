/********
   Ex 11 pg 63 Cheng book. Algebra 2 or trig is prereq to take Stats...find out if students are eligible for the class. 
   PimentaPrereq.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main()
{
	// declare vaiables
char name [32]; // for name
int alg2, trig;
    printf("Hello! What is your name? \n");
    scanf("%s", &name);
    printf("I understand you're interested in taking the statistics class. Have you taken Algebra 2 in the past? [ Press 1 for yes, press 2 for no ]\n");
    scanf("%d", &alg2);
    printf("Have you taken trigonometry in the past? [ Press 1 for yes, press 2 for no ] \n");
    scanf("%d", &trig);
    
    if (alg2 == 1 || trig == 1) {
        printf ("Congratulations %s, you can take the statistics class! Good luck!\n", name);
    } 
    else { 
        printf ("Sorry, it looks like you'll have to take more classes before you can take statistics. Good luck!\n");
    } 

return 0;
}
