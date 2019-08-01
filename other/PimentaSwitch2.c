/********
   A program using an example of (switch) and a 'do..while'. Modeled after program on pg 152 of Chicken book. 
   PimentaSwitch2.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
int main() 
{
    int choice;
    
    printf("Welcome to Jenna's Birthday Cake Shop!\n");
    printf("Which cake do you want? All cakes come in standard sheet size.\n\n");
    printf("1. Standard Chocolate: Chocolate cake with chocolate shavings on the border,\nalong with your choice of colored buttercream frosting and a special message on top.\n\n");
    printf("2. Standard Vanilla: Vanilla cake with your choice of colored buttercream frosting and a special message on top.\n\n");
    printf("3. Marble: Swirled chocolate and vanilla cake with striped white and milk chocolate shavings along the border,\nalong with your choice of colored buttercream frosting and a special message on top.\n\n");
    printf("4. Red Velvet: Red velvet cake with your choice of colored buttercream frosting and a special message on top.\n\n");
    printf("5. Salted Caramel: Chocolate cake with salted caramel buttercream, chocoate chips, a chocolate ganache filling, and a special message written on top in chocolate icing.\n\n");
    printf("6. Custom.\n\n");
    {
        
        printf("Please enter the number of the cake you would like to order.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case (1): printf("\nThat will be $55.\n");
            printf("Thank you for choosing Jenna's Birthday Cake Shop! Have a wonderful day.\n");
        break;
        case (2): printf("\nThat will be $55.\n");
            printf("Thank you for choosing Jenna's Birthday Cake Shop! Have a wonderful day.\n");
        break;
        case (3): printf("\nThat will be $55.\n");
            printf("Thank you for choosing Jenna's Birthday Cake Shop! Have a wonderful day.\n");
        break;
    
        case (4): printf("\nThat will be $55.\n");
            printf("Thank you for choosing Jenna's Birthday Cake Shop! Have a wonderful day.\n");
        break;
        
        case (5): printf("\nThat will be $75.\n");
            printf("Thank you for choosing Jenna's Birthday Cake Shop! Have a wonderful day.\n");
        break;
        case (6): printf("\nThat will be $80. To place your custom birthday cake order, call the number at the top of the screen and ask for Joe.\n");
            printf("Thank you for choosing Jenna's Birthday Cake Shop! Have a wonderful day.\n");
        break;
        default: printf("\n%d is not a cake we offer. We apologize for any inconvenience we may have caused.\n", choice);
            printf("Please choose a different cake number.\n");
        break;
    }
} while ((choice < 1) || (choice > 6));

return 0;

}

        
        
        
    
    
