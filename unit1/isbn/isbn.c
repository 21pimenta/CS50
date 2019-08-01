#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // set up variables
    long long int isbn, tempisbn;
    int check, i;

    // how to get the user input
    isbn = get_long("Please enter an ISBN number without dashes: \n");

    // initialize for check loop
    tempisbn = isbn;
    check = 0;

    // check loop
    for(i = 10; i > 0; i--)
    {
        check += (tempisbn % 10) * i; // gets the rightmost digit
        tempisbn = tempisbn/10;
        printf("%lld\n", tempisbn);

    }

    // output
    printf("%lld", isbn);

    if (check % 11 == 0)
    {
        printf("\nYES\n");
    }
    else
        printf("\nNO\n");

    return 0;
}