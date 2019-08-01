#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[])
{ //ci = (pi + k) mod 26;
    int key = 0;
    int ci, pi;
    char cc;
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
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
        if (islower(input[i]))
        {
            cc = (input[i] + key - 'a') %26 + 'a';
        }
        else if (isupper(input[i]))
        {
            cc = (input[i] + key - 'A') %26 + 'A';
        }
        else{
            cc = input[i];
        }
        printf("%c", cc);
    }
    printf("\n");

    return 0;
}

// check for non alphabetical characters (like spaces) and print them as is using isalpha func