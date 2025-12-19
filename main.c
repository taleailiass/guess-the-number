#include <stdio.h>
#include <stdlib.h>
include <time.h>
void clearbuffer(){
int c;
while((c=getchar())='\n'&& c !=EOF) {}
}
int main (){
  int number, guess, attempts, maxAttempts, score=0, level;
char playAgain;
srand (time(0));
printf("Welcome to Guess the Number Game ");
do { printf("\n choose difficulty Level: \n"); 
printf("1.Easy (1-50,10 attempts)\n");
printf("2.Medium((1-100,7 attempts)\n");
printf("3.Hard (1-200, 5 attempts)\m");
printf("Enter 1-3: ");
clearbuffer();
switch (level) {
case 1: number = rand() %50+1 ; maxAttempts=10; break;
case 2; number = rand() %100+1; maxAttempts=7; break;
case 3:number =rend() %200+1: maxAttempts=5; break;
default : number =rand() %100+1; maxAttempts=5; break;
}
printf("\nI Have picked a number . Try to guess it \n");
atttempts=0;
do{
printf("Enter your guess : ");
scanf("%d, &guess");
clearbuffer();
attempts++;
if(guess< number) printf("Higher\n"){
else if (guess>number) printf("Lower\n")
else {printf("Correct ! you goty it  in %d attempts\n ",attempts);
     score+=(maxAtteeempts-attempts+1)*10;//Add points
break;}
if (attempts==maxAttempts){
printf("Out of Atteempts! the number was %d.\n",number);}
else if ((level ==1 && attempts==maxAttempts/2) || (level==2 && attempts == maxAttempts/2)) {
printf("Hint: The number is %s than %d\n, guess <number ? "greater":"smaller",guess);
  }
}
while (attempts<maxAttempts);
printf("Your current score : %d\n",score);
printf("do you want to play again (y/n):\t");
scanf("%c",&playagain);
clearbuffer();
} while(playagain=='y' || playagain='Y');
printf("\nThanks for playing, final score : %d\n",score);
return 0;
   }
