// greets a user by their name

#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    // collect a string from the user, then print their name
int name;
    // string name = get_string("Your name : ");

    if (argc==2){
        sscanf(argv[1], "%d", &name);
        printf("Hello, %s!\n", argv[1]);
    } else {
        printf("Usage: ./hello <name>\n");
        return 1;
    }
}
