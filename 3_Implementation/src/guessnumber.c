/**
 * @file guessnumber.c
 * @author Hemanth Naik (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "guessnumber.h"

void guessnumber()
{
    printf("\nWelcome to Number guessing game\n\n");
    int num, guess, tries = 0,n,num_of_players,winner_tries;
    char user_name[20],winner[20];
    printf("Enter the number of players\n");
    scanf("%d",&num_of_players);
    printf("Enter the maximum range of number to be guessed starting from 1 : \n");
    scanf("%d",&n);
    winner_tries= n+1;
    for(int i=0;i<num_of_players;i++)
    {
        printf("Enter Player %d's name: ",i+1);
        scanf("%s",user_name);
        num = random_num_limit(n);
        tries = 0;

        while(guess!=num)
        {
            printf("Enter a guess between 1 and %d : ",n);
            scanf("%d", &guess);
            tries++;
            if(guess>n)
                printf("\n%d exceeds the limit(%d), try again\n",guess,n);
            else{
                switch(num_guess(guess,num))
                {
                    case 1: printf("%d is greater than the required number\n\n",guess);break;
                    case 2: printf("%d is smaller than the required number\n\n",guess);break;
                    case 3: printf("Great!!! %d is the required number, you got it in %d guesses\n\n",guess,tries);
                }
        }
        }


        if(tries<winner_tries)
        {
            strcpy(winner,user_name);
            winner_tries = tries;
        }
    }
    printf("\nThe winner is %s with %d attempts\n",winner,winner_tries);
}

int num_guess(int num,int n)
{
    if(num>n)
        return 1;
    if(num<n)
        return 2;
    return 3;

}

int random_num_limit(int num)
{
    srand(time(0));
    return (rand()%num+1);
}
