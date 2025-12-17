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
