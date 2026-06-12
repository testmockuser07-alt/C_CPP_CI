/**
 * @file tic_tac_toe.h
 * @author Hemanth Naik H R (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifndef __TICTACTOE_H__
#define __TICTACTOE_H__


/**
 * @brief function for Tic-Tac-Toe game
 * 
 */
void tictactoe(void);

/**
 * @brief function that checks every rows,columns and diagonals to determine the winner
 * 
 * @return char 
 */
char check(void);


/**
 * @brief to initialize the null or empty matrix
 * 
 */
void init_matrix(void);


/**
 * @brief Get the player's move 
 * 
 * @param name 
 */
void get_player_move(char* name);

/**
 * @brief function to display the current status of the matrix or the tic-tac-toe board
 * 
 */
void disp_matrix(void);


#endif