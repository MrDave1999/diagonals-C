#include <stdio.h>
#include "array.h"
      
void pd_right_asc(int** array, int value_j)
{
	for(int i = 0, j = value_j-1; i < value_j; i++)
		printf("%d,", array[i][j--]);
}

void pd_right_desc(int** array, int value_i)
{
	for(int i = value_i-1, j = 0; i >= 0; i--)
		printf("%d,", array[i][j++]);
}

void pd_right_below_asc(int** array, int value_i)
{
	for(int i = value_i, j = N-1; i < N; i++)
		printf("%d,", array[i][j--]);
}

void pd_right_below_desc(int** array, int value_j)
{
	for(int i = N-1, j = value_j; i >= value_j; i--)
		printf("%d,", array[i][j++]);
}