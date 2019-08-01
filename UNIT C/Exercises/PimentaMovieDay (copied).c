/********
   Copy 4.4 pg 56 Cheng book. Students are allowed to watch movies only on Saturday or Sunday...This program checks if you can watch a movie or not. 
   PimentaMovieDay.c
   Jenna Pimenta
   C Programming *******/
#include <stdio.h>
#include <math.h> 
int main()
{
	// declare vaiables
char name [32]; // for name
int day; // 1 for monday, 2 for tuesday, 7 for sunday

// get user input
printf("What's your name?\n");
scanf("%s", &name);
printf("What day is today [1 for Mon, 2 for Tues, 3 for Wed,\n");
printf("        4 for Thurs, 5 for Fri, 6 for Sat, 7 for Sun]?\n");
scanf("%d", &day);

// if sat or sun
if (day == 6 || day == 7)  { 
printf("\nHi %s, \n", name);
printf("You can watch a movie today.\n");
printf ("Enjoy your time!\n");
}
else { 
printf ("\nHi %s, \n", name);
printf("You have to study and cannot watch a movie today. Sorry. \n");
}
return 0;
}

