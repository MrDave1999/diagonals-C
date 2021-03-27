#include <stdlib.h>

int N;

int** create_array2d()
{
	int** array = malloc(sizeof(int*) * N);
	if(array == NULL)
		return NULL;
	for(int i = 0; i != N; ++i)
	{
		array[i] = malloc(sizeof(int)* N);
		if(array == NULL)
			return NULL;
	}
	return array;
}

void free_array2d(int** array)
{
	for(int i = 0; i != N; ++i)
		free(array[i]);
	free(array);
}