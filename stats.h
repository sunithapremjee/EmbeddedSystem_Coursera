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
 * @file <stats.h>
 * @brief <Header file to analyze an array of unsigned char data items and report 
analytics on the  maximum, minimum, mean,
 * and median of the data set. In addition, data is reordered from large to small.
 * All statistics are rounded down to the nearest integer.
 * After analysis and sorting is done,  data is printed>
 *
 * @author <Sunitha Premjee>
 * @date <04/08/2018>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 * @param <test[]> <A unsigned char pointer to an n-element data array>
 * @param <nSize> <An unsigned integer as the size of the array>
 * @return <void>
 */
void print_statistics( unsigned char test[], unsigned int nSize );

/**
 * @brief <Given an array of data and a length, prints the array to the screen.>
 * @param <test[]> <A unsigned char pointer to an n-element data array>
 * @param <nSize> <An unsigned integer as the size of the array>
 * @return <void>
 */
void print_array( unsigned char test[], unsigned int nSize );

/**
 * @brief < Given an array of data and a length, returns the median value.>
 * @param <test[]> <A unsigned char pointer to an n-element data array>
 * @param <nSize> <An unsigned integer as the size of the array>
 * @return <void> <Returns median>
 */
float find_median( unsigned char test[], unsigned int nSize );

/**
 * @brief <Given an array of data and a length, returns the mean>
 * @param <test[]> <A unsigned char pointer to an n-element data array>
 * @param <nSize> <An unsigned integer as the size of the array>
 * @return <void> <Returns mean>
 */
float find_mean( unsigned char test[], unsigned int nSize );

/**
 * @brief < Given an array of data and a length, returns the maximum.>
 * @param <test[]> <A unsigned char pointer to an n-element data array>
 * @param <nSize> <An unsigned integer as the size of the array>
 * @return <void> <Returns maximum value>
 */
int find_maximum( unsigned char test[], unsigned int nSize );

/**
 * @brief <Given an array of data and a length, returns the minimum>
 * @param <test[]> <A unsigned char pointer to an n-element data array>
 * @param <nSize> <An unsigned integer as the size of the array>
 * @return <void> <Returns minimum value>
 */
int find_minimum( unsigned char test[], unsigned int nSize );

/**
 * @brief <Given an array of data and a length, sorts the array from largest to smallest.>
 * @param <test[]> <A unsigned char pointer to an n-element data array>
 * @param <nSize> <An unsigned integer as the size of the array>
 * @return <int*> <Sorted array with zeroth Element as the largest value, and the last element (n-1) as the smallest value>
 */
unsigned char* sort_array( unsigned char test[], unsigned int nSize );


#endif /* __STATS_H__ */

