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
 * @file stats.c
 * @brief Implementation of basic statistics operations.
 *
 * Simple application that performs statistical analytics on a dataset (minimum, maximum, mean, median).
 *
 * @author Oriol Escolà Serra
 * @date 16/07/2025
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int find_median(unsigned char* array, unsigned int length) {
  // TODO: Calculate and return the median value
  return 0;
}

int find_mean(unsigned char* array, unsigned int length) {
  // TODO: Calculate and return the mean value
  return 0;
}

int find_maximum(unsigned char* array, unsigned int length) {
  // TODO: Find and return the maximum value
  return 0;
}

int find_minimum(unsigned char* array, unsigned int length) {
  // TODO: Find and return the minimum value
  return 0;
}

void sort_array(unsigned char* array, unsigned int length) {
  // TODO: Sort the array from largest to smallest
}

void print_statistics(int min, int max, int mean, int median) {
  // TODO: Print the statistics (min, max, mean, median)
}

void print_array(unsigned char* array, unsigned int length) {
  // TODO: Print the array elements
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations  */
  // TODO: Declare variables for min, max, mean, median

  /* Statistics and Printing Functions */
  // TODO: Call sort_array, find_minimum, find_maximum, find_mean, find_median, print_statistics, print_array

  return 0;
}

/* Other Implementation File Code */
