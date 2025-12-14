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
