#include<stdio.h>
#include<stdlib.h>    //header file for random  number
#include<time.h>    //header file for random  number


int main()
{   int guessed,guess=0;                    //this is for random number
    srand(time(0));                         //this is for random number                                         
    int randomNumber = (rand() % 100)+1;    //this is for random number                         
    // printf("random Number : %d\n",randomNumber);               
       do
       {
          printf ("guess the number :");
          scanf ("%d",&guessed);
          if (randomNumber<guessed) printf("Enter lower number to find randomNumber");    
          else if (randomNumber>guessed) printf("Enter higher number ");    
           else  break; 
            guess+=1;//guess++;
       } while (guessed != randomNumber);

   printf("you guess right in %d guess",guess);
    return 0; 
    }