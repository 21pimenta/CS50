#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("input:  ");
    printf("output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        //printf("%c\n", s[i]);
        if (i==0){
          printf("%c", toupper(s[i]));
        }
        if(s[i] == ' '){
            printf("%c", toupper(s[i+1]));
        }
    }
    printf("\n");
}

// print the initials of someone's name. single out the capital letters and print them.