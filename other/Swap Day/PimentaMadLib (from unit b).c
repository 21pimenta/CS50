/********
   Unit B Final Program - MADLIBS 
   PimentaMadLib.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>

int main() 
{ 
    /* variable name can hold up to 32 characters */
    char direction [32];
    char color [32];
    char plural_clothing_item [32];
    char food [32];
    char verb_ending_in_ing [32];
    char bad_smell [32];
    int number;
    char adjective [32];
    char plural_noun [32];
    char adjective2 [32];
    char food2[32];
    char country [32];
    char liquid [32];
    char plural_noun2 [32];
    char level_of_difficulty [32];
    char pet [32];
    int  number2;
    char home_appliance [32];
    char sound_effect [32];
    char amount_of_money [32];
    int  number3;
    char period_of_time [32];
    char movie_character [32];
    char body_part [32];
    char adjective3 [32];
    
    // Hi parents! To start, press the run button and follow instructions.
//    Also, remember, do NOT write anything in the middle of my code or mess it up. thanks.
    
        /* get the user input */
    printf ("Have fun filling out this MadLib! Please follow instructions and do not use capital letters\nunless it is a person's or country's name. Also, only use one-word answers.\n\n");
    
    
    //use %s for chars and %d for numbers 
    //take user input
    printf("A direction\n"); 
    scanf("%s", &direction);
    printf("A color\n");
    scanf("%s", &color);   
    printf("A plural article of clothing\n");
    scanf("%s", &plural_clothing_item); 
    printf("A food item\n");
    scanf("%s", &food);
    printf("A verb ending in -ing\n");
    scanf("%s", &verb_ending_in_ing);  
    printf("A bad smell\n");
    scanf("%s", &bad_smell);    
    printf("An integer\n");
    scanf("%d", &number);  
    printf("An adjective \n");
    scanf("%s", &adjective);
    printf("A plural noun \n");
    scanf("%s", &plural_noun);  
    printf("An adjective\n");
    scanf("%s", &adjective2);   
    printf("Another food\n");
    scanf("%s", &food2);  
    printf("A country (remember to capitalize)\n");
    scanf("%s", &country);  
    printf("A liquid\n");
    scanf("%s", &liquid);   
    printf("Another plural noun\n");
    scanf("%s", &plural_noun2); 
    printf("A level of difficulty (easy or hard)\n");
    scanf("%s", &level_of_difficulty); 
    printf("A type of pet\n");
    scanf("%s", &pet);
    printf("Another number\n");
    scanf("%d", &number2);  
    printf("A home appliance\n");
    scanf("%s", &home_appliance);     
    printf("A sound effect\n");
    scanf("%s", &sound_effect); 
    printf("Another number\n");
    scanf("%s", &amount_of_money); 
    printf("Another number\n");
    scanf("%d", &number3); 
    printf("A singular period of time (ex., hour, week, year)\n");
    scanf("%s", &period_of_time); 
    printf("A movie character (one word) \n");
    scanf("%s", &movie_character);
    printf("A body part \n");
    scanf("%s", &body_part); 
    printf("Another adjective \n");
    scanf("%s", &adjective3); 
    
    printf("Here's the finished Mad Lib!\n\n");
    
    // print the story
    printf("Are you sick and tired of looking %s to see your favorite %s %s ruined by a pesky %s stain...FOREVER?\n", direction, color, plural_clothing_item, food);
    printf("Have you been %s yourself to sleep every night because the only %s you own smell like %s?\n", verb_ending_in_ing, plural_clothing_item, bad_smell);
    printf("Well, you no longer have to fret about keeping your %d %s %s because Tide %s can take care of even the most %s fabric disasters.\n", number, plural_clothing_item, adjective, plural_noun, adjective2);
    printf("Want to partake in the annual %s fight in %s? Have at it! %s-wrestling?\n", food, country, liquid);
    printf("That's a-okay because Tide %s will help clean up the aftermath.\n", plural_noun);
    printf("They're so %s even your %s could do it. Simply toss %d of them in the %s with your laundry, and %s! - instant clean!\n", level_of_difficulty, pet, number2, home_appliance, sound_effect);
    printf("For only $%d you can purchase a pack of %d Tide %s so don't worry about not eating for the next %s.\n", amount_of_money, number3, plural_noun, period_of_time);
    printf("Whether you want to be the next Indiana Jones or the next %s, go have an adventure because we got your %s.\n\n", movie_character, body_part);
    printf("If it's got to be %s, it's got to be Tide!", adjective3);

    
    


    return 0;
}
