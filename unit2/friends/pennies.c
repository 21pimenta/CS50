#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    int days;
    int first;
    long long total;
    long double totaldollars;

    if (argc==3)
    {
        //printf("C: %s\n", argv[1]);
        sscanf(argv[1], "%d", &days);
        if (days < 28 || days > 31)
        {
            printf("Days should be between 28 and 31.\n");
            return 1;
        }

        sscanf(argv[2], "%d", &first);
        if (first <= 0)
        {
            printf("Pennies should be more than 0.\n");
            return 1;
        }

    }
    else
    {
        printf("Usage: ./pennies3 <# of days> <# of pennies> \n");
        return 1;
    }

    total = (first)*(1-pow(2, days))/(1-2);
    totaldollars = (total / 100.0);

    printf("$%.2Lf\n", totaldollars);

    return 0;
}