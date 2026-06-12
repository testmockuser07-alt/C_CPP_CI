/**
 * @file tic_tac_toe.c
 * @author Hemanth Naik H R (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-04-13
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "tictactoe.h"

char matrix[3][3];
char p1[10],p2[10];

void tictactoe(void)
{
  char done;int cnt = 0;
  char player1[10],player2[10];
  printf("Welcome to the game of Tic Tac Toe.\n");
  printf("Enter name of player 1 : \n");
  scanf("%s",player1);
  printf("Enter name of player 2 : \n");
  scanf("%s",player2);

  strcpy(p1,player1);
  strcpy(p2,player2);
  done =  ' ';
  init_matrix();

  do {
    disp_matrix();
    get_player_move(player1);
    done = check(); /* see if winner */
    if(done!= ' ') break; /* winner!*/
    cnt++;
    if(cnt==9)
    {
        disp_matrix();
        printf("Draw!!!\n");
        break;
    }
    disp_matrix();
    get_player_move(player2);
    done = check(); /* see if winner */
    if(done!=' ') break;
    cnt++;
    if(cnt==9)
    {
        disp_matrix();
        printf("Draw!!!\n");
        break;
    }
  } while(done== ' ');

   /* show final positions */
  if(done=='X'){
        disp_matrix();
        printf("\n\n%s won!\n",player1);
  }
  else if(done=='O'){
        disp_matrix();
        printf("%s won!!!!\n",player2);
  }

}

/* Initialize the matrix. */
void init_matrix(void)
{
  int i, j;

  for(i=0; i<3; i++)
    for(j=0; j<3; j++) matrix[i][j] =  ' ';
}

/* Get a player's move. */
void get_player_move(char* name)
{
  int x, y;
    printf("%s :\n",name);
  printf("Enter X,Y coordinates for your move: ");
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(matrix[x][y]!= ' '){
    printf("Invalid move, try again.\n");
    get_player_move(name);
  }
  else if(!strcmp(name,p1)) matrix[x][y] = 'X';
  else if(!strcmp(name,p2)) matrix[x][y] = 'O';
}

/* Display the matrix on the screen. */
void disp_matrix(void)
{
  int l;

  for(l=0; l<3; l++) {
    printf(" %c | %c | %c ",matrix[l][0],
            matrix[l][1], matrix [l][2]);
    if(l!=2) printf("\n---|---|---\n");
  }
  printf("\n");
}

/* See if there is a winner. */
char check(void)
{
  int i;

  for(i=0; i<3; i++)  /* check rows */
    if(matrix[i][0]==matrix[i][1] &&
       matrix[i][0]==matrix[i][2]) return matrix[i][0];

  for(i=0; i<3; i++)  /* check columns */
    if(matrix[0][i]==matrix[1][i] &&
       matrix[0][i]==matrix[2][i]) return matrix[0][i];

  /* test diagonals */
  if(matrix[0][0]==matrix[1][1] &&
     matrix[1][1]==matrix[2][2])
       return matrix[0][0];

  if(matrix[0][2]==matrix[1][1] &&
     matrix[1][1]==matrix[2][0])
       return matrix[0][2];

  return ' ';
}
