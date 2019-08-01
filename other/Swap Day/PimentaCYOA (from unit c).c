/********
   CHOOSE YOUR OWN ADVENTURE Project - See Google Form for more reference. 
   PimentaCYOA.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> //for macro M_PI
int main() 
 {
     
     
     // Hi parents! To start, press the run button and follow instructions.
//    For this program especially, please DO NOT write anything 
     // in the middle of my code or try to edit it. thank you very much ((((:
    // have fun in my seven other classes because i dont have a free block RIP
     
     // declare variables
     string_t a, b, c, d, e, f, g, h, i, j, k, l, m, n, response;
     
     // get user input and display as output
     printf("Please type your answers exactly as directed in the instructions, and in lowercase letters, like 'a' and 'b'. Thank you!\n\n");
     printf ("You recently purchased and moved into an old, creaky house at the end of Haunted House Lane. Everyone told you not to live there- \nthe owner's daughter died there from mysterious causes and is said to haunt the place. However, you thought it was a good deal and also, you can't afford anything else...\nSo you'll have to deal with it.\n");
     
     //(1)
     printf("\nWait- what was that? There's the sound of footsteps upstairs! \nDo you go up find out what's going on, or do you huddle under your blanket on the sofa and watch Netflix?\n[Type a to go upstairs or b to watch Netflix.]\n"); //(1)
     scanf("%s",&response);
     if (response == "a"){ // if they choose to go upstairs
         printf("There's blood spatters...on the ceiling? You start hearing knocking on the bedroom door, but when you open it- there's no one there. All of a sudden, you hear a bloodcurdling\nscream coming from the bathroom. Do you investigate or take refuge in the kitchen?\n[Type c for investigating bathroom or d for hiding in the kitchen]\n"); // go upstairs, 1A
         // THIS PART IS WHAT HAPPENS AFTER QUESTION 1A
         scanf("%s", &response); //their answer for question 1A
         if(response == "c"){ // if they choose to investigate the bathroom
             printf("You go in and turn on the lights. AHHH! The ghost is hiding in the toilet and emerges, screaming at you! Do you run or attempt to fight?\n[Type g for run or h for fight]\n"); // Investigate the bathroom, 2A
             scanf("%s", &response); 
         
         // their answer for question 2A
            if (response == "g"){
                printf("You have managed to escape! However, you also have to end up selling the house and can't afford one that's not haunted, so you're now homeless.\nGood luck finding somewhere to live!\n"); //ENDING
            }
            else if (response == "h"){
                printf("You're so bad at trying to attack the ghost (you throw multiple failed punches- you can't punch a ghost!)\nthat she's surprised (she's never come across someone as incompetent as you), and ends up falling over into the toilet bowl because she's laughing so hard and completely forgets her plans to kill you.\nYou end up becoming best friends (after you recover from your humiliation).\n"); //ENDING
            } 
        }  
        
        
         else if(response == "d"){ // if they chose a different response as the answer for 1A (if they take refuge in the kitchen)
             printf("You go downstairs, already debating whether this house was really a good idea- AHH! You suddenly find the ghost standing there!\nAnd...she's wielding a large kitchen knife? Do you ask why she's somehow able to hold a knife or do you spar with them?\n[Type i for ask, j for spar]\n"); //Take refuge in the kitchen, 2B
             scanf("%s", &response);
             
             if (response == "i"){
                 printf("She answers your question! She says that she's a ghost and can do whatever she likes, including mind control of objects.\nHalf interested and half trying to distract her from stabbing you, you continue to ask more questions about how that would exactly work\nand end up sitting on the floor, eating Oreos (well- you do, at least, she can't-) and discussing the technicalities of the afterlife.\n");
             }
            else if(response == "j"){
                printf ("You can't kill a ghost- they're already dead. What were you even trying to accomplish? Why didn't you just run for your life? Anyways...you die.\n");
            }
        }
    }
     
    
     else if (response == "b"){
         printf("Coward. What do you watch on Netflix?\n[Type e for Stranger Things, or f for Riverdale]\n");
         scanf("%s", &response);
         if (response == "e"){
             printf("Good choice! Is that shadow actually moving or is your mind playing tricks on you?\nDo you check out the source of the shadow in the living room or stay put and take a Buzzfeed quiz about which color goldfish is your soulmate?\n[k for finding shadow, l for Buzzfeed]\n");
             scanf("%s", &response);
             if (response == "k"){
                 printf("It turned out to be the ghost, who promptly possessed you. You go on a killing rampage throughout the street, then cities, then entire states, and the police never catch you.\nYou're basically the Zodiac Killer, except you don't leave clues and you're wayyy better. I mean...congratulations?\n");
             }
            else if(response == "l"){
                printf("The green goldfish is your soulmate! However, the ghost finds you watching YouTube, and after sitting next to you and waiting for you to finish, she politely snaps your neck. She's kind of passive aggressive...sorry.\n");
             }
         }
         
         else if (response == "f"){
             printf ("Good choice. Hold on...did the lights just turn on in the kitchen? Do you go call the police or do you take matters into your own hands and confront the intruder?[m for police and n for confront\n");
             scanf("%s", &response);
             if (response == "m"){
                 printf("You call the police and run, but all they'll ever find in the house is your bloody remains. So sad. \n");
             }
            else if(response == "n"){
                printf("The ghost turns out to just be looking for something to eat in the fridge- honestly, same. You sit down with her for dinner and have a lengthy conversation about taxes and the afterlife.\n");
            }
        }
    }
    
    else{
        printf("NO! YOU ARE PUNISHED FOR ENTERING AN INVALID LETTER. YOUR FAMILY IS CURSED FOR ETERNITY. YOU WILL NEVER SEE THE LIGHT OF DAY AGAIN. ALSO, YOU DIE.\n");
    }
    

    
    printf("\n\nThank you for playing! Run this program again for a different outcome!\n");
    return 0;
}
