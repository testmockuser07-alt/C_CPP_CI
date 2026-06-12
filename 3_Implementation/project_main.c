#include "tictactoe.h"
#include "guessnumber.h"


int main()
{
    printf("Welcome to the Gaming Application...\n");
    printf("Available games are Tic-Tac-Toe and Number guessing..\n");
    printf("For Tic-Tac-Toe enter 1\n");
    printf("For Number guessing game enter 2\n");
    int ch;
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : tictactoe();
        break;
        case 2: guessnumber();
        break;
    }
    printf("Hope you enjoyed..!!");
}
