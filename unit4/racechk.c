/**
 * race.c
 *
 * CS50 AP
 * Sort Race
 *
 * Compares the different methods of sorting
 */

#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

void print_arr(int values[],int n)
{
    for (int i=0; i<n; i++)
    {
        //printf(" - %i", values[i]);
    }
    //printf ("\n");
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
                values[i] = values[i + 1];
                values[i + 1] = temp;
                // increment swaps
                swapped = true;
                //print_arr (values, n);
            }
        }
    }
    while (swapped);
    print_arr (values, n);
    return;
}

void selection(int values[], int n)
{
    print_arr (values, n);
    for (int i = 0; i < n; i++)
    {
        // the first element is the smallest we've seen by default
        int min = i;

        // look for something smaller
        for (int j = i; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }
        // swap the minimum with the first
        int temp = values[i];
        values[i] = values[min];
        values[min] = temp;
        print_arr (values, n);
    }
    return;
}

void insertion(int values[], int n)
{
    // iterate through unsorted part of array from l->r
    print_arr (values, n);
    for (int i = 1; i < n; i++)
    {
        // define the start of the sorted array
        int j = i - 1;

        // specify the next element to sort
        int to_sort = values[i];

        // iterate through sorted part of array from r->l
        // figure out where in sorted portion to_sort should go
        while (j >= 0 && to_sort < values[j]) ////
        {
            // shift sorted elements rightward
            values[j + 1] = values[j]; //
            j--;
        }

        // insert element into sorted portion of array
        values[j + 1] = to_sort; //
        print_arr (values, n);//
    }

    return;
}


int main(void)
{
    int n = 50000;

    FILE* infile = fopen("50000.txt", "r");
    time_t init_seconds, b_seconds;

    init_seconds = time(NULL);
    int i;

    //int bvalues[4] = {4,3,2,1};

    int bvalues[50000];

    for (i = 0; i < n; i++)
    {
        fscanf(infile, "%d", &bvalues[i]);
    }

    printf ("bubble\n");
    bubble(bvalues, n);

    b_seconds = time(NULL);
    b_seconds = b_seconds - init_seconds;
    printf ("bubble time - %ld\n", b_seconds);

}
{

    FILE* infile = fopen("50000.txt", "r");
    time_t init_seconds, s_seconds;

    init_seconds = time(NULL);
    int i;

    int svalues[50000];

    for (i = 0; i < n; i++)
    {
        fscanf(infile, "%d", &svalues[i]);
    }

    printf ("\nselection");
    selection(svalues, n);

    s_seconds = time(NULL);
    s_seconds = s_seconds - init_seconds;
    printf ("selection time - %ld", s_seconds);

  //  int svalues[4] = {4,3,2,1};
   // printf ("selection\n");
  //  selection(svalues, n);//

  //  int ivalues[4] = {4,3,2,1};
//    printf ("insertion");
 //   insertion(ivalues, n);//

}
