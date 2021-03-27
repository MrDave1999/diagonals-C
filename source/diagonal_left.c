#include <stdio.h>
#include "array.h"
        
void pd_left_asc(int** array, int value_j)
{
	for(int i = 0, j = value_j, n = N - j; i < n; i++)
		printf("%d,", array[i][j++]);
}

void pd_left_desc(int** array, int value_i)
{
	for(int i = (N - value_i)-1, j = N-1; i >= 0; i--)
		printf("%d,", array[i][j--]);
}

void pd_left_below_asc(int** array, int value_i)
{
	for(int i = value_i, j = 0; i < N; i++)
		printf("%d,", array[i][j++]);
}

void pd_left_below_desc(int** array, int value_j)
{
	for(int i = N - 1, j = (N - value_j) - 1; i >= value_j; i--)
		printf("%d,", array[i][j--]);
}