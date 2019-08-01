/********
   Make a simple calculator based on the youtube video (channel; slidehunt)
   PimentaCalc.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
     double num1, num2, result;
     int n;
     char flag='y', retchar;
    
     while (flag=='y'){
     printf("What operation do you want?\n");
     printf("Press 1 for addition.\n");
     printf("Press 2 for subtraction.\n");
     printf("Press 3 for multiplication.\n");
     printf("Press 4 for division.\n");
     scanf("%d", &n);
     printf("Please enter a number\n");
     scanf("%lf", &num1);
     printf("Please enter a second number\n");
     scanf("%lf", &num2);
     
        switch (n)
        {
            case 1: result=num1+num2;
                printf("The addition of these two numbers is %.2lf", result);
                break;
            case 2: result=num1-num2;
                printf("The subtraction of these two numbers is %.2lf", result);
                break;
            case 3: result=num1*num2;
                printf("The multiplication of these two numbers is %.2lf", result);
                break;
            case 4: result=num1/num2;
                printf("The division of these two numbers is %.2lf\n", result);
                break;
            default:printf("Wrong input. Try again.\n");   
        }
     printf("\nDo you want to continue? y/n\n");
     scanf("%c%c", &retchar, &flag);
 }

     
 
return 0;
 }
     
