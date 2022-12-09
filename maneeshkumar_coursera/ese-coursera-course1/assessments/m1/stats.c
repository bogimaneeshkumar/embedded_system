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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
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

  /* Other Variable Declarations Go Here */
  unsigned char minimum;
  unsigned char maximum;
  unsigned char mean ;
  unsigned char median;

  /* Statistics and Printing Functions Go Here */
  printf("Array before sorting: \n");
  print_array(SIZE,&test);
  mean = find_mean(SIZE,&test);
  maximum = find_maximum(SIZE,&test);
  minimum = find_minimum(SIZE,&test);
  sort_array(SIZE,&test);
  median = find_median(SIZE,&test);
  print_statistics(minimum, maximum, mean, median);
  printf("sorted array : \n");
  print_array(SIZE,&test);
}

unsigned char find_minimum (unsigned int size,unsigned char *array){
  int i = 0;
unsigned char min = array[i];
do
{
if(min>array[i]){min = array[i];}
i++;
}while(i< size);
return min;

}
unsigned char find_maximum (unsigned int size,unsigned char *array){
  int i = 0;
unsigned char max = array[i];
do
{
if(max<array[i]){max = array[i];}
i++;
}while(i< size);
return max;

}
unsigned char find_mean (unsigned int size,unsigned char *array){
  unsigned int sum = 0;
  unsigned char mean;
int i =0;
do
{
sum = sum + array[i];
i++;
}while(i< size);
mean = sum/size; //rounded off to nearest integer instead of taking float
return mean;
 
}

void print_array ( unsigned int size,unsigned char *array){
  for (int i=0; i<size; i++){
    printf("%d,", *(array + i));
  }
  printf("\n");
}


void sort_array (unsigned int size,unsigned char *array){
for(int i =0;i<size;i++){
int p;
for(int j = 0;j<size-i-1;j++)
{
if(array[j]<array[j+1]){
 p = array[j];
array[j] = array[j+1];
array[j+1] = p;}
}

}
}
unsigned char find_median (unsigned int size,unsigned char *array){
  unsigned char med;
int l = size/2;
sort_array(array[size],size);
if(size%2 ==0){
med = (array[l] + array[l-1])/2;
}
else{med = array[(size-1)/2];}
return med;
}
void print_statistics (unsigned char minimum, unsigned char maximum, unsigned char mean, unsigned char median){
  printf("The minimum is %d \n", minimum);
  printf("The maximum is %d \n", maximum);
  printf("The mean is %d \n", mean);
  printf("The median is %d \n", median);
}


