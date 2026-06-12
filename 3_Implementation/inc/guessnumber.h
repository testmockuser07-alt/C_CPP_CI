/**
 * @file guessnumber.h
 * @author Hemanth Naik (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#ifndef __GUESSNUMBER_H__
#define __GUESSNUMBER_H__


/**
 * @brief function for number guessing game
 * 
 */
void guessnumber(void);

/**
 * @brief returns the value corresponding to the relationship between the generated number and guessed number
 * 
 * @return int 
 */
int num_guess(int,int);

/**
 * @brief returns the random number between 1 and the sent parameter value
 * 
 * @return int 
 */
int random_num_limit(int);

#endif