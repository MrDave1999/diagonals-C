#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    
#include "diagonal_left.h"
#include "diagonal_right.h"
#include "curves.h"
#include "array.h"

void show_menu(int**);

int main(void)
{
	srand(time(NULL));
	printf("Enter the value of N for the array: ");
	scanf("%d", &N);
	int** m = create_array2d();
	if(m == NULL)
	{
		printf("Error: Could not reserve memory.\n");
		return EXIT_FAILURE;
	}
	printf("\n");
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			m[i][j] = (rand() % 90) + 10;
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	show_menu(m);
	free_array2d(m);
	printf("\n");
	return 0;
}

void show_menu(int** m)
{
	int op;
	printf("1. pd_right_asc/desc\n");
	printf("2. pd_right_below_asc/desc\n");
	printf("3. pd_left_asc/desc\n");
	printf("4. pd_left_below_asc/desc\n");
	printf("5. print_curves\n");
	printf("Enter an option [1-5]: ");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
			for(int i = 1; i <= N; i++)
			{
				pd_right_asc(m, i);
				printf("\n");
				pd_right_desc(m, i);
				printf("\n");
			}
			break;
		case 2:
			for(int i = 1; i < N; i++)
			{
				pd_right_below_asc(m, i);
				printf("\n");
				pd_right_below_desc(m, i);
				printf("\n");
			}
			break;
		case 3:
			for(int i = 0; i < N; ++i)
			{
				pd_left_asc(m, i);
				printf("\n");
				pd_left_desc(m, i);
				printf("\n");
			}
			break;
		case 4:
			for(int i = 1; i < N; i++)
			{
				pd_left_below_asc(m, i);
				printf("\n");
				pd_left_below_desc(m, i);
				printf("\n");
			}
			break;
		case 5:
			print_curves(m);
			break;
		default:
			printf("Wrong option!\n");
	}
}