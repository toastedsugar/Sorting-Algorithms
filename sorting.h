/*************************************************************
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 ************************************************************/

#ifndef SORTING_H
#define SORTING_H

# include "time.h"

float Calculate_Runtime(clock_t end, clock_t start);
void printArr(int arr[], int ARRSIZE);

void insertionsort(int insertionArr[], int ARRSIZE);
void selectionSort(int selectionArr[], int ARRSIZE);



#endif
