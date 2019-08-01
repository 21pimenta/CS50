/********
   Combine four math programs into one. 
   PimentaMath.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
     int choice;
     printf("Welcome to the ultimate math program!\n");
     printf("Please choose one of these programs to run. Type the number associated with each program.\n");
     printf("    1. Area of a Circle\n");
     printf("    2. Distance Formula\n");
     printf("    3. Radius of a Sphere\n");
     printf("    4. Finding the Hypotenuse\n");
     printf("    5. Average\n");
     printf("    6. Print a Multiplication Table\n");
     printf("    7. Pythagorean Theorem\n");
     printf("    8. Even or Odd?\n");
     printf("    9. Miles to Kilometers\n");
     printf("   10. Area of a Rectangle\n");
     printf("   11. Fahrenheit to Celcius Table\n");
    
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
             int i, j;
    
             printf("      1   2   3   4   5   6   7   8   9   10\n");
             printf("   -----------------------------------------\n");
    
             // for multiplication of i*j with both i and j from 1 to 10
             for(i=1; i<= 10; i++) {
        
                 printf("%d|", i);
                 for(j=1; j <=i; j++) {
                 printf("%4d", i+j);
                 }
                 printf("\n");
                 }
                 printf("   -----------------------------------------\n");
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
         
         
         case (11):
             double x, x0, xf, xstep, y;
    
             printf("Fahrenheit  Celcius\n");
             printf("-------------------\n");
             x0 = 0.0;
             xf = 120.0;
             xstep = 10.0;
             for(x = x0; x <= xf; x += xstep) {
                 y = 5*(x - 32)/9;
                 printf("%5.lf %12.2lf\n", x, y);
                 }
    }
     return 0;
 }
