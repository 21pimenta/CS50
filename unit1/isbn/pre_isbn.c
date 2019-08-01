#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // set up variables
    long long int isbn, tempisbn;
    int i, digit;

    //get the user input
    isbn = get_long("Please enter an ISBN number without dashes:\n");

    for (i=10; i>=1; i--)
    {
        digit = tempisbn%10;
        printf("multiplier - %d digit %d - isbn - %lld\n", i, digit, isbn);
        tempisbn = tempisbn/10;
    }
    //check loop

    //output


}