#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[])
{

    if (argc!=2)
    {
        return 1;
    }

    int k = atoi(argv[1]);

    if (k<0)
    {
        return 1;
    }
    else
    {
        string plaintext = get_string("plaintext: ");
        
        printf("ciphertext: ")
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if islower(plaintext[i])
        printf("%c", (((plaintext[i] + k) - 97 ) % 26 ) + 97);
    }