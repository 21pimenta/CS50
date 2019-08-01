#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int values[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf(" - %i", values[i]);
    }
    printf("\n");
}

void bubble(int values[], int n)
{
    bool swapped;
    print_arr (values, n);
    // do while swaps > 0
    do
    {
        // reset swaps to 0
        swapped = false;

        // iterate through entire array
        for (int i = 0; i < n - 1; i++)
        {
            if (values[i] > values[i + 1])
            {
                // swap them
                int temp = values[i];
                values[i] = values [i + 1];
                values [i + 1] = temp;
                // increment swaps
                swapped = true;
                print_arr (values, n);
            }
        }
    }
    while (swapped);
    return;
}

int main(void)
{
    int n = 4;

    int bvalues[4] = {4, 3, 2, 1};
    printf("bubble");
    bubble(bvalues, n);
    // int svalues [4] = {4, 3, 2, 1};
    // printf("selection")
    // selection(svalues, n);

    // int ivalues[4] = {4, 3, 2, 1};
    // print("insertion");
    // insertion(ivalues, n);

}
