/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <Implementation file to analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean,
 * and median of the data set. In addition, data is reordered from large to small.
 * All statistics are rounded down to the nearest integer.
 * After analysis and sorting is done,  data is printed >
 * @author <Sunitha Premjee>
 * @date <04/08/2018 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


}

void print_statistics( unsigned char test[], unsigned int nSize)
{
}

void print_array( unsigned char test[], unsigned int nSize )
{
}

int find_median( unsigned char test[], unsigned int nSize )
{
}

int find_mean( unsigned char test[], unsigned int nSize )
{
}

int find_maximum( unsigned char test[], unsigned int nSize )
{
}

int find_minimum( unsigned  char test[], unsigned int nSize )
{
}

int* sort_array( unsigned char test[],  unsigned int nSize )
{  
}

