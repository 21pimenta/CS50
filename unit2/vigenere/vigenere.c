#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[])
int key = 0;

   if (argc != 2)
    {
        printf("Usage: ./vignere k\n");
        return 1;
    }
    else
    {
        key = atoi(argv[1]);
    }

    string input = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(input); i++)
    {