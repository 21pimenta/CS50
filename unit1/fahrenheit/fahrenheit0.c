#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    float input;
    float f;

    printf("C: ");

    if (scanf("%f", &input)!=1)
    {
        printf("This is not a valid input.\n");
    }
    else {
        f = ((input * 9) / 5) + 32;
        printf("F: %.1f\n", f);
    }
}
