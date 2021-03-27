#include "diagonal_right.h"
#include "array.h"
   
void print_curves(int** array)
{
	int i, total_curves = (N* 2) - 1;
	for(i = 1; i <= N; i++)
		(i % 2 == 0) ? pd_right_asc(array, i) : pd_right_desc(array, i);
	
	for(; i <= total_curves; i++)
		(i % 2 == 0) ? pd_right_below_asc(array, i - N) : pd_right_below_desc(array, i - N);
}