#include <stdio.h>


/*
 *Print 2d array
 */

void print_2d_array_using_array(int [3][3], int, int);
void print_2d_array_using_pointer(int (*) [3], int, int);
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	print_2d_array_using_pointer(a, 3, 3);
	print_2d_array_using_array(a, 3, 3);
}

/*print using array pointer*/
void print_2d_array_using_pointer(int (*array)[3], int row, int column)
{
	int r = 0, c = 0;
	for(r = 0; r < row; r++)
	{
		for(c = 0; c < column; c++)
		{
			printf("%d ",array[r][c]);
		}
		printf("\n");
	}
}

/*print using array pointer*/
void print_2d_array_using_array(int array[3][3], int row, int column)
{
	int r = 0, c = 0;
	for(r = 0; r < row; r++)
	{
		for(c = 0; c < column; c++)
		{
			printf("%d ",array[r][c]);
		}
		printf("\n");
	}
}

