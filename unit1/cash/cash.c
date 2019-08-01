#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
// given amount of change, this program will give you the least number of coins needed to make that amt
{
    float x;
    int i, change;
    int q, d, n, p;
    i = 0;

    q = 25;
    d = 10;
    n = 5;
    p = 1;

    do
    {
        x=get_float("change owed: ");

    }
    while(x<0);

    change = roundf(x * 100);

    while(change >= q)
    {
        i++;
        change = change -q;
    }

     while (change >= d)
    {
        i++;
        change = change -d;
    }

     while(change >= n)
    {
        i++;
        change = change -n;
    }

     while(change >= p)
    {
        i++;
        change = change -p;
    }

printf("%d\n", i);

}
