/********
   Ex 17 pg 64 Cheng book.Find the total amount of investment with added interest rate and 30 years. 
   PimentaInterestRateExercise.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main()
{ 
    double y_totalamount, p_principle, r_intrate, n_numyears;
    
    p_principle= 10000;
    r_intrate = 0.08;
    n_numyears = 30;
    y_totalamount = p_principle*pow(1+r_intrate, n_numyears);
    
    printf("The total amount invested after %.0lf years at a %.2lf interest rate is $%.2lf\n", n_numyears, r_intrate, y_totalamount);
    return 0;
}
    
