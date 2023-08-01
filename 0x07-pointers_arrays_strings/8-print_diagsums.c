#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int sum1=0,sum2=0,i,j;
  for(i=0,j=size-1;i<size;i++,j--) {
    sum1 += a[i * size + i];
     sum2+=a[i][j];

    }



 printf("%d",sum1)   ;
  printf("\n%d",sum2)   ;




}
