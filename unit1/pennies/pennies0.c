#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int days;
    int first;
    long long total;
    long double totaldollars;

    while (1) {
        printf("What days are in the month you want?\n");
        if (scanf("%d", &days) != 1)
        {
            int n;
            while((n = getchar()) != EOF && n != '\n' );
            continue;
        }

        if (days < 28 || days > 31)
        {
            printf("Days should be between 28 and 31.\n");
        }
        else
        {
            break;
        }
    }

    while (1) {
        printf("How many pennies will you get on the first day?\n");
        if (scanf("%d", &first) != 1)
           {
            int n;
            while((n = getchar()) != EOF && n != '\n' );
            continue;
       }

        if (first <= 0)
        {
            printf("Pennies should be more than 0.\n");
        }
        else
        {
            break;
        }
    }

    total = (first)*(1-pow(2, days))/(1-2);
    totaldollars = (total / 100.0);

    printf("$%.2Lf\n", totaldollars);

    return 0;
}