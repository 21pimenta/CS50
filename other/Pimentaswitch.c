/********
   A program using an example of (switch). Modeled after program on pg 152 of Chicken book. 
   PimentaSwitch.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
#define CURRENTYEAR 2017
int main() 
{
    int choice;
    
    printf("The Ben&Jerry Ice Cream Flavor You Choose Will Determine What City You Belong In\n");
    printf("1. Phish Food [chocolate ice cream with gooey marshmallow swirls, caramel swirls, and fudge fish]\n");
    printf("2. The Tonight Dough [caramel and chocolate ice cream with chocolate cookie swirls\nand gobs of chocolate chip cookie dough and peanut butter cookie dough\n");
    printf("3. Caramel Hat Trick [caramel ice cream with a swirl of caramel and fudge covered caramel chunks]\n");
    printf("4. Chocolate Therapy [chocolate ice cream with chocolate cookies and swirls of chocolate pudding ice cream]\n");
    printf("5. Cherry Garcia [cherry chunks and fudge flakes]\n");
    printf("6. Chunky Monkey [banana ice cream with fudge chunks and walnuts]\n");
    printf("7. Half-Baked [chocolate and vanilla ice cream mixed with chocolate chip cookie dough and fudge brownies]\n");
    do
    {
        
        printf("Enter your choice: ");
        scanf(" %d", &choice);
        switch (choice)
        {
            case (1): printf("Los Angeles, California.\n");
                break;
            case (2): printf("Austin, Texas.\n");
                break;
            case (3): printf("New York City, New York.\n");
                break;
            case (4): printf("Boston, Massachusetts.\n");
                break;
            case (5): printf("Miami, Florida\n");
                break;
            case (6): printf("San Francisco, California.\n");
                break;
            case (7): printf("Seattle, Washington.\n");
            default: printf("\n%d is not a valid choice.\n", choice);
                    printf ("Try again.\n");
            break;
        }
    } while ((choice < 1) || (choice > 7));
    
    return 0;
}
    
