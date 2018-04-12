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
	print_statistics( test, SIZE );

}

void print_statistics( unsigned char test[], unsigned int nSize)
{
	 printf( " The array of data : ");
	 print_array( test, nSize );

	 int min = find_minimum( test, nSize );
	 printf( "\nMinimum value :- %d\n", min );

	 int max = find_maximum( test, nSize);
	 printf( "Maximum value :- %d\n", max );

	 float mean = find_mean( test, nSize );
	 printf( "Mean :- %f\n", mean );

	 float median = find_median( test,nSize );
	 printf( "Median :- %f\n", median );
}

void print_array( unsigned char test[], unsigned int nSize )
{
	 for (int i = 0; i < nSize; i++)
	 {
	  printf( "%d\t", test[i] );
	 }
}

float find_median( unsigned char test[], unsigned int nSize )
{
	unsigned char* pArray = sort_array( test, nSize );

	if( pArray == NULL )
		return 0;

	if( nSize%2 == 0)
	{

	  return(( pArray[nSize/2] + pArray[nSize/2 - 1] ) / 2.0);
	} 
	else
	{

	  return pArray[nSize/2];
	}
}

float find_mean( unsigned char test[], unsigned int nSize )
{
	float sum=0;

	for(int i=0; i < nSize; i++)
	  sum += test[i];

	return( sum/nSize );
}

int find_maximum( unsigned char test[], unsigned int nSize )
{

	unsigned char* pArray = sort_array( test, nSize );

	if( pArray != NULL )
	  return pArray[0];
	else
	  return 0;
	
}

int find_minimum( unsigned  char test[], unsigned int nSize )
{
	unsigned char* pArray = sort_array( test, nSize );

	if( pArray != NULL )
	  return pArray[nSize-1];
	else
	  return 0;
	
}

unsigned char* sort_array( unsigned char test[],  unsigned int nSize )
{ 
	for (int i = 0; i < nSize; i++)
	{
		for (int j = 0; j < nSize - i - 1; j++)
		{
			if (test[j] < test[j + 1])
			{
				int temp = test[j];
				test[j] = test[j + 1];
				test[j + 1] = temp;
			}
		}
	}
	return test; 
}

