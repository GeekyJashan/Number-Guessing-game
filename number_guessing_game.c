// the system will generate a random number
// players have to guess the number in minimum attempts
// players will get hints after every attempt.
// the person who got the number in least number of guesses is the winner.

#include <stdio.h>
// these two libraries are to be included for generation of a random number
#include <stdlib.h>
#include <time.h>
// lfnn
int main()
{
    int a, b, c=0, d, e;
    // b will be the system generated random number

    printf("HOW TO PLAY\n\nThe system will generate a random number\nPlayers have to guess the number in minimum attempts\nPlayers will get hints after every attempt\nThe person who got the number in least number of guesses is the winner\n\n\n");

    int number;
    srand(time(0));
    // this generates a different random number every time in 0 seconds as mentioned in the time bracket
    number = rand() % 100 + 1;
    // this rand is a library function which generates a random number
    // %100+1 makes sure the number is between 1 and 100

    do
        {
        printf("Enter the number between 1 to 100 u think will match the system generated random number\n");
        scanf("%d", &a);
            if (a < number)
        
            printf("!!HIGHER NUMBER PLZ!!\n\n");
            if (a > number)
            
                printf("!!LOWER NUMBER PLZ!!\n\n");
            if (a == number)
                {
                    printf("you won with %d guesses\n", c);
                    break;
                }
                c++;
        }while (a != number);
            return 0;
        }
        // FEELING AWESOME AFTER FIRST EVER C PROJECT GAME