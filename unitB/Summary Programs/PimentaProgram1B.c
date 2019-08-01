/********
   Unit B: Summary Program 1 (convert feet into inches) 
   PimentaProgram1B.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main()
{
    /*** declare variables ***/
    double ft; /*** feet ***/
    double in; /*** inches ***/
    
    /*** get users input ***/
    printf("How many feet do you want to convert to inches?\n");
    scanf("%lf", &ft); // accep the user's input of an integer

    // calculation
    in=ft*12;


    // program input
    printf("%lf feet = %lf inches\n", ft, in);

    return 0;

}

	

