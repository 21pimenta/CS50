#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    float input;
    float f;

    if (argc==2)
    {
        printf("C: %s\n", argv[1]);
        sscanf(argv[1], "%f", &input);
        f = ((input * 9) / 5) + 32;
        printf("F: %.1f\n", f);
    }
    else
    {
        printf("Usage: ./fahrenheit2 <Temperature in Celcius>\n");
        return 1;
    }
}
