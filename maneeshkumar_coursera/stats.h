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
 * @file stats.h 
 * @brief  it is a header file needs to include declarations and documentation for the      * 
 * functions from the stats.c file
 *
 *
 * @author BOGI MANEESH KUMAR
 * @date 09/12/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
  unsigned char find_minimum (unsigned int size,unsigned char *array);
  
/**
 * @brief the find_minimum function is used to find the minimum value of the given elements of 
 * the array 
 *
 * finding minimum is done by assuming the first element of array as minimum initially then    
 * comparing minimum with all the elements of array if the element is less than minimum then 
 * replacing minimum value by that element.
 *
 * @param A unsigned char pointer to an n-element data array and An unsigned integer as the 
 * size of the array
 * 
 * @return An unsigned char minimum from the function
 */
  unsigned char find_maximum (unsigned int size,unsigned char *array);
/**
 * @brief the find_maximum function is used to find the maximum value of the given elements of 
 * the array 
 *
 * finding maximum is done by assuming the first element of array as maximum initially then    
 * comparing maximum with all the elements of array if the element is greater than maximum   
 * then replacing maximum value by that element.
 *
 * @param A unsigned char pointer to an n-element data array and An unsigned integer as the 
 * size of the array
 * 
 * @return An unsigned char maximum from the function
 */
  
  unsigned char find_mean (unsigned int size,unsigned char *array);
/**
 * @brief the find_mean function is used to find the mean value of the given elements of 
 * the array 
 *
 * finding mean is done by adding all elements of array and then dividing that sum by size of 
 * array
 *
 * @param A unsigned char pointer to an n-element data array and An unsigned integer as the 
 * size of the array
 * 
 * @return An unsigned char mean from the function
 */
  void sort_array (unsigned int size,unsigned char *array);
/**
 * @brief the sort_array function is used to sort the elements of array in descending order
 *
 * we use bubble sorting algorithm to sort the array here
 *
 * @param A unsigned char pointer to an n-element data array and An unsigned integer as the 
 * size of the array
 * 
 */
  unsigned char find_median (unsigned int size,unsigned char *array);
/**
 * @brief the find_median function is used to find the median value of the given elements of 
 * the array 
 *
 * finding median is done by 1st sorting the array and then if size of array is even then 
 * medain is the average of the size/2 th element and (size/2)+1 th element if size of array 
 * is odd then median is the middle most element.
 *
 * @param A unsigned char pointer to an n-element data array and An unsigned integer as the 
 * size of the array
 * 
 * @return An unsigned char median from the function
 */
  void print_array ( unsigned int size,unsigned char *array);
/**
 * @brief the print_array function is used to print all the elements of the arary
 *
 * @param A unsigned char pointer to an n-element data array and An unsigned integer as the 
 * size of the array
 */
  void print_statistics (unsigned char minimum, unsigned char maximum, unsigned char mean, unsigned char median);
/**
 * @brief the print_statistics function is used to print all the statistics found previously
 *
 * @param unsigned char minimum, unsigned char maximum, unsigned char mean, unsigned char 
 * median
 * 
 */

#endif /* __STATS_H__ */
