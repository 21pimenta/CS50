/********
   Math Menu 2.0 - New And Improved! (With Functions) || this is a tester/rough draft
   PimentaRockPaperScissors.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main () {
    
int choice;
   double fun1 (double r, area);
    double fun2 (double x1, x2, y1, y2, distance);
    double fun3 (double surface_area, radius);
    double fun4 (double a, b, c);
    double fun5 (double num1, num2, num3, average);
    int fun6 (int userchoice, compchoice, roundnumber, rock=1, paper=2, scissors=3, i, wins=0, losses=0, ties=0);
    double fun7 (double yesno, valueA, valueB, valueC, yes);
    int fun8 (int number);
    double fun9 (double m, k);
    double fun10 (double l, w, area3)
    
    









    printf ("MENU\n");

     printf("Welcome to the ultimate math program!\n");
     printf("Please choose one of these programs to run. Type the number associated with each program.\n");
     printf("    1. Area of a Circle\n");
     printf("    2. Distance Formula\n");
     printf("    3. Radius of a Sphere\n");
     printf("    4. Finding the Hypotenuse\n");
     printf("    5. Average\n");
     printf("    6. Rock Paper Scissors\n");
     printf("    7. Pythagorean Theorem\n");
     printf("    8. Even or Odd?\n");
     printf("    9. Miles to Kilometers\n");
     printf("   10. Area of a Rectangle\n");
    
     scanf("%d", &choice);
     
     switch (choice){
         
         case (1): 
             double r, area;
     
             printf("Enter the radius of a circle in meters:\n");
             scanf("%lf", &r);
     
             // calculate the area
             area = M_PI*r*r; 
     
             // display the result
             printf("The area of the circle is %lf square meters\n", area);
             break;
         
         
         case (2): 
             double x1, x2, y1, y2, distance;
             
             printf("Enter your first x point.\n");
             scanf("%lf", &x1);
             printf("Enter your second x point.\n");
             scanf("%lf", &x2);
             printf("Enter your first y point.\n");
             scanf("%lf", &y1);
             printf("Enter your second y point.\n");
             scanf("%lf", &x2);
         
             distance = sqrt(pow((x1 - x2), 2)+ (pow((y1 - y2), 2)));
     
             printf("Distance = %lf\n", distance);
             break;
         
         
         case (3):
             double surface_area, radius;
             printf("Enter the surface area of your sphere.\n");
             scanf("%lf", &surface_area);
       
             radius = sqrt(surface_area /(4*M_PI));

             printf("The radius of the circle is %lf meters\n", radius);
             break;
         
         
         case (4): 
             // declare variables for the length of the hypotenuse for a right triangle
             double a, b, c;
             printf("Enter value for side A.\n");
             scanf("%lf", &a);
             printf("Enter value for side B.\n");
             scanf("%lf", &b);
             //calculate hypotenuse
             c = sqrt(pow(a,2) + pow(b,2)); 
             // display result
             printf ("The hypotenuse = %lf meters\n", c);
            
             break;
         
         
         case (5):
             double num1, num2, num3, //three numbers
             average;
     
             // enter the user input
             printf("Welcome to the Average Calculator\n");
             printf("Please enter 3 numbers\n");
             scanf("%lf", &num1, &num2, &num3);
   
     
             // calculate the average
             average = (num1+num2+num3) /3;
             // display output
             printf("The average is %.2lf\n", average);
             break;
         
         
         case (6): 
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
                    rock; // rok
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
                 break;
            
            
            
         case (7): 
             double yesno, valueA, valueB, valueC, yes;
             //get user input
             printf("Do you know the values of side A and side B? Type 1 for yes or 2 for no.\n");
             scanf("%lf", &yesno);
    
             if(yesno == 1) { 
             printf("What is your value for side A?\n");
             scanf(" %lf", &valueA);
             printf("What is your value for side B?\n");
             scanf(" %lf", &valueB);
          
             valueC = sqrt(pow(valueA,2) + pow(valueB,2));
             printf ("The hypotenuse = %.2lf meters\n", valueC);
             }
             else { 
             printf("What is your value for side C, the hypotenuse?\n");
             scanf(" %lf", &valueC);
             printf("What is your value for one of the other sides?\n");
             scanf(" %lf", &valueB);         
             valueA = sqrt(pow(valueC,2) - pow(valueB,2));
             printf ("Side A, the other/missing side = %.2lf meters\n", valueA);
             }
             break;
             
             
         case (8):
              int number; 
     
             // get the user input
             printf("Please enter a number and we'll help you figure out if it's odd or even.\n");
             scanf("%d", &number);
    
             
             if (number%2 == 0)  { 
             printf ("%d is an even number.\n", number);
             }
     
             else {
             printf("%d is an odd number.\n", number);
             }
             break;
                 
             
         case (9): 
             /* declare variables */
             double m; /* miles */
             double k; /* kms */
             
             /* get users input */
             printf ("How many miles do you want to convert to kilometers?\n");
             scanf("%lf", &m); // accep the user's input of an integer
    
             // calculation
             k=1.609*m;

             // program output 
             printf ("%.2lf miles = about %.2lf kilometers\n", m, k);
             break;
         
         
         case (10):
             double l, w, area3; /* length, width, and area*/
    
             printf ("Please input the length and width of a rectangle in meters.\n");
             scanf ("%lf%lf", &l, &w);
    
             /* calculate the area */
             area3 = l*w;
    
             /* display the result */ 
             printf ("The area of the rectangle is %.2lf square meters\n", area3);
             break;
    }
     return 0;
 }

    
